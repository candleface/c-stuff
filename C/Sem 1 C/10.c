#include <stdio.h>
#define MAX 100 // Maximum number of students
int removeDuplicates(int arr[], int n); // Function prototype or declaration
void main()
{
int n, i;
int regNumbers[MAX];
// Input the number of students
printf("Enter the number of students: ");
scanf("%d", &n);
// Input the register numbers
printf("Enter the register numbers of students:\n");
for (i = 1; i <= n; i++)
{
printf("Register number %d: ", i );
scanf("%d", &regNumbers[i]);
}
// Remove duplicates
n = removeDuplicates(regNumbers, n);
// Display the register numbers after removing duplicates
printf("\nRegister numbers after removing duplicates:\n");
for (i = 0; i < n; i++)
{
printf("%d ", regNumbers[i]);
}
printf("\n");
}
// Function to remove duplicate register numbers
int removeDuplicates(int arr[], int n)
{
int i, j, k;
// Traverse each element and compare it with others
for (i = 0; i < n; i++)
{
for (j = i + 1; j < n;)
{
// If duplicate is found, shift all elements to the left
if (arr[i] == arr[j])
{
for (k = j; k < n - 1; k++)
{
arr[k] = arr[k + 1];
}
n--; // Reduce the size of array
}
else
{
j++; // Move to the next element
}
}
}
return n; // Return the new size of the array
}