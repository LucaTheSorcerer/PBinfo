#include <fstream>
using namespace std;
ifstream fin("putere.in");
ofstream fout("putere.out");
long long n, m, s = 0;

int put(int a, int b)
{
	long long p = 1;
	int i;
	for(i = 1; i <= b; i++) p *= a;
	return p;
}

int main()
{
	fin >> n >> m;
	fout << put(n%10, m % 10) << endl;
	while(n != 0 && m != 0)
	{
		s += put(n % 10, m % 10);
		n /= 10;
		m /= 10;
	}
	fout << s;
	fin.close();
	fout.close();
	return 0;
}
