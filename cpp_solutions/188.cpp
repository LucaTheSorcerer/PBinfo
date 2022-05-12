#include <fstream>
using namespace std;
ifstream fin("inlocuirecuvant.in");
ofstream fout("inlocuirecuvant.out");

int main()
{
	char a[100], b[100];
	fin >> a >> b;
	char ch[100];
	while(fin >> ch)
	{
		int i = 0;
		bool check = true;
		while(ch[i]!='\0')
		{
			if(ch[i]!=a[i])
				check = false;
			i++;
		}
		if(check)
			fout << b << ' ';
		else
			fout << ch << ' ';
	}
	return 0;
}
