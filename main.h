#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

/* checker for functions then print the string */
int format_checker(char c, va_list ap, int n); 

/* Function to print a single character */
int _putchar(char c);
/* Function to print a string */
int str_print(const char *s); 

/* Function to convert an integer to a string */
int d_i(int d);

/* Function to print an integer in binary format */
int b_print(int x);

/* Custom printf function */
int _printf(const char *format, ...);

#endif /* MAIN_H */
