#include <iostream>
using namespace std;
int f[300], i, maxi = 0, val = 0;
char ch[300];

int main()
{
	cin.getline(ch, 300);
	while(ch[i]!='\0')
	{
		if(ch[i]!=' ')
		{
			f[(int)ch[i]]++;
		}
		i++;
	}

	for(i = 50; i <= 300; i++)
	{
		if(f[i]>maxi)
			maxi = f[i], val = i;
	}
	if(val < 97)
		val += 32;
		cout << (char)val;
}
