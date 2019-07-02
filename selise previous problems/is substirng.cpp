#include<stdio.h>
#include<string.h>


int main()
{
    char s1[100];
    char s2[100];

    gets(s1);
    gets(s2);

    //printf("%s %s",s1,s2);

    int l1= strlen(s1);
    int l2 = strlen(s2);
    int l = l1-l2+1;

    int trace =0;

    for(int i =0; i<l; i++)
    {
        if(s1[i]==s2[0])
        {
            int check =0;
            for(int j=0; j<l2; j++)
            {
                if(s1[i+j]!=s2[j])
                {
                    trace =0;
                    break;
                }
                else check++;
            }
            if(check == l2)
            {
                trace =1;
                break;

            }
        }
    }

    if(trace ==1) printf("YES\n");
    else printf("NO\n");

    return 0;
}


int strlen(char s[])
{
    int count =0,i=0;
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
}
