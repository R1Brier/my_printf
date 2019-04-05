# my_printf
This is my own version of the printf function from the GNU libC, implemented in c.
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
+ (show signs of signed numbers)
- (left padding)
0 (padding blank with 0)
# (displays 0x before hex numbers and 0 before octal numbers)

it comes out as an archive (.a), which is compiled but not linked code. 
