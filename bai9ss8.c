#include <stdio.h>
int main(){
    int arr[]={1,2,1,4,5,7,9,8,6,3}, size=sizeof(arr)/sizeof(arr[0]);
    int max=0, num=arr[0];
    for (int i=0;i<size;i++){
        int count=0;
        for (int j=0;j<size;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count > max){
            max=count;
            num=arr[i];
        }
    }
    printf("Phần tử xuất hiện nhiều nhất trong mảng là: %d với %d lần xuất hiện", num, max);
    return 0;

}