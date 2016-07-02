#include <iostream>
#include <string>

using namespace std;

class Usuario {

protected:

   string nombre;
   int edad;
   string direccion;
   string telefono;

public:

   Usuario();
   Usuario(string nom, int ed,string direc,string tel);

   string getNombre();
   void setNombre(string n);

   int getEdad();
   void setEdad(int e);

   string getDireccion();
   void setDireccion(string d);

   string getTelefono();
   void setTelefono(string t);

  void imprimir();

};
