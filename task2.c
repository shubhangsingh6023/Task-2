/*NAME: SHUBHANG SINGH
ROLL NO.: 20NA10038*/

#include<stdio.h>

int pow(int b, int e)
{
    int res = 1;
    for(e; e>0; e--)
    {
        res = res * b;
    }
    return res;
}

void calc(int n)
{
    int n1=n, s = 0, dig = 0, c = 0;
    while(n1>0)
    {
        c++;
        n1/=10;
    }
    n1=n;
    while(n1>0)
    {
        s+=pow(n1%10,c);
        n1=n1/10;
    }
    if(s==n)
        printf("%d\n",n);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        calc(i);
    }
    return 0;
}
