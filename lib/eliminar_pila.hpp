NODO* Eliminar_Nodo (
  NODO* _nodo
){

  if ( _nodo == nullptr){

    delete _nodo;
    return nullptr;

  }

  Eliminar_Nodo( _nodo->proximo );

}


void Eliminar_Pila(
  PILA* _pila
 ){

  _pila->head = Eliminar_Nodo( _pila->head );


 }

