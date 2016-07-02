#ifndef Fig
#define Fig

#include <iostream>

using namespace std;

class Transaccion 
{
 private:
   int transaccion;

 public:
   Transaccion();
   Transaccion(int id);

   int getTransaccion();
   void setTransaccion(int id);
};
#endif