#include <stdio.h>
#include<string.h>

int main() {

    float r;
    printf("enter radius of circle: ");
    scanf("%f", &r);

    const float pi = 3.14159;

    printf("Area of circle is %f cm2", pi*r*r);

//    char str[20];

//    printf("enter  the character: ");
//    gets(str);

//    int n = strlen(str);
//    printf("Reversed charcter: ");
//    for(int i = n-1; i>=0; i--){
//     printf("%c", str[i]);
//    }



    
    return 0;
}
