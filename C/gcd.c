#include<stdio.h>
#include<conio.h>

int gcd(int m, int n){
    if(n==0){
        return m;
    }
    else{
        return (gcd(n, m%n));
    }
}

void main(){
    int k,m,n;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&k,&m,&n);
    printf("GCD = %d", gcd(gcd(k,m),n));
    getch();
}