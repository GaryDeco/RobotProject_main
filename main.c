//-- Standard library--//

#include <string.h>
#include <stdlib.h>
//#include <stdio.h>
//-- CCS generated --//
#include "msp.h"
//-- built --//
#include "test.h"
#include "bump.h"
#include "io.h"
//#include "bump.h"
//-------- Definitions --------//

//----------- Main ------------//
int main(void)

{

    test_console_msg(); // msg from test.c,test.h
    bump_console_msg(); // msg from test.c,test.h
    io_console_msg(); // msg from test.c,test.h
    return 0; // eliminate exit.c

}


