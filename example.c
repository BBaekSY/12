#include <stdio.h>
#include <string.h>

struct student {
    int ID;
    char name[10];
    double grade;
};

int main(void)
{
    struct student s1 = {24, "Kim", 4.3};

    printf("Before:\n");
    printf("ID: %d\n", s1.ID);
    printf("Name: %s\n", s1.name);
    printf("Grade: %.1f\n", s1.grade);

    s1.ID = 123456;
    strcpy(s1.name, "Baek");
    s1.grade = 4.2;

    printf("\nAfter:\n");
    printf("ID: %d\n", s1.ID);
    printf("Name: %s\n", s1.name);
    printf("Grade: %.1f\n", s1.grade);

    return 0;
}