#include <stdio.h>
#include <string.h>
void main()
{
char firstName[50], surname[50], fullName[100], copyFirstName[50];
int lengthFirstName;
// Input first name and surname
printf("Enter your first name: ");
scanf("%s", firstName);
printf("Enter your surname: ");
scanf("%s", surname);
// Find the length of the first name
lengthFirstName = strlen(firstName);
printf("The number of characters in your first name: %d\n", lengthFirstName);
// Concatenate first name and surname
strcpy(fullName, firstName);
strcat(fullName, " ");
strcat(fullName, surname);
printf("Full name (after adding surname): %s\n", fullName);
// Copy first name to another variable
strcpy(copyFirstName, firstName);
printf("Copied first name: %s\n", copyFirstName);
// Compare first name and surname
int compareResult = strcmp(firstName, surname);
if (compareResult == 0)
{
printf("First name and surname are the same.\n");
}
else
{
printf("First name and surname are different.\n");
}
}