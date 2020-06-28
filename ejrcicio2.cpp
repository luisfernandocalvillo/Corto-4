#include <iostream>
using namespace std;

float media (float estatura[], int n)
{
    float media;
    float suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma = suma + estatura[i];
        media = suma/25;
    }
    return media;
}

void arriba_abajo (float estatura[], int n)
{
    float mayor = 0;
    float menor = 0;
    for (int i = 0; i < n; i++)
    {
        if(estatura[i] > media (estatura, n))
        {
            mayor++;
        }else
        {
            menor++;
        }
    }
    cout << "Los alumnos por arriba de la media son: " << mayor << " y los alumnos por abajo de la media son: " << menor << endl; 
}



int main()
{
    int n = 25;
    float estatura[n];
    for (int i = 0; i < n; i++)
    {
     cout << endl << "Ingrrese la estatura del alumno en metros, " << "alumno numero " << i+1 << ": ";
     cin >> estatura[i];
    }
    cout << endl << "La media de los alumnos es: " << media (estatura, n) << endl;
    arriba_abajo (estatura, n);
} 