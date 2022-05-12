bool TreiCifImp(int n){
    bool check = false;
    int a = 0;
    while(n){
        if(n % 2 == 1)
            ++a;
        else
            a = 0;
        if( a >= 3)
            check = true;
        n /= 10;
    }
    return check;
}