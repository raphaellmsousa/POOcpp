#include <cstdlib>
#include <string>
#include <iostream>
#include "Carro.h"

//-----------------------------------------------------------------------

using namespace std;

//-----------------------------------------------------------------------

int main()
{
	Carro c1;
	c1.setMarca("Fiat");
	c1.setAno(2018);

	Carro c2("Fiat", 2017);	

	cout << c1.getMarca() << endl;
	cout << c1.getAno() << endl;

	cout << c2.getMarca() << endl;
	cout << c2.getAno() << endl;

	cout << c1.pneus << endl;
	cout << c2.pneus << endl;

	c1.pneus = 2; //atributo da classe, todos os parâmetros serão alterados (inclusive c2)

	cout << c1.pneus << endl;
	cout << c2.pneus << endl;

	return 0;
}

//-----------------------------------------------------------------------