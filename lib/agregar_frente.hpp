void Agregar_Frente_Pila (
  PILA* _pila,
  int _valor
){

//----------------------------------------------------------//

    _pila->largo += 1;

    _pila->head = new NODO { _valor, _pila->head };

//----------------------------------------------------------//


}
