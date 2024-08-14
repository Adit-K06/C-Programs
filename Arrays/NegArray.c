// Taking an array and finding out how many elements are negetive number:

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Please enter the %d elements: ", n);

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int a = 0;
    for(int i=0; i<n; i++){
        if(nums[i] < 0){
            a++;
        }
    }

    printf("Number of negative elements in the given array are: %d\n", a);
}
