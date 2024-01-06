#include <malloc.h>
#include <string.h>
#include <stdlib.h>

void strrev(unsigned char *str) {
	int i, j;
	unsigned char a;
	unsigned len = strlen((const char *)str);
	for (i = 0, j = len - 1; i < j; i++, j--) {
		a = str[i];
		str[i] = str[j];
		str[j] = a;
	}
}

char *no_zeroes(char *a) {
    char *ptr = a;
    while(*ptr != '\0' && *ptr != '\n' && *ptr == '0') ptr++;
    if(*ptr == '\n' || *ptr == '\0') {
        memset(a, 0, sizeof(a));
        *a = '0';
        return a;
    } else return ptr;
}

char *add(const char *a, const char *b) {
    char aReversed[strlen(a)+1], bReversed[strlen(b)+1];
    memset(aReversed, 0, sizeof(aReversed));
    memset(bReversed, 0, sizeof(bReversed));
    strcpy(aReversed, a);
    strcpy(bReversed, b);

    size_t lengthA = strlen(no_zeroes(aReversed));
    size_t lengthB = strlen(no_zeroes(bReversed));
    size_t biggestLen = lengthA > lengthB ? lengthA : lengthB;
    size_t smallestLen = biggestLen == lengthA ? lengthB : lengthA;
    unsigned short carry = 0, sum = 0;
    
    unsigned char *final = (unsigned char *) calloc(biggestLen + 2, sizeof(char));
    strrev((unsigned char *)aReversed);
    strrev((unsigned char *)bReversed);
    char *longest = biggestLen == lengthA ? aReversed : bReversed;
    char *shortest = longest == aReversed ? bReversed : aReversed;

    for(size_t i = 0; i < biggestLen; i++) {
        sum = (i < smallestLen) ? (longest[i] - '0' + shortest[i] - '0' + carry) : (longest[i] - '0' + carry);
        if(sum >= 10) {
            carry = 1;
            sum -= 10;
        } else carry = 0;
        final[i] = sum + '0';
        if(i == biggestLen - 1 && carry != 0) {
            final[biggestLen] = 1 + '0';
        }
    }
    strrev(final);
    return (char *)final;
}