#include <iostream>
using namespace std;

int a[10];

int main()
{
    char ch[300];
    cin.getline(ch, 300);
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='0')
            a[0]++;
        if(ch[i]=='1')
            a[1]++;
        if(ch[i]=='2')
            a[2]++;
        if(ch[i]=='3')
            a[3]++;
        if(ch[i]=='4')
            a[4]++;
        if(ch[i]=='5')
            a[5]++;
        if(ch[i]=='6')
            a[6]++;
        if(ch[i]=='7')
            a[7]++;
        if(ch[i]=='8')
            a[8]++;
        if(ch[i]=='9')
            a[9]++;
        i++;
    }
    int maxi = 0, val = 1;
    for(i = 0; i <= 10; i++)
    {
        if(a[i] > maxi)
            maxi = a[i], val = i;
    }
    if(val==1)
        cout << "NU";
    else
        cout << val;
}
