#include<stdio.h>
int arr[1000];
void main()
{
    int n,temp,i,j;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
        scanf ("%d",&arr[i]);
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        if (i==n-1)
            printf ("%d\n",arr[i]);
        else
            printf ("%d, ",arr[i]);

    }
}
