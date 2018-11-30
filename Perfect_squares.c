#include <stdio.h>

int solutions (int a, int b)
{
int cnt = 0;
  for (int i=a; i<= b; i++)
     for (int j=1; j*j<= i; j++)
     if (j*j == i)
       cnt++;
      
  return cnt;
}

int main()
{
  int a = 9; b = 25;
  printf(" Count of square: %d", solutions(a,b));
  return 0;
}
