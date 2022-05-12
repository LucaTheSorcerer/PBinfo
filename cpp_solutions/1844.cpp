void num(int n, int v[])
{
	int valoare = v[0];
	for(int i = 0; i < n; i++)
	{
		if(v[i] <= valoare)
			v[i] = 0;
	}
}