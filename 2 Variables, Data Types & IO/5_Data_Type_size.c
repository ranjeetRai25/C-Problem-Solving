#include <stdio.h>
#include<string.h>

int main() {

   int x;
   printf("size of x: %lu bytes\n", sizeof(x));

   float y;
   printf("size of y: %lu bytes\n", sizeof(y));

   double z;
   printf("size of z: %lu bytes\n", sizeof(z));

   char ch;
   printf("size of ch: %lu bytes", sizeof(ch));
   



    return 0;
}
