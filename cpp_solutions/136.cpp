#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char ch[200];
	cin.getline(ch, 200);
	int i, cnt = 0, ok = 0;
	bool check = false;
	while(ch[i]!='\0')
	{
		if(ch[i+1]=='\0' && ok == 0)
			ch[i+1]=' ', ch[i+2]='\0', ok++;
		if((i==0 || ch[i-1]==' ') && strchr("AEIOUaeiou", ch[i]))
			check = true;
		if(ch[i]==' ') check = false;
		if(strchr("AEIOUaeiou", ch[i]) && check && ch[i+1]==' ')
			cnt++;
		i++;
	}
	cout << cnt;
	return 0;
}
