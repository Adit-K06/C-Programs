// Adding 2 numbers using pointers:

#include <stdio.h>

int main()
{
    int n = 10, m = 20;
    int* p1 = &n;
    int* p2 = &m;

    int* sum = p1 + p2;

    printf("%d\n", *sum);
}
