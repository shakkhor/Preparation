#include<stdio.h>
void push(char data);
void pop();
int top = -1;
char ara[200];
int main()
{
    char s[100];
    scanf("%s",&s);
    int len = 0,i;
    for(i = 0; ;i++)
    {
        if(s[i]=='\0')
        {
            break;
        }
        len++;
    }

    for(i = 0; i<len; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            push(s[i]);
        }
        else if(s[i]==')')
        {
            char ch;
            ch = ara[top];
            if(ch =='(')
            {
                pop();
            }
            else break;
        }
        else if(s[i]=='}')
        {
            char ch;
            ch = ara[top];
            if(ch =='{')
            {
                pop();
            }
            else break;
        }
        else if(s[i]==']')
        {
            char ch;
            ch = ara[top];
            if(ch =='[')
            {
                pop();
            }
            else break;
        }
    }
    if (top==-1) printf("Balanced\n");
    else printf("Not Balanced\n");


    return 0;
}

void push(char data)
{
    ara[++top]=data;
}

void pop()
{
    top--;
}
