#include<stdio.h>
int main()
{
    int n ,i;
    int d;
    int s=0;
    printf("Enter N:");
    scanf("%d",&n);

    while (n!=0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    
    while(s!=0)
    {
        d=s%10;
        
        if(d==0)
        {
            printf(" Zero");
        }
        else if (d==1)
        {
             printf(" One");
        }
            
        else if (d==2)
        {
             printf(" Two");
        }
        
        
        else if (d==3)
        {
             printf(" Three");
        }
        
        
        else if (d==4)
        {
             printf(" Four");
        }
        
        
        else if (d==5)
        {
             printf(" Five");
        }
            
        else if (d==6)
        {
             printf(" Six");
        }
            
        else if (d==7)
        {
             printf(" Seven");
        }
    
        else if (d==8)
        {
             printf(" Eight");
        }
        
        else if (d==9)
        {
             printf(" Nine");
        }
        s=s/10;
        
        
        
    }
    printf("/n");
    
}
