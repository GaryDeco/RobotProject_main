#include "test.h"
/* Some helpers for defining tests and checking their status*/

int tests_total = 0; // variable to hold data
int tests_fail = 0;  // variable to hold data


int close(float a, float b)
{
    return a-EPS<b && b<a+EPS;
}

void test()
{
    printf("%d tests, %d passed, %d failed\n", tests_total, tests_total-tests_fail, tests_fail);
}

void test_console_msg()
{
    printf(TEST_MSG);
}

