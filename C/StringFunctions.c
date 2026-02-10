/*Given S1 = {"Flowers"}  ; S2 = {"are beautiful"}
a)Find the length of S1
b) Concatenate S1 and S2.
c)Extract the substring "low" from S1.
d) Find "are" in S2 and replace it with "is" */

#include<stdio.h>
#include<string.h>

void main(){
    char S1[] = "Flowers";
    char S2[] = "are beautiful";
    char concat[100],substring[100],S3[100];

    char *pos;
    int len;
    printf("\n~~~~String Functions~~~~\n\n");
    printf("Given S1 = %s \nS2 = %s\n\n", S1, S2);
    // a) Find the length of S1
    len = strlen(S1);
    printf("Length of String1: %d\n", len);
    // b) Concatenate S1 and S2.
    strcpy(concat, S1);
    strcat(concat, " ");
    strcat(concat, S2);
    printf("Concatenated string: %s\n", concat);
    
    //c)Extract the substring "low" from S1.
    strncpy(substring, S1 + 1, 3);
    substring[3] = '\0'; // Null-terminate the substring
    printf("Extracted substring: %s\n", substring);

    // d) Find "are" in S2 and replace it with "is"
    strcpy(S3, S2); // Copy S2 to S3 for modification
    pos = strstr(S3, "are");
    if (pos != NULL) {
        strncpy(pos, "is ", 3); // Replace "are" with "is "
    }
    printf("Modified S2: %s\n", S3);
}