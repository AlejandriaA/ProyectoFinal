#ifndef TIERRA
#define TIERRA

#include <iostream>
#include <vector>
#include "tipos.h"
#include "objeto.h"

using namespace std;

// Valores constantes
const TipoEntero ALTURA = 21;
const TipoEntero ANCHO = 21;
const TipoCaracter COLOR = '.';

class Tierra {
private:
	vector<vector<char>> plano;
	vector<Objeto*> objetos;
public:
	Tierra();
	Tierra(TipoEntero altura, TipoEntero ancho);
	virtual ~Tierra();
	void adicionarObjeto(Objeto* objeto);
	Objeto* removerObjeto(string& nombre);
	void imprimirObjetos();
	TipoEntero getAltura();
	TipoEntero getAncho();
	TipoEntero getCantidadObjectos();
	void dibujarTierra();
	void actualizarTierra();
};

#endif // !TIERRA