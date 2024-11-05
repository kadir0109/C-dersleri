#include <stdio.h>

int main ()  
{
    /*
        x+y -----> x ile y yi topar.
        x-y -----> x ile y yi çıkarır.
        x*y -----> x ile y yi çarpar.
        x/y -----> x ile y yi böler.
        x%y ----> x ile y nin bölümünden kalanı verir.
        +x ------> x sayısının artı ile çarpar.
        -x ------> x sayısını eksi ile çarpar.
*/
    int x1 =1 ;
    int x2 = -1;
    printf("%d\n",12+9);
    printf("%d\n",12-9);
    printf("%d\n",12*9);
    printf("%d\n",12/9);
    printf("%d\n",12%9);
    
    
    printf("%d\n", -x1);
    printf("%d\n",-x2);
    
    return 0;
    
}