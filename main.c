
#include "main.h"

int main()
{
    FILE   *fpPant;
    tLista  lista;
    int     cant,
            cantElim;

    if((fpPant = fopen("pantalla.txt", "wt"))== NULL) // si no crea el archivo
        fpPant = stdout;                              //  mostrar� por consola
    cant = crearYcargarLista(&lista);
    fprintf(fpPant, "- Se cargo la lista con %d finales.\n\n", cant);


    cant = mostrarDeIzqADer(&lista, mostrarFinal, fpPant);
/** invoque ac� su versi�n de la funci�n ...  **/
///    cant = mostrarDeIzqADer_MIO(&lista, mostrarFinal_MIO, fpPant);


    fprintf(fpPant, "- Se mostraron %d calificaciones de finales.\n\n", cant);
    fprintf(fpPant, "- Ordenando por dni.\n");


    ordenarLista(&lista, compararFinal);
/** invoque ac� su versi�n de la funci�n ...  **/
///    ordenarLista_MIO(&lista, compararFinal_MIO);


    if(cant != mostrarDeIzqADer(&lista, mostrarFinal, fpPant))
        fprintf(fpPant, "- Ups!!! - Faltan nodos.\n");
    else
        fprintf(fpPant,
                "- Se mostraron %d calificaciones de finales.\n\n",
                cant);
    fprintf(fpPant, "Eliminando y mostrando los promedios por alumno.\n");


    cantElim = vaciarMostrarDetalleYProm(&lista, fpPant,
                                         compararFinal,
                                         acumularCalif,
                                         mostrarFinal,
                                         mostrarProm);
/** invoque ac� su versi�n de la funci�n ...  **/
///    cantElim = vaciarMostrarDetalleYProm_MIO(&lista, fpPant,
///                                         compararFinal_MIO,
///                                         acumularCalif_MIO,
///                                         mostrarFinal_MIO,
///                                         mostrarProm_MIO);

    fprintf(fpPant, "- Se eliminaron %d nodos de la lista.\n\n", cantElim);
    if(fpPant != stdout && fpPant != stderr && fpPant != NULL)
    {
        fclose(fpPant);
        system("start notepad pantalla.txt");
    }
    return 0;
}

/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

