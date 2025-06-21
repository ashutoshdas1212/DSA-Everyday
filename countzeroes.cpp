int count(int n,int cnt)
{
    if(n==0)
    {
        return cnt;
    }
    if(n%10==0)
    {
        cnt+=1;
    }
    return count(n/10,cnt);
}
int countZeros(int n) {
    
    return count(n,0);

}
