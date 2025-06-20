/*
    Matrix Multiplication in C

    This program multiplies two matrices entered by the user.
    - It first takes the dimensions and elements of the first and second matrices.
    - It checks if the matrices can be multiplied (the number of columns of the first matrix must equal the number of rows of the second matrix).
    - If multiplication is possible, it computes and displays the resulting matrix.
    - If not, it displays an error message.

    The program uses variable length arrays (VLAs), so it requires a C99 or later compiler.
*/
#include<stdio.h>
int main(){
    printf("\n");
    int a,b,c,d;
    // 1st Matrix:
    printf("Enter the row of the first matrix: ");
    scanf("%d", &a);
    printf("Enter the column of the first matrix: ");
    scanf("%d", &b);
    int arr[a][b];
    printf("Enter the elements of the first matrix: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    // 2nd Matrix:
    printf("Enter the row of the second matrix: ");
    scanf("%d", &c);
    if(b == c){ 
    printf("Enter the column of the second matrix: ");
    scanf("%d", &d);
    int brr[c][d];
    printf("Enter the elements of the second matrix: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d", &brr[i][j]);
        }
    }
    
        int res[a][d];
        int cr = b;
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                res[i][j] = 0;
                for(int k=0;k<cr;k++){
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        printf("\nOutput: \n");
        printf("\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        printf("(*)\n");
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                printf("%d ", brr[i][j]);
            }
            printf("\n");
        }
        printf("(=)\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Multiplication can't be done\n");
    }
    printf("Press enter to close..");
    getchar();
    getchar();
    return 0;
}
