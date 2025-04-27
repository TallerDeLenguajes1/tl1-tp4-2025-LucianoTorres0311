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
struct Nodo *Siguiente;
}Nodo;


Nodo * crearListaVacia();
Nodo * CrearNodo(Tarea T);
void insertarNodos(Nodo ** Start, Nodo *Nodo);
Tarea CrearTarea(int id);
void MostrarLista(Nodo *Start);

int main()
{
    srand(time(NULL));
    int opcion;
    int id = 1000;
    Nodo *TareasPendientes = crearListaVacia();
    Nodo *TareasRealizadas = crearListaVacia();
    
    do 
    {
        printf("Ingrese la opcion que desee utilizar \n");
        scanf("%d", &opcion);
        Nodo * nuevoNodo;
        fflush(stdin);
        switch (opcion)
        {
        case 1:
            ;
            insertarNodos(&TareasPendientes, CrearNodo(CrearTarea(id++)));
            break;
        case 2:
            MostrarLista(TareasPendientes);
        break;
        default:
            break;
        }
    } while (opcion != 0);
    
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
    return NULL;
}
 void insertarNodos(Nodo ** Start, Nodo *Nodo)
{
    Nodo->Siguiente = *Start;
    *Start = Nodo;
}
 
Tarea  CrearTarea(int id)
{
    Tarea Tareas;
    char * buff = (char*)malloc(1000 * sizeof(char));
    int aux;
    int dura;
    printf("Ingrese la descripcion de la tarea \n");
    gets(buff);
    do
    {
        printf("Ingrese la duracion de la tarea entre 10 y 100\n");
        scanf("%d", &dura);
        fflush(stdin);
    } while (dura > 100 || dura < 10);
    aux = strlen(buff);
    Tareas.Descripcion = (char *)malloc((aux + 1)* sizeof(char));
    strcpy(Tareas.Descripcion, buff);
    Tareas.Duracion = dura;
    Tareas.TareaID = id;
    free(buff);
    return Tareas;
}



void MostrarLista(Nodo *Start) {
    if (Start == NULL)
    {
        printf("\nLa lista se encuentra vacia\n");
    }
    while (Start != NULL)
    {
        printf("\n---TAREA---");
        printf("\nID: %d ", Start->T.TareaID);
        printf("\nDescripcion: %s", Start->T.Descripcion);
        printf("\nDuracion de la tarea: %d\n", Start->T.Duracion);
        Start = Start->Siguiente;
    }
}
