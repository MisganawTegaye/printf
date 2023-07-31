#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define BUFF_SIZE 1024

/**
 * struct print_handler - Function pointer to print handler
 * @specifier: The format specifier
 * @handler: Pointer to the corresponding print handler function
 */
typedef struct print_handler
{
	char specifier;
	int (*handler)(char buffer[], int *buff_ind, va_list args);
} print_handler_t;

int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);

#endif /* MAIN_H */
