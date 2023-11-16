#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/* Macros*/
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
extern char buffer[BUFF_SIZE];
/* Flags*/
#define F_MINUS 1
#define F_PLUS  2
#define F_ZERO  4
#define F_HASH  8
#define F_SPACE 16
/*Sizes*/
#define S_LONG  2
#define S_SHORT 1

/**
 *  struct fmt - struct for format specifier
 *  @fmt: string
 *  @fn: function
 */
struct fmt
{
	char *fmt;
	int (*fn)();
};
/*Typedef for the struct*/
typedef struct fmt fmt_t;
int _printf(const char *format, ...);
int handle_char(int *count, va_list args);
int handle_string(int *count, va_list args);
int handle_percent(void);
int handle_pointer(int *count, va_list args, char *buffer);
int handle_binary(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
void handle_write(int *count, va_list args, char *buffer);
int print_i(va_list args);
int print_d(va_list args);
int print_HEXA(va_list va);
int print_hexa(va_list va);
int print_unsigned(va_list args);
int print_octal(va_list va);
int print_hex_value(unsigned int number);
int printf_str(va_list arg);
int printf_rev_str(va_list va);
int rot13(char *m);

#endif
