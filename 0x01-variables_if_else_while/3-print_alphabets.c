#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabets in lowercase and upppercase follow by the
 * newline Return: Always 0 (Success)
 */

int main(void) {

  char letter_lower = 'a';
  char letter_upper = 'A';

  while (letter_lower <= 'z') {
    putchar(letter_lower);
    letter_lower++;
  }
  while (letter_upper <= 'Z') {
    putchar(letter_upper);
    letter_upper++;
  }
  putchar('\n');
  return (0);
}
