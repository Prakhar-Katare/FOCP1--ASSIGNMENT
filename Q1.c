#include <stdio.h>
#include <math.h>
int main(){
    int a, original,num,ans=0, rem;//n=a, original, num, result=ans=0, rem

    printf("Enter a number : ");
    scanf("%d",&num);

    original=num;
    while(original!=0){
        original=original/10;
        a++;

    }
    while(original!=0){

        rem=original%10;
        ans=ans + pow(rem,a);
        original=original/10;
    }
    if(original==ans){
        printf("THE GIVEN NUMBER IS AN ARMSTRONG NUMBER ");
    }else{
        printf("Not an Armstrong number");
    }
    return 0;
}