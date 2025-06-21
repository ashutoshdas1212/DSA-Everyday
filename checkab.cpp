bool check(char input[], bool flag)
{

    

    if (input[0] != 'a' && input[1] == 'a')
    {
        flag = false;
    }

    if(input[2]=='\0')
    {
        return flag;
    }

    if (input[0] != 'b' && input[1] == 'b' && input[2] == 'a')
    {
        flag = false;
    }
    if (input[0] != 'a' && input[1] == 'b' && input[2] == 'b')
    {
        flag = false;
    }
    return flag && check(input+1,flag);
}

bool checkAB(char input[])
{
    if (input[0] != 'a')
    {
        return false;
    }

    bool flag = true;

    if ((input[0] != 'b' && input[1] == 'b'))
    {
        flag = false;
    }

    check(input, flag);
}
