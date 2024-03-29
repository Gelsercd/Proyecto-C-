#include <stdio.h>

#define TC_DOLAR_GTQ 7.75 
#define TE_EURO_GTQ 8.54

int main(){
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda\n");
    printf("1. Convertir de Dólares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dólares\n");
    printf("3. Convertir de Euros a Quetzales\n");
    printf("4. Convertir de Quetzales a Euros\n");
    printf("Ingrese su opcion\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
    printf("Ingrese la cantidad en Dólares: ");
    scanf("%f", &cantidad);
    printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
     break;
    case 2:
    printf("Ingrese la cantidad de Quetzales: ");
    scanf("%f", &cantidad);
    printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
    break;
    case 3:
    printf("Ingrese la cantidad en Euros: ");
    scanf("%f", &cantidad);
    printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, cantidad * TE_EURO_GTQ);
    break;
    case 4:
    printf("Ingrese la cantidad en Quetzales: ");
    scanf("%f", &cantidad);
    printf("%.2f GTQ equivale a %.2f EUR\n", cantidad, cantidad / TE_EURO_GTQ);
    break;
    default:
    printf("opción no valida, solo se aceptan números ");
    }

}