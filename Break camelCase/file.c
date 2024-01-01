#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include<ctype.h>

char Upper(char chr){
    if (96 < chr && chr < 123){
        chr -= 32; 
    }
    return chr;
}

char Lower(char chr){
    if (66 < chr && chr < 91){
        chr += 32; 
    }
    return chr;
}

char *to_camel (const char *string)
{
    int i = 0;
    int inputLength = strlen(string);

    char *camel_case = (char *)malloc((inputLength * 2 + 1) * sizeof(char)); // Allocate enough memory
    
    if (camel_case == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    camel_case[i] = Lower(string[i]);

    i++;
    int j;
    j = i;
    while(string[i] != '\0'){
        if(string[i] == ' '){
            camel_case[j] = string[i];
            camel_case[j+1] = Upper(string[i+1]);
            i++;
            j++;
        } else if (isupper(string[i])){
            camel_case[j] = ' ';
            camel_case[++j] = string[i];
        } else {
            camel_case[j] = string[i];
        }
        i++;
        j++;
    }
	camel_case[j] = '\0';
	return camel_case;
   
}

int main(){
    char camel[99];
    char str[99] = "thisIsAVeryLongIdentifierName";


    puts(to_camel(str));

}

