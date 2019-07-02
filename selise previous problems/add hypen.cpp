#include<stdio.h>
int main()
{
    char s[100];
    int n;

    scanf("%s",&s);
    scanf("%d",&n);

    if(n%2==0 && n!=0)
    {
        for(int i =1; i<=n; i++)
        {
            printf("%c",'*');
            if(i==(n/2)) printf("%s",s);

        }

    }
    else if(n%2==1)
    {
        for(int i =1; i<=n; i++)
        {
            printf("%c",'*');
            if(i==(n/2)+1) printf("%s",s);

        }
    }
    else
    {
        printf("%s",s);
    }
    printf("\n");


    return 0;
}
