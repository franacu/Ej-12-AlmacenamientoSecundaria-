//Escriba un programa que cifre simétricamente el contenido de un archivo
//cifrado simetrico -> CESAR con cifrado 3 ---> FHVDU
#include <stdio.h>
#include "helper.h"
#define MAX_LONG 256
int main()
{
    char *archivo2="ejercicio12copia.txt";
    FILE *fpS;
    char *archivo1="ejercicio12.txt";
    FILE *fpE;
    int desplazamiento=3;
    char linea[MAX_LONG];
    fpE= fopen(archivo1,"a");
    //solo minusculas!!!!!!
    fprintf(fpE,"cesar\n");
    fclose(fpE);
    fpE= fopen(archivo1,"r");
    fpS= fopen(archivo2,"w");
    while (fgets(linea,MAX_LONG,fpE)!=NULL)
    {
        for(int i=0;linea[i]!='\0';i++)
        {
            linea[i]=cifrado(linea[i],desplazamiento);
        }
        fprintf(fpS,"%s",linea);
    }

    fclose(fpE);
    fclose(fpS);

    printf("El archivo ha sido cifrado con éxito\n");


    return 0;
}
