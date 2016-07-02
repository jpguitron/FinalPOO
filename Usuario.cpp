#include "Usuario.h"

   Usuario::Usuario(){}
   Usuario::Usuario(string nom, int ed,string direc,string tel)
   {
     nombre=nom;
     edad=ed;
     direccion=direc;
     telefono=tel;
   }


   string Usuario::getNombre()
   {
      return nombre;
   }

   void Usuario::setNombre(string n)
   {
      nombre = n;
   }

   int Usuario::getEdad()
   {
      return edad;
   }

   void Usuario::setEdad(int e)
   {
      edad = e;
   }

   string Usuario::getDireccion()
   {
      return direccion;
   }

   void Usuario::setDireccion(string d)
   {
      direccion = d;
   }

   string Usuario::getTelefono()
   {
    return telefono;
   }

   void Usuario::setTelefono(string t)
   {
    telefono=t;
   }

  void Usuario::imprimir()
  {
      cout<<"\t Nombre: "<<nombre<<endl<<"\t Edad: "<<edad<<endl<<"\t Direccion: "<<direccion<<endl<<"\t Telefono: "<<telefono<<endl;
  }
