#include <stdio.h>
#include <stdlib.h>

void ters(int sayi)
{
    int i=1,a=0;
    while(1)
    {
        a=sayi%10;
        printf("%d",a);
        sayi=sayi/10;
        if (sayi<=0)
            break;
        i++;

    }

}

int main()
{
    ters(12345);
    return 0;
}
