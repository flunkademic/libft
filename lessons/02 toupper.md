

2️⃣ RETURN VALUE of toupper()

Yes — toupper() returns an int.

C characters are stored as ASCII codes (or similar encodings like UTF-8).

Example:

char c = 'a';     // ASCII 97
int x = toupper(c); // returns 65 ('A')
printf("%d\n", x); // prints 65
printf("%c\n", x); // prints 'A'


If the character can’t be converted (like 1 or #), toupper() just returns the same value:

char c = '1';
int x = toupper(c); // returns 49, ASCII code for '1'


That’s why man page says:

“The value returned is that of the converted letter, or c if conversion was not possible.”

Important: toupper() returns an int, not a char, because it needs to also be able to return EOF (-1) safely.





TL;DR

toupper() never generates EOF.

It returns EOF only if you pass EOF to it.

This allows safe loops over input streams:

while ((ch = getchar()) != EOF) {
    putchar(toupper((unsigned char)ch));
}


If toupper() didn’t accept EOF, you’d risk undefined behavior at the end of input.


