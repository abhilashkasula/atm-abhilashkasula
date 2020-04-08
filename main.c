#include <stdio.h>
#include "atm.h"

void display_notes(unsigned int counts) {
  unsigned int notes[] = {2000, 500, 100, 50, 20, 10, 5, 1};
  for(int i = 0; i < 8; i++) {
    printf("%02d notes of RS %04u\n", counts >> 28, notes[i]);
    counts = counts << 4;
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
