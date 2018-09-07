#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
int main()
{
    int opcion;
    float suma=0;
    float resta=0;
    float division=0;
    float multiplicacion=0;
    int factoreal1=0;
    int factoreal2=0;
    float numeroUno;
    float numeroDos;

do{

        printf ("\tBienvenido a la calculadora");
        printf ("\n1. Ingrese el primer operando ");
        printf ("\n2. Ingrese el segundo operando ");
        printf ("\n3. Calcular todas las operaciones");
        printf ("\n4. Mostrar operaciones");
        printf ("\n5. Salir");

        printf ("\n Seleccione una opcion ");

        scanf ("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf ("\n Ingresar el primer operando");
            scanf ("%f", &numeroUno);
            break;
        case 2:
            printf ("\n Ingresar segundo operando");
            scanf ("%f", &numeroDos);
            break;

        case 3:
            suma=sumar (numeroUno, numeroDos);
            resta= calcularResta(numeroUno, numeroDos);
            division=calcularDivision(numeroUno, numeroDos);
            multiplicacion=calcularMultiplicacion(numeroUno,numeroDos);
            factoreal1=calcularFactorealNro1(numeroUno);
            factoreal2=calcularFactorealNro2(numeroDos);
            printf ("\n Loading...\n");
            system ("pause");
            break;
        case 4:
            printf("el resultado de la suma es: %.2f", suma);
            printf("\nel resultado de la resta es: %.2f", resta);
            printf("\nel resultado de la division es: %.2f", division);
            printf("\nel resultado de la multiplicacion es: %.2f", multiplicacion);
            printf ("\nel resultado del primer factoreal es: %d",factoreal1);
            printf("\n\n el resultado del segundo factoreal es: %d", factoreal2);
            system ("pause");
            break;
        case 5:
            printf("Saliendo...");
        default:
            break;
        }
system ("cls");
    }

        while(opcion!=5);

        return 0;
    }




