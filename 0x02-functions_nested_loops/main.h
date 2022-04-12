#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 *@c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c);

/**
 * print_alphabet - print all lower case letters
 *
 * Return: nothing
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print all lower case letters
 *
 * Return: nothing
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if the character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if yes and 0 if not
 */
int _islower(int c);

/**
 * _isalpha - checks if the character is an alphabet
 * @c: the character to be checked
 *
 * Return: 1 if yes and 0 if not
 */
int _isalpha(int c);

/**
 * print_sign - Prints the sign of the number
 * @n: the number to be checked
 *
 * Return: 1 if positive and 0 if zero and -1 if neg.
 */
int print_sign(int n);

/**
 * _abs - Evaluates the absoulte value
 * @n: the input number
 *
 * Return: Returns the absolute value
 */
int _abs(int n);

/**
 * print_last_digit - Prints the last digit of a number
 * @n: the input number
 *
 * Return: Returns the last digit
 */
int print_last_digit(int n);

/**
 * jack_bauer - print every minute in a day
 *
 * Return: nothing
 */
void jack_bauer(void);

/**
 * times_table - prints out the times table
 *
 * Return: nothing
 */
void times_table(void);

/**
 * add - adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 *
 * Return: returns the result
 */
int add(int n1, int n2);

/**
 * print_to_98 - print numbers to 98
 * @n: starting point of the count
 *
 * Return: nothing
 */
void print_to_98(int n);

/**
 * print_times_table - prints a time table
 * @n: size of the table
 *
 * Return: nothing
 */
void print_times_table(int n);

#endif
