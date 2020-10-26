#include "io.h"

void io_console_msg()
{
    printf(IO_TEST_MSG);
}



//void GPIO_Init(void){
  // initialize P4.3-P4.0 and make them outputs
//  P4->SEL0 &= ~0x0F;
//  P4->SEL1 &= ~0x0F;            // configure stepper motor/LED pins as GPIO
//  P4->DIR |= 0x0F;              // make stepper motor/LED pins out
//}
