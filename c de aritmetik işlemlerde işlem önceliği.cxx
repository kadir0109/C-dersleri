#include <stdio.h>

int main()
{
    
    
    /*
    -x, x+y*z , (x\7) *y,    (a % b) - (x*a +1),  3+ 4*7 bu gibi ifadeler birer aritmetik ifadedir.
    
    
    işlem sırası :
    Tekli operatorler : (+) (-) (-x,+x) 1. öncelik kendi aralarında sağdan sola.
    ikili operatörler : * , / , % 2. öncelik kendi aralarında soldan sağa.
    ikili operatörler : +,-  3. öncelik kendi aralarında soldan sağa
    
    parantez içleri her zaman ilk planda yapılır ( matematik ile aynı )
    */
    
    
    printf("2-3+4=%d\n",2-3+4);
    printf("2*3-4=%d\n",2*3-4);
    printf("2-3/4=%d\n",2-3/4);
    printf("2/3*4=%d\n",2/3*4);
    printf("2%3/4=%d\n",2%3/4);
    printf("-2+3=%d\n",-2+3);
    printf("2*-3=%d\n",2*-3);
    printf("-2*-3=%d\n",-2*-3);
    printf("(2+3)%4=%d\n",(2+3)%4);
    
    return 0;
}