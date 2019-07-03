#include<stdio.h>


int maximum(int a,int b);
int minimum(int a,int b);

int main()
{
    int a,b,c;

    while(3==scanf("%d%d%d",&a,&b,&c))
    {
        if(a==1 && b==1 && c==1) printf("3\n");
        else if((a==1 && b==1) || (a==1 && c==1) || (c==1 && b==1))
        {
            int x;
            if(a==1 && b==1) x=2*c;
            else if(c==1 && b==1) x=2*a;
            else if(a==1 && c==1) x=2+b;
            printf("%d\n",x);

        }
        else if(a==1 || b==1 || c==1)
        {
            if(a==1)
            {
                printf("%d\n",(a+b)*c);
            }
            else if(b==1)
            {
                int x = minimum(a,c), mx = maximum(a,c);
                printf("%d\n",(x+1)*mx);
            }
            else if(c==1)
            {
                printf("%d\n",(b+c)*a);
            }
        }
        else if(a!=1 && b!=1 && c!=1)
        {
            printf("%d\n",a*b*c);
        }
    }

    return 0;
}

int maximum(int a,int b)
{
    if(a>=b) return a;
    else if(a<b) return b;
}

int minimum(int a, int b)
{
    if(a<=b) return a;
    else if(b<a) return b;
}
