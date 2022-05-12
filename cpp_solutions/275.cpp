#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("perechivocale1.in");
ofstream fout("perechivocale1.out");

char s[256], voc[]="aeiou";
int i, j, a[5][5], l, c, mx;

int main()
{
	while(fin.getline(s, 256))
	{
		for(i = 0; i < strlen(s)-1; i++)
			if(strchr(voc, s[i]) && strchr(voc, s[i+1]))
			{
				l = strchr(voc, s[i]) - voc; c= strchr(voc, s[i+1])-voc;
				a[l][c]++;
			}
	}
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			if(a[i][j]>mx) mx = a[i][j];

	if(mx == 0) {fout<<"NU"; return 0;}

	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			if(a[i][j]==mx)
				fout << voc[i] << voc[j] << " ";
	fout.close();
	return 0;
}
