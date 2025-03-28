#include <stdio.h>

/**
 * main - Entry point
 * description: prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void) {
  int digit = 0;
  while (digit < 10) {
    putchar(digit + '0');
    if (digit < 9) {
      putchar(',');
      putchar(' ');
    }
    digit++;
  }
  putchar('\n');
  return (0);
}
