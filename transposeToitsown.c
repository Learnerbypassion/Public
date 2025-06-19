#include<stdio.h>
int main(){
    int n;
    printf("Enter the row or the column of the square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of the matrix: \n");
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("The transpose is: \n");
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<n; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    printf("Press Enter To Close...\n");
    getchar();
    getchar();
    return 0;
}