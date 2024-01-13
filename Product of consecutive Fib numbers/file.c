#include<stdio.h>
#include<stdlib.h>


int Fibonacci(int n){
    int temp[n];
    temp[0] = 0;
    temp[1] = 1;

    for (int i=0; i<n; i++){
        temp[i+2] = temp[i] + temp[i+1];
    }

    return temp[n];
}


int* productFib(int prod){
    int* result = (int*)malloc(3 * sizeof(int));
    int i=0;
    int s=1;
    while(s == 1){
        if(Fibonacci(i) * Fibonacci(i+1) == prod){
            result[0] = Fibonacci(i);
            result[1] = Fibonacci(i+1);
            result[2] = 1;
            break;
        } else if (Fibonacci(i) * Fibonacci(i+1) > prod){
            result[0] = Fibonacci(i);
            result[1] = Fibonacci(i+1);
            result[2] = 0;
            break;
        }
        i++;
    }

    return result;
}

int main(){
    int n = 8;
    int* t = productFib(74049690);

    printf("F1 : %d, F2 : %d, R : %d",t[0],t[1],t[2]);

    free(t);
}