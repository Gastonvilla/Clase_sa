#include <stdio.h>
#include <stdlib.h>
void mostrarUnArray(int parametroArray^[],int cant)
void inicializarUnArray (int parametroArray^[],int cant)
void cargaSecuencialUnArray (int parametroArray^[],int cant)
int dameElMaximo (int parametroArray^[],int cant)
int dameElIndiceMaximo (int parametroArray^[],int cant)

int main()
{
    int indice
    int miArray[CANTIDAD]
    inicializarUnArray(miArray,CANTIDAD);
    printf(%d)
    return 0;
}
int dameElMaximo (int parametroArray[],int cant)
{
   int indice;
   int maximo;
   for (indice = 0; indice < CANTIDAD; indice ++)
   {
       if(indice == 0 || parametrArray [indice]>maximo)

   {       maximo=parametroArray [indice];
   }
}
void mostrarUnArray(int parametroArray[],int cant){
    int indice;
    for (indice = 0; indice < cant; indice ++){
        printf("\n numero:%d",parametroArray[indice]);
    }
}
void inicializarUnArray(int parametroArray[],int cant)
{
   int indice;
    for (indice = 0; indice < cant; indice ++){
        parametroArray[indice]=0;
}
void cargasecuenciaUnArray(int parametroArray[],int cant)
{
    int indice;
    for (indice = 0; indice < cant; indice ++)
        {
        printf("\n ingrese un numero:");
        scan(%d,parametroArray[indice]);
        parametroArray[indice]=0;
        }
