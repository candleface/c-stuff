// Online C compiler to run C program online
#include <stdio.h>

char* get_name (void);
int main(void){
    char* name = get_name();    
    printf ("Your name is : %s \n", name);
    
    char yn;
    printf ("Correct (y/n): ");
    scanf ("%c ", &yn);
    
    while (yn == 'n'){
        char* name = get_name();    
        printf ("Your name is : %s", name);
        char yn;
        printf ("Correct (y/n): ");
        scanf ("%c ", &yn);
        break;
    }
}
char* get_name (void)
{
    static char name[100] ;
    printf ("Enter your name: ");
    scanf(" %[^\n]", name);

    return name;
}
