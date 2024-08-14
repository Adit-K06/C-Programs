// Writing a function to find the minimum operation to make a number divisible by 3:

#include <stdio.h>

int checkDivisible(int n, int nums[]){
    int x=0;

    for(int i=0; i<n; i++){
        if(nums[i] % 3 == 1){
            // nums[i] = nums[i] - 1;
            x++;
        }
        else if(nums[i] % 3 == 2){
            nums[i] = nums[i] + 1;
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

    int ans = checkDivisible(n, nums);

    printf("The minimum possible operations to make all the numbers divisible by 3 is: %d\n", ans);
}
