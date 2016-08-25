#include <stdio.h>

#include "depA.h"
#include "depB/depB.h"

void print_depA() {
    puts("depA");
    print_depB();
}
