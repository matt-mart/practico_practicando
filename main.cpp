#include <iostream>
#include "./lib/nodo.hpp"
#include "./lib/pila.hpp"
#include "./lib/borrar_nodo.hpp"
#include "./lib/borrar_pila.hpp"
//#include "./lib/eliminar_pila.hpp"
#include "./lib/crear_pila.hpp"
#include "./lib/mostrar_pila.hpp"
#include "./lib/agregar_frente.hpp"
#include "./lib/eliminar_frente.hpp" //  Lo saca alv, o no sé.




using namespace std;

int main()
{
  int largo = 5;
  PILA pila;

    Crear_Pila( &pila , largo );
    Mostrar_Pila( pila );
 //Borrar_Pila( &pila );
  int valor = 50;

  std::cout << " " << std::endl;
  std::cout << " ---separador--- " << std::endl;
  std::cout << " " << std::endl;

  Agregar_Frente_Pila( &pila, valor );
  Mostrar_Pila( pila );
  //Borrar_Pila( &pila );


  std::cout << " " << std::endl;
  std::cout << " ---separador--- " << std::endl;
  std::cout << " " << std::endl;

  Agregar_Frente_Pila( &pila, valor+45);
  Mostrar_Pila( pila );
  //Borrar_Pila( &pila );

  std::cout << " " << std::endl;
  std::cout << " ---separador--- " << std::endl;
  std::cout << " " << std::endl;

  Agregar_Frente_Pila( &pila, valor+90 );
  Mostrar_Pila( pila );
  //Borrar_Pila( &pila );

  std::cout << " " << std::endl;
  std::cout << " ---separador--- " << std::endl;
  std::cout << " " << std::endl;

  Agregar_Frente_Pila( &pila, valor+180 );
  Mostrar_Pila( pila );
   //Borrar_Pila( &pila );

  std::cout << " " << std::endl;
  std::cout << " ---separador--- " << std::endl;
  std::cout << " " << std::endl;

  Eliminar_Frente( &pila );
  Mostrar_Pila( pila );
  Borrar_Pila( &pila );
}
