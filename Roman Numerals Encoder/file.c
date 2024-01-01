#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *solution(int n) {
  char Roman[13][3] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
  int Num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  char *str_roman = (char *)malloc(99 * 3); 

  if (str_roman == NULL) {
    return NULL;
  }

  str_roman[0] = '\0'; 

  int i = 0;
  int j = 0;
  while (n != 0){
    while (n / Num[i] > 0){
      strcat(str_roman, Roman[i]); 
      n -= Num[i];
    }
    i++;
  }

  return str_roman;
}

int main() {
  int nums[] = {105, 108, 121, 97, 115, 115, 32, 110, 111, 111, 98};
  for (int i=0;i<11;i++){
    char *result = solution(nums[i]);
    if (result != NULL) {
      printf("%s\n", result);
      free(result);
    } else {
      printf("Memory allocation error\n");
    }
  }

  return 0;
}
