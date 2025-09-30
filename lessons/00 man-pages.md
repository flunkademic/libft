
Manual Pages are built-in documentation system in Unix/Linux.

Man Page Sections:
1 -> user commands (ls, cp, etc.)
2 -> system calls (open, read)
3 -> library calls (C standard library like toupper, printf)
5 -> file formats/configs (/etc/passwd)
7 -> conventions, standards, mics docs
8 -> system admin commands

NOTE: So if you type just man toupper, you may need to specify the section: man 3 toupper.


HOW TO READ MAN PAGE: 
Where does it say what it takes? → in SYNOPSIS (int toupper(int c)).

Where does it say what it returns? → in RETURN VALUE.

Where is the definition? → in DESCRIPTION, plus the prototype in SYNOPSIS.




Structure of a man page (using toupper(3) as example)


NAME

The function(s) or command(s) and a short description.
→ toupper, tolower, ... – convert uppercase or lowercase.


LIBRARY

Which library the function lives in.
→ “Standard C library (libc, -lc)” → this tells you it’s in libc, automatically linked in C programs.


SYNOPSIS

How to use it in code — includes headers and prototypes.

#include <ctype.h>

int toupper(int c);

This tells you:
You must #include <ctype.h>
The function name and prototype
Input: int c
Output: int return value


DESCRIPTION

Explains what the function does.
If c is lowercase, toupper returns uppercase.
If not lowercase, it just returns c.
Mentions special rules about locales.
This is the "definition in plain English."

RETURN VALUE

What comes back from the function.

Returns the converted character, or c unchanged if no conversion was possible.




When you look at a man page, focus on these things:

SYNOPSIS → what header to include, the function prototype, argument types.
DESCRIPTION → what the function does.
RETURN VALUE → what you can expect back.
NOTES / ERRORS → pitfalls and edge cases.



Example:
int toupper(int c);
Takes: int c (but really should be an unsigned char cast, or EOF)
Returns: the uppercase equivalent if possible, otherwise unchanged.
Use case: converting characters safely.




🔢 Man Page Sections (commonly used)
Section	What it covers	Example
1	User commands	ls(1)
2	System calls (kernel services)	open(2)
3	C library functions	toupper(3)
4	Devices / special files	tty(4), /dev/null(4)
5	File formats / configs	passwd(5)
6	Games, demos	fortune(6)
7	Misc (conventions, standards)	locale(7)
8	System admin commands	mount(8)

👉 Some systems have even more (9 = kernel internals), but 1–8 are the core.


🧭 How to Read a Man Page

SYNOPSIS → function prototype, required headers, arguments.
DESCRIPTION → what it does.
RETURN VALUE → what comes back.
ERRORS / NOTES → pitfalls, edge cases, gotchas.
SEE ALSO → related functions.


TL;DR

Man pages are universal docs in Linux/Unix.
Sections separate commands, syscalls, libraries, configs, etc.
C is everywhere (Linux, Windows, Unix, macOS).
Locale = system language/cultural settings.
EOF = special “end of file” marker, not a real character.


<!-- 
Functions that deal with strings care about '\0'.

Functions that deal with input care about EOF.
 -->