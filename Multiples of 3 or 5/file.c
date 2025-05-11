#include<stdlib.h>
#include<stdio.h>

int res(int n){

    if (n < 4){
        return 0;
    } else {
        int sum = 0;
        for (int i=3;i<n;i++){
            if (i % 5 == 0 || i % 3 == 0){
                sum += i;
            }
        }

        return sum;
    }

}

int main(){

    int num;

    printf("enter you number : ");
    scanf("%d",&num);

    printf("results : %d",res(num));
}