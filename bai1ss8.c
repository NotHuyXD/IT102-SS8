#include <stdio.h>
int main(){
    int arr[3][3]={{2,3,5},{4,6,9},{8,7,1}};
    for(int i=2;i>=0;i--){
        for (int j=2;j>=0;j--){
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}