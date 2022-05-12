int DivImpar(int a, int b)
{
    int r;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    
    if(a % 2 == 1)
        return a;
    else
    {
        int maxi = 0, i = 0;
        for(i = 1; i * i <= a; i++)
        {
            if(a % i == 0)
            {
                if(i >= maxi && i%2==1)
                    maxi = i;
                if(a/i>=maxi && (a/i)%2==1)
                    maxi = a/i;
            }
        }
        return maxi;
    }
    
}