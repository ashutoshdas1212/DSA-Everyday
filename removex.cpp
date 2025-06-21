// Change in the given string itself. So no need to return or print anything

void remove(char input[], char s[])
{
    if(input[0]=='\0')
    {
        s[0]='\0';
        return ;
    }
    if (input[0] == 'x')
    {

        remove(input + 1, s);

    }
    else
    {

        s[0] = input[0];
        remove(input + 1, s + 1);
    }

}
void removeX(char input[])
{
    char s[1000];

    remove(input, s);
    int i = 0;
    for (; s[i]!='\0'; i++)
    {
        input[i]=s[i];
    }
input[i]='\0';
    
}
