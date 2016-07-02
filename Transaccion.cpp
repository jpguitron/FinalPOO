#include "Transaccion.h"

Transaccion::Transaccion(){}

Transaccion::Transaccion(int id)
{
	transaccion=id;
}

int Transaccion::getTransaccion()
{
	return transaccion;
}

void Transaccion::setTransaccion(int id)
{
	transaccion=id;
}