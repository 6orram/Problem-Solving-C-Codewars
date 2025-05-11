#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void pyramid(int n){
  int brike = n;
  int impair = 1;
  int etage = 0;

  while(n > pow(impair, 2)){
    n = n-pow(impair, 2);
    etage++;
    impair += 2;
  }
    
  

  printf("les etages est : %d\n",etage);
  printf("les brikes qui reste : %d\n",n);

}

int main() {
  int n = 30;
  pyramid(3);
  pyramid(12);
  pyramid(33);
  pyramid(52);

}
