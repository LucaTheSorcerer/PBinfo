void sum_div(int n, int &s)
{
	s = 0;
	int i;
	for(i = 1; i * i <= n; i++)
	{
		if(n % i == 0) s += i + (n/i);
		if(i * i == n)
			s -= i;
	}

}