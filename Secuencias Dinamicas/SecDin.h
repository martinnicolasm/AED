#if
#define

struct SecDin{
	unsigned n = 0;
	array<int, M>a;
}

unsigned longitud(const SecDin&);
void insertar(SecDin&, unsigned, int);
int get (const SecDin&, unsigned);
void set (SecDin&, unsigned, int);
void remover (SecDin&, unsigned);

#endif