void subsetarr(int input[], int n, int output[3000][20], int &outputindex, int currsubsetsize, int currindex, int currsubset[])
{
    if (currindex == n)
    {
        output[outputindex][0] = currsubsetsize;
        for (int i = 0; i < currsubsetsize; i++)
        {
            output[outputindex][i + 1] = currsubset[i];
        }
        outputindex++;
        return;
    }

    subsetarr(input, n, output, outputindex, currsubsetsize, currindex + 1, currsubset);
    currsubset[currsubsetsize] = input[currindex];
    subsetarr(input, n, output, outputindex , currsubsetsize+1, currindex + 1, currsubset);
}
int subset(int input[], int n, int output[][20])
{
    int currsubset[20];
    int outputindex=0;
    subsetarr(input, n, output, outputindex, 0, 0, currsubset);
}
