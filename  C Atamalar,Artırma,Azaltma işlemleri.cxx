#include <stdio.h>

int main ()

{
    /*
    
    Atamalar , Arttırma,Azaltma işlemleri
    
    Değişken (variable) = ifade (expression)
    int x = 15;
    int y = 14;
    x = y;
    y = x;
    Örnek:
    int x = 6;
    int y =7;
    x = y; (y'nin değeri x 'e atanıyor. x = 7, y = 7 )
    y = x+1 (x+1 hesaplanıyor(8) ve y 'ye atanıyor. x = 7, y= 8)
    
    x = x+1;
    Atama durumunda ilk başta sağ taraftaki kısım hesaplanır.
    Sonra atama yapılır.
    
    x+1 = 2;  ( Bu tür şeyler C de geçerli değildir. Sol taraftaki değer saf bir değişken olmalı. x gibi y gibi)
    
    Arttırma, Azaltma işlemleri
    i = i+1;
    Bunun eşiti aynı zamanda i +=1(i = i+1 ile aynı şey)
    (Değişken işlem = ifade)
    C ' de kolay bir yöntem var.
    Üsttekki işlem i' yi bir arttırır.
    i' yi arttırmak için C' de ++i gibi şeyler bulunuyor.
    postfix : i++;
    prefix : ++i;
    Arasındaki fark;
    int i = 4;
    printf("%d\n",i++);
    Ekrana 4 değerini bastırır.
    Çünkü bu postfix halinde (i++) i' nin artırmadan önceki değeri (4' kullanılıyor bir sonraki satırda artırıyor.
    printf("%d",++i);
    Ekrana 5 değerini bastırır.
    Çünkü prefix halinde (++İ) , 'nin artmış değeribi kullanıyor (5) bir sonraki satırda artırıyor.
    i-- ve --i aynı şekilde çalışıyor.
    
    (değişken işlem = ifade )  biraz açarsak;
    i = i % a;
    Bu forma sokmaya çalışalım. i %= 0;
    Örnek: i = i * (a+1); Eşiti ---->  i   *= a+1
    
    İçiçe atamalar
    i = j = k = 0;
    Bu şekilde bir atama varsa en sağdan başlanarak k 'ya 0 atıyor. Yani k=0. Daha sonra j 'ye k 'nın değerini atıyor (0). j = 0. Daha sonra i 'ye j 'nin değerini atıyor. i = 0 oldu. Sonuç olarak ensağdan başlayarak yapılan atamalar sonucunda;
    i = 0;
    j = 0;
    k = 0;
    Bu şekilde atamalarda en sağdan başlayarak işlemler yapılır. ( Ancak programcılar bunun çok daha karmaşık versiyonlarını tercih etmezler.)
    
    */
    
    int x = 5;
    int y = 7;
    int a = 2;
    x = y;
    y = x + a + 1;
    printf("x:%d\ny:%d\na:%d\n",x,y,a);
    x = 4;
    y = 5;
    a = 6;
    printf("\n\nx:%d\ny:%d\na:%d\n",--x,++y,a++);
    printf("\n\nx:%d\ny:%d\na:%d\n",x,y,a);        
    printf("\n\nx:%d\ny:%d\na:%d\n",x--,--y,a--);
    /*
    x = 2 a = 6
    x = x + (a+1);
    */
    x += a+1;
    printf("\n\n%d\n",x);
    x = y = a+4;
    printf("\n\nx:%d\ny:%d\na:%d\n",x,y,a);
    
    return 0;
}