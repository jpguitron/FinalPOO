#include "Retiro.h"
     
     Retiro::Retiro(int id):Transaccion(id){}

      float Retiro::preguntar(float dinero)
      {
        cout<<"Cuanto dinero desea retirar?: ";
        cin>>cantidad;
        dinero=dinero-cantidad;
        return dinero;
      }
      

      float Retiro::getCantidad()
      {
        return cantidad;
      }

      void Retiro::setCantidad(float c)
      {
        cantidad = c;
      }
