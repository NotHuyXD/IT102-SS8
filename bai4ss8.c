#include <stdio.h>
int main(){
    int arr[3][4]={{1,3,5,7},{2,4,6,8},{9,0,12,25}}, max=0;
    for(int i=0; i<3;i++){
        for (int j=0;j<4;j++){
            if (max<arr[i][j]){
                max=arr[i][j];
            }

        }

}
printf("Phần tử lớn nhất trong mảng là %d", max);
return 0;
}