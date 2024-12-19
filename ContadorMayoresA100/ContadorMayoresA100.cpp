#include <iostream>
using namespace std;
int main() {
int array[15];
int contador = 0;
// Ingresar los valores del array
for(int i = 0; i < 15; i++) {
cout << "Ingrese el valor para la posición " << i + 1 << ": ";
cin >> array[i];
}
// Contar valores mayores a 100
for(int i = 0; i < 15; i++) {
if(array[i] > 100) {
contador++;
}
}
cout << "Cantidad de valores mayores a 100: " << contador << endl;
return 0;
}