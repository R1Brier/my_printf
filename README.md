# my_printf
Printf function from the GNU libC, re-implemented in c only with Write(), Malloc() and Free() system Calls.
It has many differents flags such as:
%d (decimal integer)
%s (string)
%p (pointer)
%b (binary number)
%x / %X (Hexadecimal numbers)
%o (octal number)
%f (double)
%n (number of character written by printf call)

and also several formats:
'+' (show signs of signed numbers)
'-' (left padding)
'0' (padding blank with 0)
'#' (displays 0x before hex numbers and 0 before octal numbers)

it comes out as an archive (.a), which is compiled but not linked code and can be used in other programs instead of the real printf() function. 
