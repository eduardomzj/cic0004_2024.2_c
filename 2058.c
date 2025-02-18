#include <stdio.h>
 
int main() {
 
    int syze_polygons, triangles;
    
    scanf("%d", &syze_polygons);
    
    triangles = syze_polygons - 2;
    
    printf("%d\n", triangles);
 
    return 0;
}