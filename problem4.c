#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;
    
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);
    
    return 0;
}

/* 
OUTPUT : 32

The first unmatched character between string str1 and str2 is third character. 
The ASCII value of 'c' is 99 and the ASCII value of 'C' is 67. Hence, when strings 
str1 and str2 are compared, the return value is 32 which is the difference between 
the two ASCII values.

*/
