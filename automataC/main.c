#include <stdio.h>
#include <stdlib.h>
typedef struct
{   
    char titulo[256];
    char autor[256];
    float precio;
    int anio;
}Libro;
    
Libro* crearLibro(Libro* lib);
void solicitarDatos(Libro* lib);
void mostrarDatos(Libro* lib);
void liberar(Libro* lib);

int main()
{
    Libro  * lib;
    lib = crearLibro(lib);
    solicitarDatos(lib);
    mostrarDatos(lib);
    liberar(lib);
    
    return 0;
}
Libro* crearLibro(Libro* lib){
    lib = (Libro*)malloc(sizeof(Libro));
    if(lib == NULL){
        printf("No hay memoria disponible");
        exit(0);
    }
    return lib;
}
void solicitarDatos(Libro* lib){
    printf("Introduzca el titulo\n");
    scanf("%s",lib->titulo);
    printf("Introduzca el autor \n");
    scanf("%s",lib->autor);
    printf("Introduzca el precio \n");
    scanf("%f",&lib->precio);
    printf("Introduzca el anio \n");
    scanf("%d",&lib->anio);
}
void mostrarDatos(Libro* lib){
    printf("Titulo %s \n",lib->titulo);
    printf("Autor %s \n",lib->autor);
    printf("Precio %f \n",lib->precio);
    printf("Anio %d \n",lib->anio);
}
void liberar(Libro* lib){
    free(lib);
}