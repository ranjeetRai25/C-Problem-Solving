#include <stdio.h>
#include<string.h>

int main() {


    char First_name[20], Last_name[20];
    int age;

    printf("enter First name: ");
    scanf("%s", &First_name);
    printf("enter Last name: ");
    scanf("%s", &Last_name);

    printf("enter age: ");
    scanf("%d", &age);

    printf("your First name is %s, Last name is %s, and age %d ", First_name, Last_name, age);
    

    return 0;
}