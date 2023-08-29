#include "TQP.h"
#include "custom.h"

int main(void)
{
  disableWatchdog();
  targetInit();

  while (1)
  {
    tqpMain(); //function implemented in TQP.c
  }
}