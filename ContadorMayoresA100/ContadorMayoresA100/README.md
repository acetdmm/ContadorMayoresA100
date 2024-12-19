# Contador de Valores Mayores a 100 en un Array

Este programa en C++ permite ingresar 15 números en un array y luego cuenta cuántos de esos números son mayores a 100. El código está diseñado para practicar el uso de arrays, la entrada de datos y el procesamiento de condiciones en C++.

## Propósito del Código

El objetivo de este programa es ingresar 15 valores en un array y luego contar cuántos de esos valores son mayores a 100. Este tipo de programa es útil para practicar el manejo de arrays y el uso de condiciones simples en C++.

## ¿Qué incluye el código?

1. **Declaración del Array**
   - El programa declara un array de 15 enteros llamado `array` para almacenar los valores ingresados por el usuario.
     ```cpp
     int array[15];
     ```

2. **Ingreso de Valores**
   - Se solicita al usuario que ingrese un valor para cada posición del array, desde la posición 1 hasta la 15. Este proceso se realiza mediante un ciclo `for`:
     ```cpp
     for(int i = 0; i < 15; i++) {
         cout << "Ingrese el valor para la posición " << i + 1 << ": ";
         cin >> array[i];
     }
     ```

3. **Conteo de Valores Mayores a 100**
   - A continuación, se utiliza otro ciclo `for` para recorrer el array y contar cuántos de los valores ingresados son mayores a 100. La condición `array[i] > 100` verifica si un número es mayor a 100:
     ```cpp
     for(int i = 0; i < 15; i++) {
         if(array[i] > 100) {
             contador++;
         }
     }
     ```

4. **Salida del Resultado**
   - Al final, el programa imprime la cantidad de valores mayores a 100 que se han encontrado en el array:
     ```cpp
     cout << "Cantidad de valores mayores a 100: " << contador << endl;
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Compila el código utilizando un compilador de C++:
     ```bash
     g++ contadorMayoresA100.cpp -o contadorMayoresA100
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./contadorMayoresA100
     ```

3. **Interacción con el Usuario**
   - El programa pedirá que ingreses 15 números, uno por uno. Después de ingresar todos los números, el programa mostrará cuántos de ellos son mayores a 100.

   Ejemplo de ejecución:
   ```plaintext
   Ingrese el valor para la posición 1: 50
   Ingrese el valor para la posición 2: 120
   Ingrese el valor para la posición 3: 130
   ...
   Cantidad de valores mayores a 100: 3
