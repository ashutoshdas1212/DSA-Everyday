void pair(char input[], char a[10000])
{
    if (input[0] == '\0')
    {   a[0]='\0';
        return;
    }


    if (input[0] == input[1])
    {
        a[0]=input[0];
        a[1]='*';
        pair(input + 1, a+2);
    }
    else
    {
        a[0]=input[0];
        pair(input + 1, a+1);
    }
}

void pairStar(char input[])
{
   char a[10000];
    pair(input, a);
    int i = 0;
    for (; a[i]!='\0'; i++)
    {
        input[i] = a[i];
    }
    input[i] = '\0';
}


