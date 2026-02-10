#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#define max 20

int s[max],top=0;

void push(int element){
    ++top;
    s[top] = element;
}

int pop(){
    int element;
    element = s[top];
    --top;
    return element;
}

void main(){
    char postfix[max],ch;
    int i,op1,op2,res;
    printf("Enter the postfix expression:\n");
    scanf("%s",&postfix);

    for(i=0;i<strlen(postfix);i++){
        ch = postfix[i];

        if(isdigit(ch)){
            push(ch-'0');
        }
        else{
            op2 = pop();
            op1 = pop();

            switch(ch){
                case '+': res = op1 + op2;
                break;
                case '-': res = op1 - op2;
                break;
                case '*': res = op1*op2;
                break;
                case '/' : res = op1/op2;
                break;
                case '^' : res= pow(op1,op2);
                break;
                default: break;
            }
            push(res);
        }
    }
    printf("Result of the above expression is : %d\n", pop());
    getch();
}