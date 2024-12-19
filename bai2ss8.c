#include <stdio.h>
int main(){
int N;
int arr[2][2]={{2,6},{5,7}};
printf("Nhập 1 số bất kỳ: ");
scanf("%d", &N);
for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
        if (arr[i][j]==N){
            printf("Vị trí của phần tử trong mảng là arr[%d][%d]", i, j);
            return 1;
        }
    }
}
printf("Phần tử không tồn tại trong mảng");
return 0;
}