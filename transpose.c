#include<stdio.h>
int main(){
    int r , c;
    printf("Enter the number of row: ");
    scanf("%d", &r);
    printf("Enter the number of column: ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element of index:(%d , %d): ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Matrix is: \n");
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int aT[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            aT[j][i] = arr[i][j];
        }
    }
    printf("The transpose of the matrix is: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ", aT[i][j]);
        }
        printf("\n");
    }
    printf("Press enter to close....");
    getchar();
    getchar();
    return 0;
}