#include<stdio.h>
int main(){


    int n,m;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    printf("Enter number of columns: ");
    scanf("%d",&m);

    int arr[n][m];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("Enter %d,%d element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[i][j]==99){
                printf("99 occurs at %d,%d in the array\n",i,j);
            }
        }
    }

    return 0;
}