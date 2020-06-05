//-- Datos de entrada: l1,l2,l3 (double)
//--Datos de salida : area, perimetro (double)
//--------------------------------------------

#include "CTriangulo.h"

int main()
{
  tnumero lado1,lado2,lado3;

  do {
    cout << "\nLado 1 : ";
    cin >> lado1;
    cout << "Lado 2 : ";
    cin >> lado2;
    cout << "Lado 3 : ";
    cin >> lado3;
  }while( ! ((lado1+lado2>lado3) and (lado2+lado3 > lado1) and (lado3 + lado1 >lado2)));

  CTriangulo T1(lado1, lado2, lado3);
  cout << "El area es : " << T1.area() << "\n";
  cout << "El perimetro es : " << T1.perimetro() << "\n";

  cout << "\nahora creamos otro triangulo\n";
  CTriangulo T2;  //--- invocamos al constructor por defecto.

  T2.setl1(30);
  T2.setl2(40);
  T2.setl3(50);
  cout << "El area es : " <<T2.area() << "\n";
  cout << "El perimetro es : " << T2.perimetro() << "\n";

  //--- creamos un objeto dinamico

  cout << "\nAhora se crea un objeto dinamico utilizando un puntero\n";
  CTriangulo *pT3= nullptr;

  pT3 = new CTriangulo(7,24,25);
  cout << "El area es : " << pT3->area() << "\n";
  cout << "El perimetro es : " <<  (*pT3).perimetro() << "\n";
  delete pT3;
  pT3 = nullptr;
  return 0;
}
