#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int n) 
{
    if (n <= 0) 
    {
        return false; 
    }

    int sum = 0; 
    
    for (int i = 1; i <= n / 2; i++) 
        {
            if (n % i == 0) 
                {
                    sum += i; 
                }
        }

    return sum == n; 
}

int main () 
{
    int number1, number2;
    
    printf("\nNhap so thu nhat: ");
    
    scanf("%d", &number1);

    printf("\nNhap so thu hai: ");
    
    scanf("%d", &number2);

    printf("\n");


    if (isPerfectNumber(number1)) 
    {
        printf("%d la so hoan hao!\n\n", number1);
    } 
        else 
            {
                printf("%d khong phai la so hoan hao!\n\n", number1);
            }

    if (isPerfectNumber(number2)) 
    {
        printf("%d la so hoan hao!\n\n", number2);
    } 
        else 
            {
                printf("%d khong phai la so hoan hao!\n\n", number2);
            }

    return 0;
}
