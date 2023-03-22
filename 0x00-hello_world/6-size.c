#include <stdio.h>
/**
 * main - Prints the size of various types based on
 * the computer it is compiled and run on..
 * return: Always 0.
 */
int main(void)
{

printf("Size of a char: %d byte(s)\n", (unsigned long), sizeof(char));
printf("Size of an int: %d byte(s)\n", (unsigned long), sizeof(int));
printf("Size of a long int: %d byte(s)\n", (unsigned long), sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (unsigned long), sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (unsigned long), sizeof(float));

return (0);
}
