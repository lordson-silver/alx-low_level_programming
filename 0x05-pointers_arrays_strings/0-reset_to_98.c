#include <stdio.h>


/*void reset_to_98(int *p);*/

/*
 * Main
 * Return: Always 0.
 */
/*
*int main(void)
*{
*	int n;
*
*	n = 402;
*	printf("n=%d\n", n);
*	reset_to_98(&n);
*	printf("n=%d\n", n);
*	return (0);
*}
*/

/*
* reset_to_98 - Function that takes a pointer to an int
* as paramete and updates the value it points to to 98 
* return: null
*/

void reset_to_98(int *p)
{
	*p = 98; /* dereferce p and assign 98 to it*/
}
