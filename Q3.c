#include <stdio.h>
int main(){
    int a,b; 
    printf("Enter two numbers: \n");
    scanf("%d ",&a);
    scanf("%d", &b);

    int c=a+(~b+1);
    printf("Subtraction of Numbers: %d",c);
    
    return 0;
}