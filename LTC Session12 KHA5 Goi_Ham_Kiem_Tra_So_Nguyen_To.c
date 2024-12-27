#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int x)
{
    if( x <= 1 )
    {
        return false;
    }
        for( int i = 2; i <= sqrt(x); i++)
        {
            if( x % i == 0)
            {
                return false;
            }
        }
    
    return 1;

}

    int main ()
    {
        int num1, num2;
        
        printf("\nNhap so thu nhat: ");
        
        scanf("%d", &num1);
        
        printf("\nNhap so thu hai: ");
        
        scanf("%d", &num2);
        
        printf("\n");

        if(isPrime(num1))
        {
            printf("%d la so nguyen to!\n\n", num1);
        }
            else
            {
                printf("%d khong phai la so nguyen to!\n\n", num1);
            }

        if(isPrime(num2))
        {
            printf("%d la so nguyen to!\n\n", num2);
        }
            else
            {
                printf("%d khong phai la so nguyen to!\n\n", num2);
            }
        
        return 0;
    
    }