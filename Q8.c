#include<stdio.h>
int main(){


    int i,a=0,b=1,c=0;
    printf("Enter a number: ");
    scanf("%d",&i);
    
    printf("Fibonacci Series till %d: \n",i);
    while(a<=i){
        printf("%d ",a);
        c = a + b; 
        a = b;
        b = c;
    }
    return 0;
}