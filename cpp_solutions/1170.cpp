void adaugareInainte(nod * & prim, int x)
{
	nod * t = new nod;
	t -> info = x;
	t -> urm = prim;
	prim = t;

}