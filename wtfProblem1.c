#include <stdio.h>

int main()
{
int i = 6;
printf("%d %d %d", i++, i++, i++);
return 0;
}

//Output is : 8 7 6. WHY ?
