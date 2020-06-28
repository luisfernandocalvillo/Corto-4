#include <iostream>
using namespace std;

float ingrese_nota(float notas[][5], int estudiantes)//funicon que pide las notas de los 5 examenes de cada estudiante
{ 
	for (int i = 0; i < estudiantes; i++)
	{
		cout << endl << "Estudiante " << i+1 << endl;
		for (int n = 0; n <= 4; n++)
		{
			cout << "Ingrese la nota " << n+1 << ": ";
			cin >> notas[i][n];
		}
	}
    return notas[estudiantes][5];
}

float Calcular_nota(float notas[][5], int estudiantes, float notafinal[][5])//funcion que calcula las notas obtenidos de cada examen
{ 
	for (int i = 0; i < estudiantes; i++)
	{
		for (int n = 0; n <= 4; n++)
		{
			notafinal [i][n] = notas[i][n] * 0.2;
		}
	}return notafinal[estudiantes][5];
}

float suma_nota(float notas[][5], int estudiantes, float notafinal[][5], float notadesp[][1])//funcion para la suma de las notas de los 5 examenes
{ 

	for (int i = 0; i < estudiantes; i++)
	{
		for (int n = 0; n <= 0; n++)
		{
			notadesp[i][1] = notafinal[i][n] + notafinal[i][n+1] + notafinal[i][n+2] + notafinal[i][n+3] +notafinal[i][n+4];
			cout << "La nota del estudiante " << i+1 << " es: ";
			if(notadesp[i][1] >= 6)
            {
				cout << notadesp[i][1] << endl;
				cout << "El estudiante aprobo." << endl << endl;
			}else
            {
				cout << notadesp[i][1] << endl;
				cout << "El estrudiante reprobo." << endl << endl;
			}
		}
	}return notadesp[estudiantes][1];
}

int main(void)
{
	int estudiantes; 
	cout << endl << endl << "Ingrese el numero de estudiantes a los que calculara su nota: ";
	cin >> estudiantes;

	float notas[estudiantes][5]; 
	float notafinal[estudiantes][5]; 
	float notadesp[estudiantes][1];

	ingrese_nota(notas,estudiantes);
	Calcular_nota(notas,estudiantes,notafinal);
	suma_nota(notas,estudiantes,notafinal,notadesp);
}