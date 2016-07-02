#include "Deposito.h"
     
     Deposito::Deposito(int id):Transaccion(id)
     {}
      
      float Deposito::preguntar(float dinero)
      {
        cout<<"Cuanto dinero desea depositar?: ";
        cin>>cantidad;
        dinero=dinero+cantidad;
        return dinero;
      }

      float Deposito::getCantidad()
      {
        return cantidad;
      }

      void Deposito::setCantidad(float c)
      {
        cantidad = c;
      }
