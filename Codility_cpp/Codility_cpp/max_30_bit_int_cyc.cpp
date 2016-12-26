int solution(int N)
{
    int max = N;
    int result = 0;
    for (int i = 1; i < 30; i++)
    {
        if (N & 1)
        {
            N >>= 1;
            N = N | 1 << 29;

        }
        else
            N >>= 1;

        if (N > max)
        {
            max = N;
            result = i;
        }
    }
    return result;
}