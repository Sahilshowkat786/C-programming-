#include <stdio.h>
int main(){
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
// no of students
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
// user detail
    for (int i = 0; i < n; i++) {
         printf("Enter details of student %d:\n", i + 1);
         printf("Name: ");
        scanf(" %[^\n]", s[i].name);
       
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
// printing
    printf("\n%-10s %-10s %-10s\n", "Name","RollNo", "Marks");
    for (int i = 0; i < n; i++) {
        printf(" %-10s %-10d %-10.2f\n", s[i].name,s[i].rollNo,s[i].marks);
    }

    
    return 0;
}
