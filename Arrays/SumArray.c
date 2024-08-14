// Taking an array and finding the sum of all the elements in it.

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Please enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + nums[i];
    }

    printf("The sum of all the elements of the array is: %d\n", sum);
}
