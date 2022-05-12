#include <iostream>
using namespace std;

unsigned int n, Max=10;

int main()
{
   cin >> n;
   if(n==0) Max=0;
   while(n)
   {
       if(Max==10)
       {
           if(n%2==0) Max=n%10;
       }
       else
       {
           if(n%10>Max && n%2==0) Max=n%10;
       }
       n/=10;
   }
   cout<<Max;
   return 0;
}