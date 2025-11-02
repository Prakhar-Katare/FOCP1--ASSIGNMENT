#include<stdio.h>
int main(){


    int n,count=0,count1=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

    int scores[n];
    printf("Enter %d numbers to be stored in the array: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&scores[i]);
    }
    
    int even_arr[n],odd_arr[n];


    for(int i=0; i<n; i++){
        if(scores[i]%2==0 ){
            even_arr[count++]=scores[i];
        }
        else{ odd_arr[count1++]=scores[i];
        }
    }


    printf("\nScores: ");
    for(int i=0; i<n; i++){
        printf("%d ",scores[i]);
    }printf("!");


    printf("\n\nEven Scores: ");
    for(int j=0; j<count; j++){
        printf("%d ",even_arr[j]);
    }printf("!");
        

    printf("\nOdd Scores: ");
    for(int j=0; j<count1; j++){
        printf("%d ",odd_arr[j]);
    }printf("!");
    return 0;
}