#include <stdio.h>
 
char marks_allotment(int marks) {
    if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else {
        return 'E';
    }
    printf("Marks: %d, Grade: %c\n", marks, marks_allotment(marks));
}

int main(){

    int marks= 76;
    int marks1= 85;
    int marks2= 92;

    printf("Marks: %d, Grade: %c\n", marks, marks_allotment(marks));
    printf("Marks: %d, Grade: %c\n", marks1, marks_allotment(marks1));
    printf("Marks: %d, Grade: %c\n", marks2, marks_allotment(marks2));

    return 0;
}