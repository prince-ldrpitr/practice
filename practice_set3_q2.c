/* Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. */
#include <stdio.h>

int main() {
    float sub1, sub2, sub3;
    float total, percentage;

    // Input marks
    printf("Enter marks of three subjects (out of 100):\n");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3;
    percentage = (total / 300) * 100;  // total marks = 300

    // Check pass/fail
    if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && percentage >= 40) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry! You have failed.\n");
    }

    return 0;
}