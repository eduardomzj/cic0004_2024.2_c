#include <stdio.h>
 
int main() {
 
   double N, X, Y; //distance, diameter 1 and  diameter 2
   
   scanf("%lf %lf %lf", &N, &X, &Y);
   
   // distance/(sum of diameters)
   
   double ICM = N / (X+Y);
   
   printf("%.2lf\n", ICM);
 
   return 0;
}