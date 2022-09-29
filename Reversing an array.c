/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int reverse(int *arr,int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main()
{
    int arr[] = {1,4,5,6,7,8};
    printf("The array before reversing : ");
    for(int i=0;i<6;i++)
    {
        printf(" %d", arr[i]);
    }
    reverse(arr,6);
    printf("\nThe array after reversing : ");
    for(int i=0;i<6;i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}
