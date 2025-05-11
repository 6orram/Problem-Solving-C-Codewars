#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


char Upper(char chr){
    if (96 < chr && chr < 123){
        chr -= 32; 
    }
    return chr;
}

bool IsIsogram (char *string) 
{   
    int size;
    bool c = true;
    for (size=0;string[size];size++){
        continue;
    }
    
    if (size<1){
        return c;
    } else {
        for(int i=0;string[i];i++){
            for(int j=i+1;string[j];j++){
                if (Upper(string[i]) == Upper(string[j])){
                    c=false;
                    break;
                }
            }
        }
    
    return c;
   }
   
}

int main(){

    char str[99] = "huih";
    printf("%d",IsIsogram(str));

}
