#include "main.h"

/**
 * description: function that print alphabet in lowercase
 * Return: alway 0
 */

void print_alphabet(void) {
  char letter = 'a';
  while (letter <= 'z') {
    _putchar(letter);
    letter++;
  }
  _putchar('\n');
  return;
}
