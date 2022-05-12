void P(int a[], int n, int &mini, int &maxi, int &sum)
{
	if(n == 1)
		maxi = mini = sum = a[0];
	else
	{
		P(a, n-1, mini, maxi, sum);
		if(a[n-1]<mini) mini = a[n-1];
		if(a[n-1] > maxi) maxi = a[n-1];
		sum += a[n-1];
	}
}