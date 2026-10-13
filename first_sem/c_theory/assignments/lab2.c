#include <stdio.h>

int main()
{
    int rollno;
    float m1, m2, m3, m4, m5;
    float total, average, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollno);

    printf("Enter marks in 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("\n----- STUDENT MARKS -----\n");
    printf("Roll Number = %d\n", rollno);
    printf("Total Marks = %.2f\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}