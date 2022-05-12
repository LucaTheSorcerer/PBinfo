#include <iostream>
using namespace std;
int f[300], g[300], i;
char a[21], b[21];

int main()
{
	cin >> a >> b;
	while(a[i]!='\0')
	{
		f[(int)a[i]]++;
		i++;
	}
	i = 0;
	while(b[i]!='\0')
	{
		g[(int)b[i]]++;
		i++;
	}
	bool check = true;
	for(i = 50; i <= 150; i++)
	{
		if(f[i]!=g[i])
			check = false;
	}
	if(check) cout << "1";
	else cout << "0";
	return 0;
}
