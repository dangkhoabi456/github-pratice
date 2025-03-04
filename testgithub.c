#include <stdio.h>

int main() {
    int age;
    char name[50], school[50];

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter student age: ");
    scanf("%d", &age);
    getchar(); 

    printf("Enter student school: ");
    fgets(school, sizeof(school), stdin);

    printf("\nStudent name: %s", name);
    printf("Student age: %d\n", age);
    printf("Student school: %s", school);

    return 0;
}
