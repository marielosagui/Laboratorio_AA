#include <iostream>

using namespace std;

int minimo(int datos[], int size) {
    if (size == 0)
    {
        return datos[0];
    }

    else
    {
        if (datos[size] < minimo(datos, size - 1))
        {
            return datos[size];
        }

        else
        {
            return minimo(datos, size - 1);
        }
    }
}

int main()

{
    int datos[] = {5, 1, 9, 3};
   cout<<minimo(datos, 3);
    return 0;
}