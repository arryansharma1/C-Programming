#include<stdio.h>
int main()
{
    int i,min=0,n;
    printf("Enter the array size :- ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("%d element :- ",i+1);
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The minimum element :- %d",min);
    return 0;
}