# Invertir Cualquier texto

En este problema es importante recordar que un string es un objeto que representa una secuencia de caracteres

#### Problema

Escriba un programa que invierta la entrada de flujo pedida al usuario

## Pseudocódigo

```

string cadena, texto_invertido := ""
bool bandera := true
hacer
  imprimir "Escriba algo: "
  getline(cin, cadena)
  if cadena != ""
    bandera := false
  si no entonces
    imprimir "No se acepta entradas vacias"
mientras bandera == true
para int i := cadena.size() hasta i >= 0 disminuir
  texto_invertido +:= cadena[i]
imprimir "El texto invertido es:" + texto_invertido

```

## Código

```c++

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string cadena, texto_invertido = "";
	bool bandera = true;

	do
	{
		cout << "Escriba algo: ";
		getline(cin, cadena);
		if (cadena != "")
			bandera = false;
		else
			cout << "No se acepta entradas vacias\n";
	} while (bandera);

	for (int i = cadena.size(); i >= 0; i--)
	{
		texto_invertido += cadena[i];
	}

	cout << "El texto invertido es: " << texto_invertido << "\n";
	cout << "Fin del programa";
	system("PAUSE");
	return 0;
}

```
