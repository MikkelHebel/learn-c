#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter last grade: ");
    scanf(" %c", &grade);

    getchar(); // Clear newline char in in stdin buffer
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Hello %s, you are a %d year old person with a %.2f GPA and your last grade was: %c\n", name, age, gpa, grade);

    return 0;
}