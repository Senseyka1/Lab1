#include <stdio.h>
#include <time.h>

    int main() {
       int ceas,min, sec;
       int n, m = 60, h = 3600 , s = 60;

       printf("Ceas vedennea: ");
       scanf("%d",&n);

       ceas = n / h;

       if( (n / m) > 60)
       {
       min = (n / m) / 60;
       } else {
       min = n / m;
       }
       sec = n % s;

       printf("Godina  = %d \nXvuluna = %d \nSecyndu = %d \n",ceas, min, sec );
 
       return 0;
}

