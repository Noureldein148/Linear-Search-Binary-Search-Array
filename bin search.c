// Online C compiler to run C program online
/*                 Author : Nour El Dein Hany
*                   Date 21/10/2023
*/
#include <stdio.h>
#include <stdlib.h>

int bin_search(int* arr , int l , int r ,int num )
{
    int m = l +(r-1)/2;
    while(l<=r)
    {
        if(arr[m] == num)
        {
            return m;
        }
        else if(num > arr[m])
        {
            l =m+1;
        }
        else if (num < arr[m])
        {
            r = m=1;
        }
        else
        return -1;
        
    }
}
int main() {
    // Write C code here
     int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = bin_search(arr, 0, n - 1, x);
    printf("Element is present at index %d\n",result);

    return 0;
}