#include <stdio.h>

int main()
{
    float a,b,toplam;
    
    printf("Lutfen bir 'a' degeri giriniz: ");
    scanf("%f", &a);
    
    printf("Lutfen bir 'b' degeri giriniz: ");
    scanf("%f", &b);
    
    toplam=a+b;
    
    printf("Toplam: %.2f",toplam);
    return 0;
}