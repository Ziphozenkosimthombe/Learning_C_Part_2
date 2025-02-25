#include <stdio.h>

/**
 * main entry
 * Description: Prints the alphabets in lowercase except q and e
 * Return: Always 0 (Success)
 */

int main(void) {
  char letter = 'a';

  while (letter <= 'z') {
    if (letter == 'e' || letter == 'q') {
      letter++;
      continue;
    } else {
      putchar(letter);
      letter++;
    }
  }
  putchar('\n');
  return (0);
}
