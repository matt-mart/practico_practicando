void Mostrar_Pila (
  PILA _pila
){

  NODO* ptr_nodo = _pila.head;

  while ( ptr_nodo != nullptr ){

    std::cout << "El valor es: " << ptr_nodo->valor << std::endl;

    ptr_nodo = ptr_nodo->proximo;

  }

}
