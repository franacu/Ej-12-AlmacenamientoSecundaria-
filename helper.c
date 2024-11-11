//
// Created by Fran on 11/11/2024.
//
//letra-a xq la 'a' es el 1er valor...osea q a-a=0 / b-a=1 c-a=2....desp se le suma el desplazamieto
//para q de a pase a c....a-a+desp=3 que 3 seria c...
//pero q pasa...en y...te va a quedar y-a=23--> 23+3=26...osea no hay letra de 26 xq a=0 y z=25...
//entonces se aplica el %26 asi queda todo dentro de los parametros
//y por ultimo el + 'a' --> permite convertir a letr...osea te queda  2 + 'a' = 'c'.
#include "helper.h"
char cifrado(char letra,int desplazamiento)
{
    if(letra>='a'   && letra<='z')
    {
        return (char)((letra - 'a' + desplazamiento) % 26 + 'a');
    }
    return letra;
}