double geometric(int n, int k, double sum)
{
    if (n == k)
    {
        sum += 1 / pow(2, n);
        return sum;
    }
    sum += 1 / pow(2, n);

    return geometric(n + 1, k, sum);
}
double geometricSum(int k)
{

    return geometric(0, k, 0);
}
