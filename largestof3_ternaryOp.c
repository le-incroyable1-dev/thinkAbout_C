#include <stdio.h>
 
void main()
{
    int a, b, c, mzx ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    max = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe biggest number is : %d", max) ;
}
