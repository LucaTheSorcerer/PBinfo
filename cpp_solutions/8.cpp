#include <fstream>
using namespace std;
ifstream fin("maxim3.in");
ofstream fout("maxim3.out");

int main()
{
	int a, b, c;
	fin >> a >> b >> c;
	if(a > b && a > c)
		fout << a;
	else if(b > a && b > c)
		fout << b;
	else fout << c;
	fin.close();
	fout.close();
	return 0;
}
