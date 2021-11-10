#include <stdio.h>
struct student {
    char Name[50];
    int id;
    char semester[20];
    float cgpa;
} s[40];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 40; i++) {
        scanf("%d", &s[i].id);
        printf("Enter name: ");
        scanf("%s", s[i].Name);
        printf("Enter Semester: ");
        scanf("%s", s[i].semester);
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 40; ++i) {
        printf("Id: \n");
        printf("\nID: %d\n", s[i].id);
        printf("name: ");
        puts(s[i].Name);
        printf("Enrollment semester: ");
        puts(s[i].semester);
        printf("CGPA: %.1f", s[i].cgpa);
        printf("\n");
    }
    return 0;
}
