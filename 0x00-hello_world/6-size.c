#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
int a;
long long int c;
char d;
float f;
long int b;
printf("size of a char: %d byte(s)\n", sizeof(d));
printf("size of an int: %d byte(s)\n", sizeof(a));
printf("size of a long int: %d byte(s)\n", sizeof(b));
printf("size of a long long int: %d byte(s)\n", sizeof(c));
printf("size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
