#include <stdio.h>

int main() {
    struct stud {
        int age;
        char name[20];
        char gender[10];
    };

    struct stud *a;

    struct stud a1;
    printf("Enter the name:\n");
    scanf("%s", a1.name);
    printf("Enter the age:\n");
    scanf("%d", &a1.age);
    printf("Enter the gender:\n");
    scanf("%s", a1.gender);

    struct stud a2;
    printf("Enter the name:\n");
    scanf("%s", a2.name);
    printf("Enter the age:\n");
    scanf("%d", &a2.age);
    printf("Enter the gender:\n");
    scanf("%s", a2.gender);

    a = &a1;
    printf("%s\n", a->name);
    printf("%d\n", a->age);
    printf("%s\n", a->gender);

    a = &a2;
    printf("%s\n", a->name);
    printf("%d\n", a->age);
    printf("%s\n", a->gender);

    return 0;
}

