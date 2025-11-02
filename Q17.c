#include<stdio.h>
int main(){
    

    
   int n, index;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter position of number to delete: ", n);
    scanf("%d", &index);


    printf("\nArray before Deletion:\n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    for(int i=index; i<n; i++) {
        arr[i]=arr[i+1];
    }n--;
    
    printf("\nArray after deletion:\n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}