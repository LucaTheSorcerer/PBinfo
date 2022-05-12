int cifmaxpar(int n)
{
    int maxi = -1;
    while(n)
    {
        if((n%10)%2==0)
        {
            if(n%10 > maxi)
                maxi = n % 10;
        
        n /= 10;
    }
    return maxi;
}