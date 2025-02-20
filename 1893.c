#include <stdio.h>

// moon phases

void moon_phases(int day_one, int day_two){
    
    if (day_two >= 0 && day_two <= 2) {
        printf("nova\n");
    } 
    else if (day_two > 2 && day_two <= 96) {
        if (day_two > day_one) {
            printf("crescente\n");
        } else {
            printf("minguante\n");
        }
    } 
    else {
        printf("cheia\n");
    }
}

int main()
{
    int day_one, day_two;
    scanf("%d %d", &day_one, &day_two);
    
    int media = (day_two+day_one)/2;
    
    moon_phases (day_one, day_two);

    return 0;
}