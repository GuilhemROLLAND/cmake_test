#include <stdio.h>
#include "stdlib.h"
#include "my_lib_top.h"

void lib_top(void)
{
    printf("In my_lib_top.\n");
    lib_mid();
}