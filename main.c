#include <stdio.h>
#include <time.h>

    int main() {
       int ceas,min, sec;
       int n, m = 60, h = 3600 , s = 60;

       printf("\nВведіть час: ");
       scanf("%d",&n);

       ceas = n / h;

       if( (n / m) > 60)
       {
       min = (n / m) / 60;
       } else {
       min = n / m;
       }
       sec = n % s;
       printf("\n***Результат***\n");
       printf("З початку доби пройшло годин %d хвилин %d секунд %d"
      ,ceas, min, sec );
 
       return 0;
}
