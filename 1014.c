#include <stdio.h>

//Consumption

int main()
{
    int X;
    double Y;
    scanf("%d %lf", &X, &Y);
    double kml = X / Y;
    printf("%.3lf km/l\n", kml);

    return 0;
}