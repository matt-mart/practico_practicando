int Eliminar_Frente(
  PILA* _pila
){
  //----------------------------------------//

  NODO nodo = *(_pila->head);

  //----------------------------------------//

  delete _pila->head;


  _pila->largo -=1;
  _pila->head = nodo.proximo;

  //----------------------------------------//

  return nodo.valor;

  //----------------------------------------//

  }
