// Take an array and create a function to check the number of negatives in the array:

#include <stdio.h>

int negatives(int n, int nums[]){
    int x=0;

    for(int i=0; i<n; i++){
        if(nums[i] < 0){
            x++;
        }
    }

    return x;
}

int main()
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Please enter the elements of the array: ");

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int result = negatives(n, nums);

    printf("The array contains %d negative numbers!\n", result);
}
