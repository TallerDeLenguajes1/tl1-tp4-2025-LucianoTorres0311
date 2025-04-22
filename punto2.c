#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
int TareaID;//Numérico autoincremental comenzando en 1000
char *Descripcion; //
int Duracion; // entre 10 – 100
}Tarea;
 typedef struct {
Tarea T;
Nodo *Siguiente;
}Nodo;

Nodo * crearListaVacia()
{
    return NULL;
}

Nodo *CrearNodo(Tarea T)
{
    Nodo *Nodos = (Nodo *)malloc(sizeof(Nodo));
    Nodos->T = T;
    Nodos->Siguiente = NULL;
    return Nodos;
}


int main()
{
    int opcion;
    Nodo * start = crearListaVacia();
    printf("Ingrese la opcion que desee utilizar \n");
    do 
    {
        /* code */
    } while (opcion == 0);
    
    return 0;
}

