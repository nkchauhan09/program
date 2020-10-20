#include<stdio.h>
int main()
{
    int n ,i;
    int d;
    int s=0;
    printf("Enter N:");
    scanf("%d",&n);

    const char *words[10];
    words[0] = " Zero";
    words[1] = " One";
    words[2] = " Two";
    words[3] = " Three";
    words[4] = " Four";
    words[5] = " Five";
    words[6] = " Six";
    words[7] = " Seven";
    words[8] = " Eight";
    words[9] = " Nine";

    int len = 0;

    while (n!=0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
        len++;
    }
    
    while(len)
    {
        d=s%10;

        printf("%s", words[d]);
        
        s=s/10;
        
        len--;
    }
    printf("\n");
    
}
