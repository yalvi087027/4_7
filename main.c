#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int N = 5;

int func(int x, int y)
{
    int a = 1;
    while(pow(a, y) - x < 0)
    {
        if(pow(a,y)==x)
        {
            return a;
        }
        a+=1;
    }
    return -1;
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int k = func(n,m);
    if(k==-1)
    {
        printf("net");
    }
    else
    {
        printf("da, %d v dyepeni %d ravno %d", k, m, n);
    }
}
