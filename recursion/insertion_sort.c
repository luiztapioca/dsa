#include <stdio.h>

int main()
{
    int a[] = {1,5,2,3,8,4,9};

    for(size_t i = 1; i < sizeof(a)/ sizeof(a[0]); i++)
    {
        int key = a[i];
        int j = i - 1;
        while(j > 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for(size_t i = 0; i < 7; i++)
    {
        printf("%i", a[i]);
    }

    return 0;
}