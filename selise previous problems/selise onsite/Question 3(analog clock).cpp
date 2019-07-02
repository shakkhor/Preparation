#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    while(1)
    {
        char s[10];

        gets(s);
        //scanf("%s",&s);
        int l = strlen(s);

        int h=0,m=0;
        for(int i =0; i<=l; i++)
        {
            if(s[i]==':')
            {
                int unit =1;
                for(int j= i-1; j>=0; j--)
                {
                    h+=((s[j]-48)*unit);
                    unit*=10;
                }
            }
            if(s[i]=='\0')
            {
                int unit =1;
                for(int j= i-1; s[j]!= ':'; j--)
                {
                    if(s[j]==':') break;
                    m+=((s[j]-48)*unit);
                    unit*=10;
                }
            }
        }

        //printf("h= %d m=%d\n",h,m);

        h = 23-h;
        m = 60-m;

        if(m==60)
        {
            h+=1;
            m=0;
        }
        if(h>12)
        {
            h=h%12;
        }
        if(h<10) printf("0%d:",h);
        else printf("%d:",h);

        if(m<10) printf("0%d\n",m);
        else printf("%d\n",m);

    }



    return 0;
}
