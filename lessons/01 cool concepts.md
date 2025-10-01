Why? C’s standard library functions often use int for small values to avoid type-promotion issues when calling the function.

But memset only cares about the lowest 8 bits (1 byte) of that int.


===========================================================


Key rule: Anything after return in the same function is dead code — it will never run.


===========================================================

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}
/*
int main(void)
{
    return (ft_isprint(*"a"));
}
*/

===========================================================

default argument promotion


===========================================================

In C, a header file is any file that ends with .h and contains declarations: function prototypes, type definitions (like structs), macros, etc. It does not usually contain implementations (the function bodies).


===========================================================


Ah, yes — that’s a subtle point. Here’s the difference:

Right now you have:

int main(void)
{
    return ft_strlen("bitchass");
}

===========================================================

This is valid C, but the return value of main is the exit status of the program, not printed to the terminal. So the program exits with code 9, but you don’t see anything.

Normally in C, main should return 0 to indicate success. Returning the result of a function is technically allowed, but it’s only meaningful to the operating system.


a character with a high bit set (like é or ß in some encoding).
char c = 'é';  // might be stored as 0xE9

If char is signed, 0xE9 → -23 in int.

If you pass this directly to toupper(), the function sees a negative number that isn’t EOF → undefined behavior.

Solution: cast to unsigned char:
toupper((unsigned char)c)


===========================================================


So what happens “in the background”

You have a char c in memory.
When you call toupper(c), C implicitly converts c to an int.
If c was negative (signed char), you could accidentally pass a negative int → UB.
Casting to unsigned char fixes the range to 0–255.
EOF is special: EOF itself is -1 (int), so toupper() knows to ignore it.




===========================================================


TL;DR
Pointer type	You can do…	Example use
char *s	modify the string	strcpy(dst, src)
const char *s	read only	strlen(s)

Using const is safer; it prevents accidental modification.

Functions differ at 42 either because of project rules or because modifying vs reading matters.