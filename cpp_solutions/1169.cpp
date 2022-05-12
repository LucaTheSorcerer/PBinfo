void afisare(nod* prim)
{
    for(nod *p = prim; p != NULL; p = p -> urm)
    	cout << p -> info << " ";
}