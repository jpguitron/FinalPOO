#include "Transaccion.h"

class Retiro : public Transaccion
{
 private:
   int cantidad;

 public:

   Retiro(int id);

   float preguntar(float dinero);

   int getId();
   void setId();

   float getCantidad();
   void setCantidad(float c);

};
