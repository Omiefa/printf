#include "main.h"

int _printf(const char *format, ...)
{
  int count = 0;
  va_list arg_ptr;
  va_start(arg_ptr, format);

  while (*format != '\0')
  {
    if (*format == '%')
    {
      format++;

      switch (*format)
      {
        case 'c':
          {
            count += gr_putchar(arg_ptr);
            break;
          }
        case 's':
          {
            count += gr_print_str(arg_ptr);
            break;
          //}
        //case 'd':
          //case 'i':
          //{
            //count += _printint(args);
            //break;
          //}
        default:
          {
            count += _putc('%');
            count += _putc(*format);
            break;
          }
      }
    }
    else
    {
      count += _putc(*format);
    }
    format++;
  }
  va_end(args);

  return (count);
}

