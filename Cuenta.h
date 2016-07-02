#include <vector>
#include "Usuario.h"
#include "Retiro.h"
#include "Deposito.h"

class Cuenta : public Usuario
{
 private:
   int idCuenta;
   float dinero;
   vector <Deposito> depositos;
   vector <Retiro> retiros;


 public:
   Cuenta();
   Cuenta(int id,float din, string nom, int ed, string direc, string tel);

   int getCuenta();
   void setCuenta(int id);

   float getDinero();
   void setDinero(float d);

   void crearRetiro();
   void mostrarRetiro();

   void crearDeposito();
   void mostrarDeposito();

   void imprimir();


};