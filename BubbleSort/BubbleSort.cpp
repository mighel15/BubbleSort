#include <iostream>

using namespace std;

void imprimir(int elementos[], string titulo)
{
    cout<<titulo<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout << elementos[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int elementos[] = { 3,8,2,1,4,2 };
    int tam = 6;
    imprimir(elementos,"Elementos desordenados");
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam - 1; j++)
        {
            imprimir(elementos,("Comparando los elementos "));
            if (elementos[j] < elementos[j + 1])   //el orden de los elementos (descendente [<], ascendente [>])
            {
                elementos[j] = elementos[j] + elementos[j + 1];
                elementos[j + 1] = elementos[j] - elementos[j + 1];
                elementos[j] = elementos[j] - elementos[j + 1];
                //intercambio
                /*int temp = elementos[j];
                elementos[j] = elementos[j + 1];
                elementos[j + 1] = temp;*/
            }            
        }
    }
    imprimir(elementos,"Elementos ordenados");

}
