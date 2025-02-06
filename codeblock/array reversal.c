#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d\n",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d\n",&arr[i]);
    }
    int temp=0;
    for(i=0; i<=n; i++)
    {
        for(j=n; j>n; j--)
        {
            temp=arr[i];
            arr[i]=arr[j];
            temp=arr[j];
        }
    }
    for(i=0; i< n; i++)
        printf("\n%d ",arr[i]);
    return 0;
}
