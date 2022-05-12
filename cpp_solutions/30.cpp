void sub(int n, int k)
{
	int i;
	for(i = n * k; i >= k; i -= k)
		cout << i << ' ';
}