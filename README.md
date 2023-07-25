0x11. C - printf

Writing our own printf function, under ALX Low Level Programming

Group project by: Emmanuel Asiedu and Priscilla Yartey.

Task 0:
Write a function `_printf` that produces output according to a format string. It should handle conversion specifiers `%c`, `%s`, and `%%`.

Task 1:
Extend the `_printf` function to handle conversion specifiers `%d` and `%i`, which print signed integers.

Task 2:
Add support for a custom conversion specifier `%b`, which converts an unsigned integer argument to binary.

Task 3:
Extend `_printf` to handle conversion specifiers `%u`, `%o`, `%x`, and `%X`, which print unsigned integers in decimal, octal, and hexadecimal format (lowercase and uppercase).

Task 4:
Optimize the `_printf` function by using a local buffer of 1024 characters to minimize the number of calls to `write`.

Task 5:
Handle the custom conversion specifier `%S`, which prints strings and represents non-printable characters (ASCII value less than 32 or greater than or equal to 127) as `\x` followed by the ASCII code value in hexadecimal (uppercase).

Task 6:
Handle the conversion specifier `%p`, which prints pointers in hexadecimal format.

Task 7:
Add support for the flag characters `+`, `space`, and `#` for non-custom conversion specifiers.

Task 8:
Handle the length modifiers `l` and `h` for non-custom conversion specifiers (`d`, `i`, `u`, `o`, `x`, `X`).

Task 9:
Implement handling of the field width for non-custom conversion specifiers.

Task 10:
Handle the precision for non-custom conversion specifiers.

Task 11:
Add support for the `0` flag character for non-custom conversion specifiers.

Task 12:
Implement handling of the `-` flag character for non-custom conversion specifiers.

Task 13:
Handle the custom conversion specifier `%r`, which prints the reversed string.

Task 14:
Implement handling of the custom conversion specifier `%R`, which prints the string in ROT13 encoding.

Task 15:
Ensure that all the above options work together seamlessly, allowing for multiple combinations of format specifiers.
