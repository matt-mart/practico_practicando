void Borrar_Pila(
  PILA* _pila
 ){

  if ( _pila->head == nullptr )
    return;

    //keo dice que es innecesario, pero a mi me queda
    // mas lindo para leer así, te quiero mucho
    //matt del futuro. :)

  Borrar_Nodo( _pila->head );
  _pila->head  = nullptr;
  _pila->largo = 0;


 }

