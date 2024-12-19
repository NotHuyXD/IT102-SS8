#include <stdio.h>
int main(){
    int arr[4][3]={{1,2,3},{4,3,9},{2,3,4},{9,7,8}}, tong=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            if (i==0 || i==3 || j==0 || j==2){
                tong+=arr[i][j];
            }
    
}
    }
    printf("Tổng các phần tử trong mảng là %d", tong);
    return 0;
}