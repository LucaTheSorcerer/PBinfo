#include <iostream>
using namespace std;
int i = 0, j = 0;
char ch[300];

int main()
{
	cin >> ch;
	i = 0;
	while(ch[i] != '\0')
	{
		j = 0;
		while(ch[j] != '\0')
		{
			if(i != j)
				cout << ch[j];
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
