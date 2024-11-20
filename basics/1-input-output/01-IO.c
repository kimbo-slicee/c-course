#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //
    int age;
    float height;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);  // Note: scanf stops at whitespace.

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Hello %s! You are %d years old and %.2f meters tall.\n", name, age, height);

    return 0;
}
