#include <stdio.h>
#include "atm.h"

void display_notes(unsigned int counts) {
  unsigned int notes[] = {1, 5, 10, 20, 50, 100, 500, 2000};
  for(int i = 0; i < 8; i++) {
    printf("%d notes of RS %u\n", counts & 0xf, notes[i]);
    counts = counts >> 4;
  }
}

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};
  for (int i = 0; i < 6; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    printf("%5u %08x\n", amounts[i], notes);
    display_notes(notes);
  }

  return 0;
}
