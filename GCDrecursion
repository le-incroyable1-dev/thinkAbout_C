#include <stdio.h>

int gcd(int n1, int n2)
{
  if (n1 == 0) return n2;
  if (n2 == 0) return n1;
  
  else if (n1 > n2)
  return gcd(n1%n2, n1);
  else
  return gcd(n2, n2%n1);
}
