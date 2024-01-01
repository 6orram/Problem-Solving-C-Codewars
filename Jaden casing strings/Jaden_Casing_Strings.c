#include<stdio.h>
#include<stdlib.h>

char Upper(char chr){
    if (96 < chr && chr < 123){
        chr -= 32; 
    }
    return chr;
}

char *to_jaden_case (char *jaden_case, const char *string)
{
    int i = 0;

    jaden_case[i] = Upper(string[i]);
    i++;
    while(string[i] != '\0'){
        if(string[i] == ' '){
            jaden_case[i] = string[i];
            jaden_case[i+1] = Upper(string[i+1]);
            i++;
        } else {
            jaden_case[i] = string[i];
        }
        i++;
    }
	jaden_case[i] = '\0';
	return jaden_case;
}

int main(){
    char jaden[99];
    char str[99] = "How can mirrors be real if our eyes aren't real";


    puts(to_jaden_case(jaden, str));

}

