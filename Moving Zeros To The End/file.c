#include<stdio.h>

void move_zeros(int len, int num[len])
{
    for(int i = 0; i < len; i++){

        if(num[i] == 0){

            for(int j = i; j < len;j++){
                
                if(num[j] != 0){
                    int a = num[j];
                    num[j] = num[i];
                    num[i] = a;
                    break;
                }
            }
        }

    }
    for(int i = 0; i < len; i++){
        printf("%d ",num[i]);
    }

}

void main(){
    int arr[] = {1,2,4,5,6,7,0,0,0,2};
    move_zeros(10, arr);
}
