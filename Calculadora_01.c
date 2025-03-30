#include <stdio.h>
#include <stdlib.h>

/*

Gonzalez Huerta Alonso   Ejercicio 01   21 / 03 / 25

Hacer un calculadora con el uso de un switch en C

*/ 

int main()
{

    int opc;
    int res;
    float resdiv; // Se declara como float para que la division sea decimal
    int a;
    int b;

    do
    {

        printf("---------------------------------------- \n");
        printf("Calculadora \n");
        printf("\n");
        printf("1. Suma \n");
        printf("2. Resta \n");
        printf("3. Multiplicacion \n");
        printf("4. Division\n");
        printf("\n");
        printf("Ingrese 0 para finalizar \n");
        printf("Ingrese la opcion deseada: ");
        scanf("%d", &opc);

        // Para no volver a pedir al usuario valores de a y b cuando se finaliza el programa
        if (opc == 0)
        {
        
            printf("Finalizando...");
            return 0;

        }

        printf("---------------------------------------- \n");
        printf("Ingrese el numero A: ");
        scanf("%d", &a);
        printf("\n");
        printf("Ingrese el numero B: ");
        scanf("%d", &b);
        printf("---------------------------------------- \n");

        switch (opc)
        {

        case 1 :

            res = a + b;
            printf("La Suma es: %d\n",res);

            break;
        case 2 :

            res = a - b;
            printf("La Resta es: %d\n",res);
            
            break;
        case 3 :

            res = a * b;
            printf("La Multiplicacion es: %d\n",res);
            
            break;
        case 4 :

            if (b == 0)
            {
                printf("No se puede dividir con 0, ingrese otro numero b \n"); // Se valida que b no sea 0
            }
            else
            {
                resdiv = (float)a / (float)b; // Se convierten a float para que la division sea decimal

                printf("La Division es: %.1f\n",resdiv);
            }
            
            break;
        
        default:

            printf("Opcion incorrecta intente nuevamente \n");

            break;
        } 

    } while (opc != 0);

    return 0;
    
}