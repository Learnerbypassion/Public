#include<stdio.h>
int sum(int l1, int r1, int l2, int r2 , int c, int arr[][c]){
    int sum=0;
    for(int i=l1;i<l2+1;i++){
        for(int j=r1;j<r2+1;j++){
            sum += arr[i][j];
        }
    }
    return sum;
}
int main(){
    int r , c;
    printf("Enter the number of row: ");
    scanf("%d", &r);
    printf("Enter the number of column: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Eneter the element of the array: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The array is: \n");
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int l1,r1,l2,r2;
    printf("Enter the l1: ");
    scanf("%d", &l1);
    printf("Enter the r1: ");
    scanf("%d", &r1);
    printf("Enter the l2: ");
    scanf("%d", &l2);
    printf("Enter the r2: ");
    scanf("%d", &r2);
    printf("The sub-array is: \n");
    for(int i=l1 ; i<l2+1 ; i++){
        for(int j=r1 ; j<r2+1 ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the sub array is: ");
    printf("%d", sum(l1,r1,l2,r2,c,arr));
    printf("Press enter to close...");
    getchar();
    getchar();
    return 0;
}
