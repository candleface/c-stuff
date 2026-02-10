#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxstk 5

int top = -1;
int s[maxstk];

void display(){
    int i;
    if(top == -1){
        printf("\nStack is empty");
        return;
    }
    else{
        printf("\nStack elements:");
        for(i=top;i>=0;i--){
            printf("\t%d",s[i]);
        }
    }
}

void push(){
    int item;
    if(top==maxstk-1){
        printf("\nStack Overflow.");
    }
    else{
        printf("\nEnter the element to insert: ");
        scanf("%d", &item);
        top++;
        s[top]=item;
    }
    display();
}
void pop(){
    int item;
    if(top == -1){
        printf("\nStack Underflow.");
    }
    else{
        item = s[top];
        top--;
        printf("\nPopped element is %d", item);
    }
    display();
}

void main(){
    int choice;
    printf("\n~~~~Stack Using Array~~~~\n");
    printf("\n1.Insertion\n2.Deletion\n3.Exit\n");
    while(1){
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: exit(1);

            default: printf("\nInvalid choice.");
        }
    }
    getch();
}