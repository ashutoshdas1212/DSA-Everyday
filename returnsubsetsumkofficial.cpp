int subset(int input[], int n, int output[][50], int k, int startindex)
{
    if (startindex == n)
    {
        if (k == 0)
        {
            output[0][0] = 0;
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int row = 0;
    int smalloutput1[3000][50], smalloutput2[3000][50];
    int size1 = subset(input, n, smalloutput1, k, startindex + 1);
    int size2 = subset(input, n, smalloutput2, k - input[startindex], startindex + 1);

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j <= smalloutput1[i][0]; j++)
        {

            output[row][j] = smalloutput1[i][j];
        }
        row++;
    }

    for (int i = 0; i < size2; i++)
    {

        output[row][0] = smalloutput2[i][0] + 1;
        output[row][1] = input[startindex];
        for (int j = 1; j <= smalloutput2[i][0]; j++)
        {

            output[row][j + 1] = smalloutput2[i][j];
        }
        row++;
    }

    return row;
}

int subsetSumToK(int input[], int n, int output[][50], int k)
{

  return subset(input, n, output, k, 0);
}
