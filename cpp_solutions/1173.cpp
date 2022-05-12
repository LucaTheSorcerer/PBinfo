int numarare(nod * p)
{
    int count = 0;
    if(!p) return 0;
    while(p -> urm != 0)
    {
        if(p -> info == p -> urm -> info) count++;
        p = p -> urm;
    }
    return count;
}