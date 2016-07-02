#include "Cuenta.h"

Cuenta::Cuenta(){}

Cuenta::Cuenta(int id,float din, string nom, int ed, string direc, string tel):Usuario(nom,ed,direc,tel)
{
	idCuenta=id;
	dinero=din;
}

int Cuenta::getCuenta()
{
	return idCuenta;
}

void Cuenta::setCuenta(int id)
{
	idCuenta=id;
}

float Cuenta::getDinero()
{
	return dinero;
}

void Cuenta::setDinero(float din)
{
	dinero=din;
}

void Cuenta::crearRetiro()
{
	Retiro retiro(retiros.size()+1);
	dinero=retiro.preguntar(dinero);
	retiros.push_back(retiro);
}

void Cuenta::mostrarRetiro()
{
	cout<<"Numero de cuenta: "<<idCuenta<<endl;
	for(int x=0;x<retiros.size();x++)
	{
		cout<<"\t Numero de retiro: "<<retiros[x].getTransaccion()<<"\t Cantidad retirada: "<< retiros[x].getCantidad()<< endl;
	}
	cout<<"Saldo actual: "<<dinero<<endl;
}

void Cuenta::crearDeposito()
{
	Deposito deposito(depositos.size()+1);
	dinero=deposito.preguntar(dinero);
	depositos.push_back(deposito);
}

void Cuenta::mostrarDeposito()
{
	cout<<"Numero de cuenta: "<<idCuenta<<endl;
	for(int x=0;x<depositos.size();x++)
	{
		cout<<"\t Numero de retiro: "<<depositos[x].getTransaccion()<<"\t Cantidad retirada: "<< depositos[x].getCantidad()<< endl;
	}
	cout<<"Saldo actual: "<<dinero<<endl;
}

void Cuenta::imprimir()
{
	cout<<"Numero de la cuenta: "<<idCuenta<<endl;
	Usuario::imprimir();
	cout<<"Retiros: "<<retiros.size()<<endl<<"Depositos: "<<depositos.size()<<endl<<"Saldo actual: "<<dinero<<endl;
}
