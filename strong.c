//strong number!

#include<stdio.h>
int main()
{
    int n;
    int i,j;
    int d;
    int fact=1;
    int sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Invalid Input");
        return 0;
    }
    int temp =n;
    while (n!=0)
    {
        fact = 1;
        d=n%10;
        for(j=1;j<=d;j++)
        {
            fact=fact*j;
            

        }
        sum=sum+fact;
        n=n/10;
        
        
    }

    if(sum==temp)
    {
        printf("%d No. Strong\n",temp);
    }
    else 
    {
        printf("%d No. not Strong\n",temp);
    }
    
}
