#include "main.h"

/**
 * main - Entry point
 * Description - printing the alphebet in lowecase must be printed 10 times.
 * Return - void.
 */

void print_alphabet_x10(void) {
  char letter = 'a';
  char i = 1;

  while (i <= 10) {
    while (letter <= 'z') {
      _putchar(letter);
      letter++;
    }
    letter = 'a'; // reset letter = 'a' for the next iteration.
    _putchar('\n');
    i++;
  }
  return;
}
