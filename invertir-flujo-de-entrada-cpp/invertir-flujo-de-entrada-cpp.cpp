// invertir-flujo-de-entrada-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Autor: Cristian Antonio Escalante Hernandez
// Github: crisanto-dev
// 11/11/2020
// Problema: Escriba un programa que invierta la entrada de flujo pedida al usuario

#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Autor: Cristian Antonio Escalante Hernandez\n";
	cout << "Github: crisanto-dev\n";
	cout << "Problema: Escriba un programa que invierta la entrada de flujo pedida al usuario\n";

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

