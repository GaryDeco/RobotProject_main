//-- Standard library--//

#include <string.h>
#include <stdlib.h>
//#include <>
//-- CCS generated --//
#include "msp.h"
//-- built --//
#include "test.h"
#include "bump.h"
#include "io.h"
#include "clock.h"
#include "launchpad.h"

//-------- Definitions --------//

//----------- Main ------------//
int main(void)

{

    test_console_msg(); // msg from test.c,test.h
    bump_console_msg(); // msg from bump.c,bump.h
    io_console_msg(); // msg from io.c,io.h
    clock_console_msg();// msg from clock.c,clock.h
    launchpad_console_msg(); //msg from launchpad.c,launchpad.h

    //return 0; // eliminate exit.c

}


