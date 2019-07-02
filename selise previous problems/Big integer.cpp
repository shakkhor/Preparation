#include<stdio.h>
#include<string.h>




int main()
{

    char s1[1000];
    char s2[1000];

    gets(s1);
    int l1 = strlen(s1);
    gets(s2);
    int l2 = strlen(s2);

    int result[1000]= {0};

    int trace =0;
    for(int i =l2-1; i>=0; i-- )
    {

        int carry =0;
        int x = s2[i]-48;
        trace = (l2-1)-i;
        int d;
        for(int j =l1-1; j>=0; j--)
        {
            int y = s1[j]-48;
            int d = x*y+carry+result[trace];
            carry= d/10;
            d= d%10;
            result[trace]= d;
            trace++;

        }
        if(carry!=0) result[trace]=result[trace]+carry;
    }
    int zero =0;
    int j=0;



    for(int i=trace; i>=0; i--,j++)
    {
        if(i==trace && result[i]==0)
        {
            zero++;
            continue;
        }
        if(i==trace-1 && result[i]==0)
        {
            printf("0");
            break;
        }
        printf("%d",result[i]);
    }
    printf("\n");




    return 0;
}
