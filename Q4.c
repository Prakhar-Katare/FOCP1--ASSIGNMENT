#include<stdio.h>
int main(){
    

    int a,b,temp; 
    printf("Enter frist numbers: \n");
    scanf("%d",&a);
    printf("Enter second numbers: \n");
    scanf("%d",&b);

    printf("Original numbers:\nA=%d\tB=%d\n",a,b);
    printf("After Swapping\n");


    temp=a; 
    a=b; 
    b=temp;
    printf("\nUsing Temp Variable: A=%d  B=%d!",a,b);
    

    int* aPtr=&b;
    int* bPtr=&a;
    printf("\nUsing Pointer Manipulation: A=%d  B=%d!",*bPtr,*aPtr);
    

    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nUsing Arithmetic Operator: A=%d  B=%d!",b,a);

// Using Bitwise XOR after this
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n Using Bitwise Xor: A=%d  B=%d!",a,b);

    return 0;
}