#include <stdio.h>

int main()
{
 char* solution(char* s) {
   char c = s[0];
  
  if (c >= "A" && c <= "Z")
      return "upper";
  else if (c >= "a" && c <= "z")
      return "lower";
  else if (digit(c))
      return "digit";
  else 
      return "other";
         
  }
}
