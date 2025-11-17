#include <stdio.h>

float main() {

   int a = 5;
   int b = 7;
   int temp;

   temp = a;
   a = b;
   b = temp;

   printf("print the swap number a = %d & b = %d",a, b);

    return 0;
}
