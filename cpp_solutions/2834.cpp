#include <fstream>
#include <climits>
using namespace std;
ifstream fin("sir13.in");
ofstream fout("sir13.out");
int n, x, maxim = 1000000001, mini, check;

int main()
{
    while(fin >> x)
    {   
        if(x % 2 == 0)
        {
            if(x <  mini) check = 1;
            else mini = x; 
        }
        else
        {
            if(x > maxim) check = 1;
            else maxim = x;
        }
    }
    if(check == 0) fout << "DA";
    else fout << "NU";
    return 0;
}