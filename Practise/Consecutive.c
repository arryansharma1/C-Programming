#include<stdio.h>
int main()
{
    int n,max=0,count;
    printf("Enter the size of array :- ");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        if(a[i] == a[i+1])
        {
            do{
                count++;
                i++;
            }
            while(a[i]==a[i+1]);
        }
        if(count>max)
        {
            max=count;
        }
    }
    printf("%d",max+1);
    return 0;
}