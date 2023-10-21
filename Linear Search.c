/*			Author Nour El Dein Hany
*				Date 21/10/2023
*/
#include <stdio.h>
#include <stdlib.h>
int linear_search(int arr[], int n, int x) 
{ 
    for (int i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
}
    
int main()
{
    int arr[] = {3,6,19,25,30};
    int result = linear_search(arr,5,25);
    printf("%d",result);
    

    return 0;
}