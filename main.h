#ifndef "MAIN_H"
#define "MAIN_H"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/* Macros*/
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
/* Flags*/
#define F_MINUS 1
#define F_PLUS  2
#define F_ZERO  4
#define F_HASH  8
#define F_SPACE 16
/*Sizes*/
#define S_LONG  2
#define S_SHORT 1
/* Struct for format specifier*/
struct fmt {
    char fmt;
    int (*fn)(va_list, char[], int, int, int, int);
};
/*Typedef for the struct*/
typedef struct fmt fmt_t;
int _printf(const char *format, ...);
void handle_char(int *count, va_list args);
void handle_string(int *count, va_list args);
void handle_percent(int *count);
void handle_binary(int *count, va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
void print_i(va_list args);
void print_d(va_list args);
void print_HEXA(va_list va);
void print_hexa(va_list va);
void print_unsigned(va_list args);
void print_octal(va_list va);

#endif
