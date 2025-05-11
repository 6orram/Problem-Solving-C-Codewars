#include<stdio.h>

int main(){
    char string[12] = "Wor1d He2lo";
    char temp[12];
    char ordred[12];
    int index=0;

    for(int i=0; string[i]; i++){
        if(string[i] == ' '){
           
        } 
        temp[index++] = string[i];
    }

    for(int i=0; i<10; i++){
        printf("%c",temp[i]);
    }
}