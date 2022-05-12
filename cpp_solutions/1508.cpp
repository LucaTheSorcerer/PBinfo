int nr_sa(int a[][100], int n, int m)
{
    int linmin[100], linmax[100], colmin[100], colmax[100];
    for(int i = 0; i < n; ++i)
    {
        int minim = 9999999;
        int maxim = 0;
        for(int j = 0; j < m; ++j)
        {
            if(a[i][j] < minim)
                minim = a[i][j];
            if(a[i][j] > maxim)
                maxim = a[i][j];
        }
        linmin[i] = minim;
        linmax[i] = maxim;
    }
    
    for(int j = 0; j < m; ++j)
    {
        int minim = 9999999;
        int maxim = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i][j] < minim)
                minim = a[i][j];
            if(a[i][j] > maxim)
                maxim = a[i][j];
        }
        colmin[j] = minim;
        colmax[j] = maxim;
    }
    int count = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
        	if((a[i][j] == linmax[i] && a[i][j] == colmin[j]) || (a[i][j] == linmin[i] && a[i][j]== colmax[j]))
        		count++;
    return count;
}
        