#include<stdio.h> 
int main(){


    int n; 
    printf("Enter number of values in array: ");
    scanf("%d",&n);

    int arr[n],arr1[n];
    printf("Enter %d values: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }


    printf("\nArray before rotating: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    for(int i=1; i<n; i++){
        arr1[i]=arr[i-1];
    }
    arr1[0]=arr[n-1];


    printf("\nArray after rotating: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr1[i]);
    }
}