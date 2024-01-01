#include<stdio.h>
#include<stdlib.h>

int digits(int n){

    int new_number = 0;
    int count = 0;

    while(n>0){
        new_number += n%10;
        n /= 10;
        printf("n = %d / nb = %d \n",n,new_number);
        if(new_number > 9 && n == 0){
            n = new_number;
            new_number = 0;
        }
    }

    return new_number;

}

int main(){

    int num;

    printf("enter you number : ");
    scanf("%d",&num);
    

    printf("Expected %d, instead got %d",digits(num));
    
}