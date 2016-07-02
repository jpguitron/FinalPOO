//Clase banco
   #include "Banco.h"
   
   Banco::Banco(){}
   Banco::Banco(vector <Cuenta> cuent){}

   void Banco::iniciar()
   {
   		int op;
   		bool salir=true;
   		while(salir)
   		{
   			cout<<"Bienvenido al banco, que opcion desea hacer?"<<endl<<"\t 1.- Crear nueva cuenta"<<endl<< "\t 2.- Hacer una transaccion"<<endl<<"\t 3.- Ver los reportes"<<endl<<"\t 4.- Salir"<<endl<<"(Unicamente coloque el numero)"<<endl; 
   			cin>>op;
   			
   			if(cin.fail())
        	{
          		cin.clear();
          		cin.ignore();
          		op=0;
        	}

   			switch(op)
   			{
   				case 4:
   					salir=false	;
   				break;
   			default:
   				cout<<"Opcion no valida, vuelva a intentarlo"<<endl;	
   			}


   		}
   }

   void Banco::nuevaCuenta()
   {

   }

   void Banco::trans()
   {

   }

   void Banco::reportes()
   {

   }

   void Banco::salir()
   {

   }