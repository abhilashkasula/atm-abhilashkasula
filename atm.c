#include "atm.h"

#define ones 0x1
#define fives 0x10
#define tens 0x100
#define twenties 0x1000
#define fifties 0x10000
#define hundreds 0x100000
#define five_hundreds 0x1000000
#define two_thousands 0x10000000

unsigned int get_money(unsigned short int amount) {
  unsigned int notes = 0x0;
  if(amount > 31999) return 0;
  notes += two_thousands * (amount / 2000);
  amount = amount % 2000;
  notes += five_hundreds * (amount / 500);
  amount = amount % 500;
  notes += hundreds * (amount / 100);
  amount = amount % 100;
  notes += fifties * (amount / 50);
  amount = amount % 50;
  notes += twenties * (amount / 20);
  amount = amount % 20;
  notes += tens * (amount / 10);
  amount = amount % 10;
  notes += fives * (amount / 5);
  amount  = amount % 5;
  notes += ones * (amount / ones);
  return notes;
}