
/*========================== README.md ===============================*/

                                ALX priintf Project(GROUP)

#This a repository for the ALX team project for the printf.

#The printf() function prints output to stdout, according to format and other arguments passed to printf().
#The string format consists of two types of items - characters that will be printed to the screen,
#and format commands that define how the other arguments to printf() are displayed. Basically,
#you specify a format string that has text in it, as well as "special" characters that map to the other arguments of printf().

#The prototype of this function is: int _printf(const char format, ...);

#This means that it has one mandatory format argument, and an extra number of arguments that can be none, or many.

#Format of the format string

#The format string is a character string starting and ending with double quotes.
#The format string is composed of zero or more directives; ordinary characters (not %),
#and conversion specifications, each of which results in fetching zero or more subsequent arguments.

#Each conversion specification is introduced by the character % and ends with a conversion specifie.

                                    Synopsis

#The function _printf() writes output to stdout, the standard output stream with the format and options presented below.
#It uses an internal buffer of 1024 bytes although it can print larger sets of data.
#Upon successful execution, this function returns the number of characters printed (excluding the null byte used to end output to strings).
#If an output error is encountered, a negative value of -1 is returned.
#The prototype of this function is the next:
	int _printf(const char format, ...);

#Meaning that it has one mandatory format argument, and an extra number of arguments that can be none, or many.
#Format of the format string

#The format string is a character string starting and ending with double quotes.
#The format string is composed of zero or more directives; ordinary characters (not %),
#and conversion specifications, each of which results in fetching zero or more subsequent arguments.

#Each conversion specification is introduced by the character % and ends with a conversion specifier.
#In between there may be (in this order):
