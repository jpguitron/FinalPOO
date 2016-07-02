#include "Transaccion.h"

class Deposito : public Transaccion
{
 private:
   float cantidad;
   int id;

 public:
   Deposito(int id);

   float preguntar(float dinero);

   int getId();
   void setId(int i);

   float getCantidad();
   void setCantidad(float c);

};
