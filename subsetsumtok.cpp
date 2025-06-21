

void subset(int input[], int n, int output[][50], int k, int &outputindex, int subsetsize, int cs[100], int idx)
{

    if (idx >= n)
    {

        if (k != 0)
        {
            return;
        }
        output[outputindex][0] = subsetsize;
        for (int i = 0; i < subsetsize; i++)
        {
            output[outputindex][i + 1] = cs[i];
        }
       outputindex++;
        return;
    }

    subset(input, n, output, k, outputindex, subsetsize, cs, idx+1);

    cs[subsetsize] = input[idx];
    subset(input, n, output, k - input[idx], outputindex, subsetsize + 1, cs, idx+1);
}

int subsetSumToK(int input[], int n, int output[][50], int k)
{

    int cs[100]={0} ;
    int outputindex = 0;

    subset(input, n, output, k, outputindex, 0, cs, 0);

    return outputindex;
}
