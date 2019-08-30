NODO* Crear_Nodo(
  int _cantidad
){

  if ( _cantidad == 0)
    return nullptr;


  NODO* nodo = new NODO;

  nodo->proximo = Crear_Nodo( _cantidad - 1 );

  return nodo;

}

void Crear_Pila(
  PILA* _pila,
  int   _largo
){

   Borrar_Pila( _pila );
  _pila->head = Crear_Nodo(_largo);


}
