#include <iostream>
using namespace std;

int main()
{
	char a[50], b[50], i;
	cin >> a >> b;
	while(a[i]!='\0')
	{
		if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')) cout << '*';
		else if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]!='a' || b[i]!='e' || b[i]!='i' || b[i]!='o' || b[i]!='u')) cout << '?';
		else if((a[i]!='a' || a[i]!='e' || a[i]!='i' || a[i]!='o' || a[i]!='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'))
			cout << '?';
		else
			cout << '#';
		i++;
	}
	return 0;
}