#include "main.h"
/**
* _abs - computes the absulates value of an integer
* @c: the number tp be computed.
* Return: Absolute value of number or zero
*/
int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
