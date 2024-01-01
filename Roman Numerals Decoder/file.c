#include<stdio.h>



unsigned decode_roman (char *roman_number)
{
    char Roman[13][3] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int Num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; 
    unsigned code=0;
    int i;
	for(i=0;roman_number[i];i++){
        if(roman_number[i] == 'C'){
            if (roman_number[i+1] == 'M'){
                code += Num[1];
                i++;
            } else if (roman_number[i+1] == 'D'){
                code += Num[3];
                i++;
            } else {
                code += Num[4];
            }
        } else if (roman_number[i] == 'X'){
            if (roman_number[i+1] == 'C'){
                code += Num[5];
                i++;
            } else if (roman_number[i+1] == 'L'){
                code += Num[7];
                i++;
            } else {
                code += Num[8];
            }

        } else if (roman_number[i] == 'I'){
            if (roman_number[i+1] == 'X'){
                code += Num[9];
                i++;
            } else if (roman_number[i+1] == 'V'){
                code += Num[11];
                i++;
            } else {
                code += Num[12];
            }

        } else {
            for (int j=0;j<13;j++){
                if(roman_number[i] == Roman[j][0]){
                    code += Num[j];
                    break;
                }
            }
        }
    }
    return code;
}

int main(){
    char roman_num[] = "XXVII";

    printf("code : %d",decode_roman(roman_num));
}