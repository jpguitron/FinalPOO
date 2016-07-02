#include "Cuenta.h"

class Banco
{
 private:
   vector <Cuenta> cuentas;


 public:
   Banco();
   Banco(vector <Cuenta> cuent);

   void iniciar();
   void nuevaCuenta();
   void trans();
   void reportes();
   void salir();

};