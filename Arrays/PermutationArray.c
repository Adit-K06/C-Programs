// Building an array using Permutation:

#include <stdio.h>

int permutation(int n, int nums[]){
    int ans[n];

    for(int i=0; i<n; i++){
        ans[i] = nums[nums[i]];
    }

    for(int i=0; i<n; i++){
        printf("***%d***\n", ans[i]);
    }
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

    permutation(n, nums);
}
