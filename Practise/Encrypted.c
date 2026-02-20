#include<stdio.h>
int main()
{
    int j,n;
    printf("Enter the size of array :- ");
    scanf("%d",&n);
    int i,x,count,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            if(j==a[i])
            {
                count++;
            }
        }
        if(count==0)
        {
            break;
        }
    }
    printf("%d",j);
    return 0;
}