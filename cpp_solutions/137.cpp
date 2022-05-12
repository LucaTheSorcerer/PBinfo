#include <iostream>
using namespace std;
int f[300], i;
char ch[300];

int main()
{
	cin.getline(ch, 300);
	while(ch[i]!='\0')
	{
		if((int)ch[i] >= 97 && (int)ch[i] <= 122)
		{
			if(f[(int)ch[i]]==0)
			{
				cout << ch[i] << ' ';
				f[(int)ch[i]]++;
			}
		}
		i++;
	}
	return 0;
}
