#ifndef "MAIN_H"
#define "MAIN_H"

int _printf(const char *format, ...);
void handle_char(int *count, va_list args);
void handle_string(int *count, va_list args);
void handle_percent(int *count);
int _printf(const char *format, ...);
int _putchar(char c);
void print_i(va_list args);
void print_d(va_list args);

#endif
