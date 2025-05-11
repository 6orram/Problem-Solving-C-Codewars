// this solution's for very long strings and integers
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


char *strsum(const char *a, const char *b)
{
    int len1 = 0, len2 = 0;
    while (a[len1] != '\0') len1++;
    while (b[len2] != '\0') len2++;

    int maxLen = (len1 > len2 ? len1 : len2) + 1;

    char *result = malloc(maxLen + 1);
    if (!result) return NULL;

    int i = len1 - 1;
    int j = len2 - 1;
    int carry = 0, k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? toInt(a[i--]) : 0;
        int digit2 = (j >= 0) ? toInt(b[j--]) : 0;
        int sum = digit1 + digit2 + carry;
        result[k++] = toChar(sum % 10);
        carry = sum / 10;
    }

    result[k] = '\0';
    revert(result, k);

    int start = 0;
    while (result[start] == '0' && result[start + 1] != '\0') start++;

    if (start > 0) {
        for (int i = 0; i <= k - start; i++)
            result[i] = result[i + start];
    }

    return result;
}

int main(){
    char l1[] = "712569312664357328695151392";
    char l2[] = "8100824045303269669937";

    char* result = strsum(l1, l2);

    printf("Sum as string: %s\n", result);

    free(result); // Don't forget to free allocated memory

    return 0;
}
