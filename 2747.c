#include <stdio.h>

/*
---------------------------------------
|                                     |
|                                     |
|                                     |
|                                     |
|                                     |
---------------------------------------
*/
 
int main() {
 
   for(int i = 0; i<7; i++){
       if(i==0 || i==6){
           for(int j=0; j<39; j++) putchar('-');
       }
       else{
           for(int k=0; k<39; k++){
               (k==0 || k==38) ? putchar('|') : putchar(' ');
           }
       }
       putchar('\n');
   }
 
    return 0;
}