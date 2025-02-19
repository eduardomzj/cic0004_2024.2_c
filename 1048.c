#include <stdio.h>

void salary_increase(double a){
    
    int r_rate = (a > 2000) ? 4 :
             (a > 1200) ? 7 :
             (a > 800) ? 10 :
             (a > 400) ? 12 : 15;
             
    printf("Novo salario: %.2lf\n", (a*(100+r_rate))/100);
    printf("Reajuste ganho: %.2lf\n", a*r_rate/100);
    printf("Em percentual: %d %%\n", r_rate); // avoid warning
}

int main()
{
    double salary;
    
    scanf("%lf", &salary);
    
    salary_increase(salary);
    
    return 0;
}