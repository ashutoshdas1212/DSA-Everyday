void replace(char input[], char s[])
{
    if (input[0] == '\0')
    {
        s[0] = '\0';
        return;
    }

    if (input[0] == 'p' && input[1] == 'i')
    {

        s[0] = '3';
        s[1] = '.';
        s[2] = '1';
        s[3] = '4';

        replace(input + 1, s + 4);
    }

    replace(input + 1, s + 1);
}

void replacePi(char input[])
{
    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }
    char s[1000];
    replace(input, s);
    int i = 0;
    for (; s[i]!='\0'; i++)
    {
        input[i]=s[i];
    }
    input[i]='\0';
    
}
