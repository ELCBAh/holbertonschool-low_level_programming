#ifndef OP_FUNCTIONS_C
#define OP_FUNCTIONS_C
#include "3-calc.h"
/**
 * op_add - init add prot
 * @a: 1st
 * @b: 2nd
 * Description: adds two nums
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - init sub prot
 * @a: 1st
 * @b: 2nd
 * Description: subs two nums
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - init mul prot
 * @a: 1st
 * @b: 2nd
 * Description: mults two nums
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - init div prot
 * @a: 1st
 * @b: 2nd
 * Description: divs two nums
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - init mod prot
 * @a: 1st
 * @b: 2nd
 * Description: takes mod of two nums
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
#endif
