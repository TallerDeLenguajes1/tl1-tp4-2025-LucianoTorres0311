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

Nodo * crearListaVacia();
Nodo *CrearNodo(Tarea T);
void insertarNodos(Nodo **TareasPendientes, Nodo *NuevoNodo);


int main()
{
    int opcion;
    Nodo * TareasPendientes = crearListaVacia();
    Nodo * TareasRealizadas = crearListaVacia();
    printf("Ingrese la opcion que desee utilizar \n");
    do 
    {
        
    } while (opcion == 0);
    
    return 0;
}

Nodo *CrearNodo(Tarea T)
{
Nodo *Nodos = (Nodo *)malloc(sizeof(Nodo));
    Nodos->T = T;
    Nodos->Siguiente = NULL;
    return Nodos;
}

Nodo *crearListaVacia()
{
    Return NULL;
}
void insertarNodos(Nodo **Start, Nodo *NuevoNodo)
{
    NuevoNodo->Siguiente = *Start;
    *Start = NuevoNodo;
}