#include <stdio.h>

//Fuel Spent
 
int main() {
 
    int tm, speed;
    scanf("%d%d", &tm, &speed);
    double car = 12;
    double liters = (tm * speed) / car;
    printf("%.3lf\n", liters);
 
    return 0;
}