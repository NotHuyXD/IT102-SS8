#include <stdio.h>
int main(){
    int arr[4][4]={{2,3,4,5},{1,2,5,6},{4,7,8,9},{7,12,6,7}}, line=0, ver=0, tong=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (i==line && j==ver ){
                printf("%d ", arr[i][j]);
                tong+=arr[i][j];
            }
            else printf("  ");
        }
        printf("\n");
        line++, ver++;
    }
    printf("Tổng các phần tử trong đường chéo là %d", tong);
return 0;
}