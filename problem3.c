#include <stdio.h>

int main()
{
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  int i,j=0;
  for(i=0;i<3;i++) {
  printf("%d",a[i][j+1]);
  }
  
  return 0;
 
} 

/*

OUTPUT : 2 5 8 
int a[3][3] = {1,2,3,4,5,6,7,8,9};
IS EQUIVALENT TO
int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

*/
