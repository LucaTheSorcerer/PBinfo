#include <fstream>
using namespace std;
ifstream cin("palindrom.in");
ofstream cout("palindrom.out");

int main()
{
    int n;
    cin >> n;
    cin.get();
    for(int i = 0 ; i < n ; i++)
    {
        char v[300];
        cin.getline(v, 300);
        int c=0;
        int j = 0;
        while(v[j]!='\0')
        {
            while(v[j]==' ')
            {
                int k = j;
                while(v[k]!='\0')
                {
                    v[k]=v[k+1];
                    k++;
                }
            }
            c=j;
            j++;
        }
        j = 0;
        int sw=1;
        while(v[j]!='\0')
        {
            if(v[j]!=v[c-j])
            {
                sw=0;
            }
            j++;
        }
        if(sw)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}