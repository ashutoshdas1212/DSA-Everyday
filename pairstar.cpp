void pair(char input[], char s[])
{
    if (input[0] == '\0')
    {
        s[0]='\0';
        return;
    }
    if (input[0] == input[1])
    {
        s[0] = input[0];
        s[1] = '*';
        s[2] = input[1];
        pair(input + 2, s + 3);
    }
    else
    {
        pair(input + 1, s + 1);
    }
}
void pairStar(char input[])
{

    char s[1000];
    pair(input, s);
    int i=0;
    for(;s[i]!='\0';i++)
    {
        input[i]=s[i];
    }
    input[i]='\0';
}