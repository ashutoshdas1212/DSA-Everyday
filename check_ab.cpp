bool check_ab(char input[],int startindex)
{
    if(input[startIndex]=='\0')
    {
        return true;
    }
    if(input[startIndex]=='a')
    {
        return false;
    }

    if(input[startindex+1]!='\0' && input[startindex+2]!='\0')
    {
        if(input[startindex+1])=='b' && input[startindex+2]=='b')
        {
            return check_ab(input,startindex+3);
        }
    }
return  check_ab(input,startindex+1);

}

bool checkAB(char input[])
{
    bool ans;
    ans=check_ab(input,0);
    return ans;
}