void cifmaxmin(int n, int &Max, int &Min)
{
    if(n < 10) Min = Max = n;
    else
    {
        cifmaxmin(n/10, Max, Min);
        if(n%10 > Max) Max = n % 10;
        if(n%10 < Min) Min = n % 10;
    }
}