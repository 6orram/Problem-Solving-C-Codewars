#include<stdio.h>
#include<stdlib.h>

int power(int n, long long int P){
    int res = 1;

    for(int i=0; i<P; i++){
        res = res*n;
    }

    return res;
}

char* revert(char t[], long long int len){
    long long int temp;
    for(int i=0; i<len/2; i++){
        temp = t[i];
        t[i] = t[len-1-i];
        t[len-1-i] = temp;  
    }
    t[len] = '\0';
    return t;

}

int toInt(char l){
    char letters[10] = {'0','1','2','3','4','5','6','7','8','9'};

    for(long long int i=0; i<10; i++){
        if(letters[i] == l) return i;
    }

}

char toChar(long long int n){
    int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
    char letters[10] = {'0','1','2','3','4','5','6','7','8','9'};

    for(long long int i=0; i<10; i++){
        if(numbers[i] == n) return letters[i];
    }
}



int charToInt(char l[]){
    int number = 0;
    int len = 0;

    while(l[len] != '\0') len++;

    long long int c = len;

    for(long long int i=0; i<len; i++){
        number += toInt(l[i]) * power(10, --c);
    }

    return number;
    
}

char* intToChar(long long int num){
    long long int temp = num;

    long long int len = 0;
    while(temp != 0) {
        temp /= 10;
        len++;
    }

    if(num == 0){
        return "0";
    }



    char* letters = malloc(12 * sizeof(char));
    if (letters == NULL) return NULL;

    for (long long int i=0; i<len; i++){
        letters[i] = toChar(num % 10);
        num /= 10;
    }


    return revert(letters, len);

}



int main(){
    char l1[] = "712569312664357328695151392";
    char l2[] = "8100824045303269669937";

    long long int sum = charToInt(l1) + charToInt(l2);

    char* result = intToChar(sum);


    printf("Sum as string: %s\n", result);

    free(result); // Don't forget to free allocated memory

    return 0;

    



}