#include <stdio.h>
void main( )
{
    int n;
    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    // Declare an array to hold the marks
    float marks[n];
    float sum = 0.0;
    // Read the marks of each student
    for (int i = 1; i <= n; i++)
    {
        printf("Enter marks for student %d: ", i );
        scanf("%f", &marks[i-1]);
        sum = sum + marks[i-1]; // Add the marks to the sum
    }
    // Calculate the average marks
    float average = sum / n;
    // Display the average marks
    printf("The average marks of the students is: %0.2lf\n", average);
}