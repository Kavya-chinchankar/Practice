#include<stdio.h>

int reverse(int a[] , int n)
{
    //swap 0 with n-1
    //swap 1 with n-2
    //swap 2 with n-3
    //
    //
    //swap i with n-i-1
    //
    // till n/2

    int temp;
    for(int i = 0; i < n/2; i++)
    {
        //swap i with n-i-1N
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }

}

int display(int *ptr, int n)
{
    for (int i =0; i < n; i++)
    {
        printf("%d", *ptr);
        ptr ++;

    }
    printf("\n");

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    display(arr, 10);
    reverse(arr,10);
    display(arr, 10);

    return 0;
}
