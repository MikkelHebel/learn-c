#include <stdio.h>
#include <stdbool.h>

int main(){
    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)
    float gpa = 3.75;
    float price = 19.99;
    float temperature = -10.1;

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.14lf\n", pi);
    printf("The value of e is %.14lf\n", e);

    printf("My current GPA is around: %.2f\n", gpa);
    printf("The price is: $%.2f\n", price);
    printf("It's currently %.3f°C\n", temperature);


    char grade = 'A';
    printf("Your grade is: %c\n", grade);

    char symbol = '!';
    printf("Favorite symbol %c\n", symbol);

    // Strings
    char name[] = "Mikkel";
    char food[] = "Sushi";
    printf("My name is %s I love %s\n", name, food);

    bool isOnline = true;
    printf("%d\n", isOnline);

    if (isOnline){
        printf("You are online!\n");
    } else {
        printf("You are offline!\n");
    }

    return 0;
}