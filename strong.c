//strong number!
//Strong number is a number whose sum of all digits' factorial is equal to the number 'n'. ... So, to find a number whether its strong number, we have to pick every digit of the number like the number is 145 then we have to pick 1, 4 and 5 now we will find factorial of each number i.e, 1! = 1, 4! = 24, 5! = 120.Oct 18, 2019

#include<stdio.h>
int main()
{
    int i,j,n;
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
