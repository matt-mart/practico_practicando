void Borrar_Pila (
  PILA* _pila
){

  NODO* ptr_nodo = _pila->raiz;

  while ( ptr_nodo != nullptr ){

    NODO* prox = ptr_nodo->prox;

    delete ptr_nodo;

    ptr_nodo = prox;

  }



  _pila->raiz  = nullptr;
  _pila->largo = 0;



}
