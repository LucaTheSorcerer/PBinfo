#include <iostream>
using namespace std;
char ch[11], cons = 0, voc = 0;
int i = 0, indicevoc = -1, indicecons = -1, check = 0;

int main()
{
	cin >> ch;
	while(ch[i] != '\0')
	{
		if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
		{
			if(check == 0)
				indicevoc = i, voc = ch[i], check ++;
		}
		else
			indicecons = i, cons = ch[i];
		i++;
	}
	i = 0;
	if(indicevoc != -1 && indicecons != -1)
	{
		while(ch[i] != '\0')
		{
			if(i == indicevoc)
				cout << cons;
			else if(i == indicecons)
				cout << voc;
			else cout << ch[i];
			i++;
		}
	}
	else
		cout << "IMPOSIBIL";
	return 0;
}
