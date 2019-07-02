/* i/o


abcd **
*abcd*


*/


#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char s1[100];
    int n;

    scanf("%s",&s);
    scanf("%s",&s1);

    n = strlen(s1);

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

