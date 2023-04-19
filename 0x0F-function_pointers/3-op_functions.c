#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the summ of 2 numbers.
 * @a: The first number.
 * @b: The scnd number.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of 2 numbers.
 * @a: The first number.
 * @b: The scnd number
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the multiplication of two numbers.
 * @a: The first number.
 * @b: The scnd num
 * Return: The result of multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number
 * @b: The scnd number
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remaining of the division of two numbers.
 * @a: The first number.
 * @b: The secnd num
 * Return: The remaning of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
