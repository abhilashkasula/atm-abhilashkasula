#include <stdio.h>
#include "atm.h"

void display_notes(count notes) {
  cash denominations[8] = DENOMS;
  LOOP {
    printf("%02d notes of RS %04u\n", notes >> 28, denominations[i]);
    notes = notes << 4;
  }
}

int main(void)
{
  cash amounts[] = {1, 10, 39, 589, 2590, 31999};
  for (int i = 0; i < 6; i++)
  {
    count notes = get_money(amounts[i]);
    printf("%5u %08x\n", amounts[i], notes);
    display_notes(notes);
  }

  return 0;
}
