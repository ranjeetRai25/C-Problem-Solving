#include <stdio.h>
#include<string.h>

int main() {

    char name[20];

    printf("Please enter your name: ");
    scanf("%19s", name);

    printf("Welcome %s ", name);

    return 0;
}
