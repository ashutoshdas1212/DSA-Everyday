void stoi(char input[], int b, int num)
{
    if (input[0] == '\0')
    {
        return;
    }
    int digit = input[0] - '0';
    num += digit * b;
    stoi(input, b / 10, num);
}
int stringToNumber(char input[])
{

    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }
    int num = 0;
    int b = pow(10, len - 1);
    stoi(input, b, num);
}
