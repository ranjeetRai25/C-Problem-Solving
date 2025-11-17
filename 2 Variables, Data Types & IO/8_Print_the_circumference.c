#include <stdio.h>

float main() {

    float r;
    printf("enter radius of circle: ");
    scanf("%f", &r);

    float pi = 3.14159;

    printf("Circumference of circle is %f", 2*pi*r);
    return 0;
}
