#include <stdio.h>

int max_value(int arr[5], int size)
{
    int v = arr[0];
        for( int i = 0; i < size; i++)
        {
            if(arr[i] > v)
            {
                v = arr[i];
            }
        }
    return v;
}

int main ()
{
    int arr[5] = {9, 10, 3, 5, 33};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = max_value(arr, size);
    
    printf("\nGia tri lon nhat trong mang la: %d", max);

    printf("\n\n");

    return 0;
}