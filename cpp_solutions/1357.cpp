#include <fstream>
using namespace std;
ifstream fin("plusminus.in");
ofstream fout("plusminus.out");

int n, x[26], check;

void afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        if(x[i]==-1) fout << "- ";
        else fout << "+ ";
    fout << '\n';
    check++;
}

void Back(int k, int sp)
{
    int i;
    for(i = - 1; i <= 1; i += 2)
    {
        x[k] = i;
        sp += i * k * k;
        if(k == n)
        {
            if(sp == n) afisare();
        }
        else Back(k + 1, sp);
        sp -= i * k * k;
    }
}

int main()
{
    fin >> n;
    Back(1, 0);
    if(!check) fout << "IMPOSIBIL";
}