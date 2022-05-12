#include <iostream>
#include <cstring>
using namespace std;
int i, cnt = 0;

int main()
{
	char ch[257];
	cin.getline(ch, 256);
	while(ch[i]!='\0')
	{
		if((ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') && (ch[i+1]=='a' || ch[i+1]=='e' || ch[i+1]=='i' || ch[i+1]=='o' || ch[i+1]=='u'))
			cnt++;
		i++;
	}
	cout << cnt;
	return 0;
}
