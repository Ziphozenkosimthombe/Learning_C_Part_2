#include <stdio.h>

/**
 * C program that prints the size of various types
 * Return: 0
 */


int main(void) {
  printf("Size of a char : %lu bytes\n", sizeof(char));
  printf("Size of a int : %lu bytes\n", sizeof(int));
  printf("Size of a long int : %lu bytes\n", sizeof(long int));
  printf("Size of a long long int : %lu bytes\n", sizeof(long long int));
  printf("Size of a float : %lu bytes\n", sizeof(float));

  return (0);
}
