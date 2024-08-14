// Concatenation of an array:

#include <stdio.h>

int getConcatenation(int n, int nums[]){
    int ans[2*n];

    for(int i=0; i<n; i++){
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }

    for(int i=0; i<(2*n); i++){
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

    getConcatenation(n, nums);
}
