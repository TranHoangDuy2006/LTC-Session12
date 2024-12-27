#include <stdio.h>

int sum(int a, int b) 
{
    return a + b;
}

int main ()
{
    int num1, num2, result;
    printf("\nNhap so thu nhat: ");
    scanf("%d", &num1);

    printf("\nNhap so thu hai: ");
    scanf("%d", &num2);

    result = sum(num1, num2);

    printf("\nKet qua cua %d + %d la: %d", num1, num2, result);

    printf("\n\n");

    return 0;
}