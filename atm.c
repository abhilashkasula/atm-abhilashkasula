#include "atm.h"

count get_money(cash amount) {
  count notes = 0x0;
  cash remaining = amount;
  cash denominations[8] = DENOMS;
  if(remaining <= LIMIT) {
    LOOP {
      notes = notes << 4;
      notes |= remaining / denominations[i];
      remaining %= denominations[i];
    }
  }
  return notes;
}