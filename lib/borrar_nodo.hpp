
void Borrar_Nodo(
  NODO* _nodo
){

  //-------------------------------------------//

  if ( _nodo == nullptr )
    return;

  //-------------------------------------------//

  Borrar_Nodo( _nodo->proximo );
  delete _nodo;

  //-------------------------------------------//

}
