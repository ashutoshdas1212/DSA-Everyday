int subsetarr(int input[],int n,int output[][20],int startindex)
{
    if(startindex==n)
    {
        output[0][0]=0;
        return 1;
    }
int  smallsize=subsetarr(input,n,output,startindex+1);

    for (int i = 0; i <smallsize ; i++)
    {
         output[i+smallsize][0]=output[i][0]+1;
         output[i+smallsize][1]=input[startindex];
         for (int j = 1; j <= output[i][0]; j++)
         {
            output[i+smallsize][j+1]=output[i][j];
         }
         
    }
    return 2*smallsize;
    
}

int subset(int input[], int n, int output[][20]) {
    int startindex=0;
    return subsetarr(input,n,output,0);

}