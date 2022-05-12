void nr_div_imp(int n, int &cnt)
{
    cnt = 0;
    int i = 0;
    for(i = 1; i * i <= n; i++)
    {
        if(n%i==0)
        {
            if(i%2==1)
                cnt++;
            if((n/i)%2==1)
                cnt++;
        }

        if(i*i == n && i%2==1)
            cnt--;
    }
}