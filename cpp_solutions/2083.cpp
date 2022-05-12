#include <iostream>
void ordon123(int n, int a[])
{
    int i = 0, j = 0;
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j])
                std::swap(a[i],a[j]);
}