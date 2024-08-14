// Take 2 arrays and merge them into one.

#include <stdio.h>

int main()
{
    int n, m;
    printf("Please enter the size of the both the arrays: ");
    scanf("%d%d", &n, &m);

    int nums[n];
    printf("Please enter the %d elements of the first array: ", n);

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int numbers[m];
    printf("Please enter the %d elements of the second array: ", m);

    for(int i=0; i<m; i++){
        scanf("%d", &numbers[i]);
    }

    int number[n+m];

    for(int i; i<n; i++){
        number[i] = nums[i];
    }

    for(int i=n+1; i<=m; i++){
        number[i] = numbers[i];
    }

    for(int j=0; j<n+m; j++){
        printf("%d ", number[j]);
    }
}
