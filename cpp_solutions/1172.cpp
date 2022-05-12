int numarare(nod* p)
{
	int nr = 1;
	nod *prim = p;
	while(prim -> urm != NULL)
	{
		prim = prim -> urm;
		nr++;
	}
	return nr;
}