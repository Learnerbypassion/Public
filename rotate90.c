#include<stdio.h>
void transpose(int n, int arr[][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    return ;
}
void rotate(int n, int arr[][n]){
    for(int i=0;i<n;i++){
        for(int k=0,j=n-1;k<j;k++,j--){
            int temp = arr[i][k];
            arr[i][k] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    return ;
}
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
    transpose(n,arr);
    rotate(n,arr);
    printf("The 90 Degree rotated matrix is, here: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Press Enter To Close...\n");
    getchar();
    getchar();
    return 0;
}