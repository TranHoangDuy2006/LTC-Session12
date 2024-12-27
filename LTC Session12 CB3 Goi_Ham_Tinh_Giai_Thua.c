#include <stdio.h>

long long factorial(int x) 
{
    long long resMultiplication = 1;
    
    for( int i = 1; i <= x; i++)
    {
        resMultiplication*= i;
    }
        return resMultiplication;
}

int main ()
{
    int n;
    
    long long result;
    
    printf("\nNhap vao so ma ban muon tinh giai thua: ");
    
    scanf("%d", &n);

    result = factorial(n);
    
    printf("\nGiai thua cua %d la: %lld", n, result);

    printf("\n\n");

    return 0;

}