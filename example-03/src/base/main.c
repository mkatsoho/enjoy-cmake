#include <stdio.h>
#include "calc.h"

extern int func1();
extern int func2();

int main() {
   printf("Hello World\n");
   func1();
   func2();
   return triple(5);
}
