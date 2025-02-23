#include <stdio.h>
#include <math.h>

// Distance Between Two Points

int main(){
    
    double x1, x2, y1, y2, d;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    d = (pow(x2 - x1, 2) + pow(y2 - y1, 2));
    d = sqrt(d);
    printf("%.4lf\n", d);
    
    return 0;
}