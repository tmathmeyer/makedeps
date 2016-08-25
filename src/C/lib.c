#include <stdio.h>

#include "lib.h"
#include "depA/depA.h"
#include "depB/depB.h"

void print_lib() {
    puts("lib");
}

int main() {
    print_lib();
    print_depA();
    print_depB();
}
