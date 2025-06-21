`

void replacePi(char input[])
{

    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }
    char s[1000];
    int c = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == 'p' && input[i + 1] == 'i')
        {

            s[c] = '3';
            s[c + 1] = '.';
            s[c + 2] = '1';
            s[c + 3] = '4';
            c += 4;
            i += 1;
        }
        else
        {
            s[c++] = input[i];
        }
    }
    s[c] = '\0';
    int i = 0;
    for (; s[i] != '\0'; i++)
    {
        input[i] = s[i];
    }
    input[i] = '\0';
}
