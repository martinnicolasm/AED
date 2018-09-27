#include <iostream>
#include "SecDin.h"
#include <array>
#include <assert.h>

int main (){
	SecDin s;
	assert (0 == longitud(s));
	insertar (s,0,7);
	assert (7 == get(s,0));
	set (s,0,6);
	assert (6,get(s,0));
	remover (s,0);
	assert(0 == longitud(s));
}