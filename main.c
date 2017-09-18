#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int segundos;
    int minutos;
    int horas;

}eTiempo;


typedef struct
{
    int idInterprete;
    char nombre[256];
    char nacionalidad[256];

}eInterprete;

typedef struct
{
    int idCancion;
    char titulo[256];
    eInterprete interprete;
    int duracion;

}eCancion;

eInterprete hcInterpretes(eInterpretes interpretes[])
{
    interpretes[0] = {1,"Coldplay","Britanica"};
    interpretes[1] = {2,"Taylor Swift","Estadounidense"};
    interpretes[2] = {3,"Justin Bieber", "Canadiense"};
    interpretes[3] = {4,"Passenger", "Irlandesa"};
    interpretes[4] = {5,"Tan Bionica", "Argentina"};
}

eCancion hcCanciones (eCancion canciones[])
{
    cancion[0] = {1,int,""};
    cancion[1] = {};
    cancion[2] = {};
    cancion[3] = {};
    cancion[4] = {};
    cancion[5] = {};
    cancion[6] = {};
    cancion[7] = {};
    cancion[8] = {};
    cancion[9] = {};
}


int main()
{
    eInterprete interpretes[5];
    eCancion canciones[10];

}
