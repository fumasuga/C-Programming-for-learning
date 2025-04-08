#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float gpa;
};

int main() {

    struct Student student1 = {"Mike", 2.5};
    struct Student student2 = {"John", 3.8};
    struct Student student3 = {"Alice", 2.9};
    struct Student student4 = {"Bob", 2.2};
    struct Student student5 = {"Eve", 1.7};
    
    struct Student students[] = {student1, student2, student3, student4, student5};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("Name: %s, GPA: %.2f\n", students[i].name, students[i].gpa);
    }
    return 0;
}