#include <stdio.h>

/**
 * main entry
 * Description: print all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void) {
  int digit = 0;
  while (digit < 10) {
    printf("%d", digit);
    digit++;
  }
  putchar('\n');
  return (0);
}
