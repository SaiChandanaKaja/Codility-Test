/* Finding all prime factors of a given numbers /

#include <stdio.h>

int main() {
    int solutions (int a, int b)
    {
     int cnt = 0;
     for (int i=a; i<=b; i++)
      
       for (int j=1; j*j<= i; j++)
        if (j*j== i)
        cnt++;
        return cnt;
    }
    
}
