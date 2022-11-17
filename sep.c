#include<stdio.h>
int main()
{
    int m,n;
    int array[1000];
    scanf("%d",&m);
    int count=0;
    int j=-1;
    for (int i = 0; ; i++)
    {
        
        if(count+j+3<=m)

        {
            array[i]=i+2;
            count=count+2+i;
            j++;
        }
        else break;
    }
    n=m-count;
    if(n<=j+1)
    {
        for (int i = j-1; i >j-1-n; i--)
        {
            array[i+1]++;
        }
        
    }
    else 
    {
        array[j]=array[j]+2;
    for (int i = j-1; i >j-n; i--)
    {
        array[i]++;
    }
    }
    printf("%d",array[0]);
    for (int i = 1; i < j+1; i++)
    {
    printf(" %d",array[i]);
    }
    
}