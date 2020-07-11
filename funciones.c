/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/

#include <string.h>

/**//**//* CUALQUIER INCLUDE DE BIBLIOTECA QUE NECESITE, HÁGALO ACÁ   *//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
#include "funciones.h"
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//* ACÁ DEBE DESARROLLAR LAS FUNCIONES Y PRIMITIVAS PEDIDAS    *//**//**/
/**//**//* ADEMÁS DE CUALQUIER OTRA FUNCIÓN QUE SE REQUIERA           *//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* FUNCIONES Y PRIMITIVAS A DESARROLLAR                               *//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* para la información                                                *//**/

void mostrarFinal_MIO(const void *d, FILE *fp)
{
    if(d)
    {
        fprintf(fp,
                "%-8s %-*s %-d %2d\n",
                ((const tFinal*)d)->dni,
                sizeof(((const tFinal*)d)->apYNom) - 1, ((const tFinal*)d)->apYNom,
                ((const tFinal*)d)->codMat, ((const tFinal*)d)->calif);
    }
    else
    {
        fprintf(fp,
                "%-*s %-*s %-s\n",
                sizeof(((const tFinal*)d)->dni) - 1,  " D. N. I.",
                sizeof(((const tFinal*)d)->apYNom) - 1, "Apellido(s), Nombre(s)",
                "CodM Cal");
    }
}

int  compararFinal_MIO(const void *d1, const void *d2)
{
    return strcmp(((const tFinal*)d1)->dni, ((const tFinal*)d2)->dni);

}

int  acumularCalif_MIO(void **dest, unsigned *tamDest,
                      const void *orig, unsigned tamOrig)
{
    return 0;
}

void mostrarProm_MIO(const void *d2, int cantCalif, FILE *fp)
{
    if(d2)
    {
        fprintf(fp,
                "%-8s %-*s %-d %2d\n",
                ((const tFinal*)d2)->dni,
                sizeof(((const tFinal*)d2)->apYNom) - 1, ((const tFinal*)d2)->apYNom,
                ((const tFinal*)d2)->codMat, ((const tFinal*)d2)->calif);
    }
    else
    {
        fprintf(fp,
                "%-*s %-*s %-s\n",
                sizeof(((const tFinal*)d2)->dni) - 1,  " D. N. I.",
                sizeof(((const tFinal*)d2)->apYNom) - 1, "Apellido(s), Nombre(s)",
                "CodM Cal");
    }
}


/* para el TDA LISTA                                                  */
//int  mostrarDeIzqADer_MIO(const tLista *p,
//                          void(*mostrar)(const void *, FILE *), FILE *fp)
//{
//
//}
//
//
//void ordenarLista_MIO(tLista *p, int (*comparar)(const void *, const void *))
//{
//
//}
//
//int  vaciarMostrarDetalleYProm_MIO(tLista *p, FILE *fp,
//                                   int (*comparar)(const void *, const void *),
//                                   int (*acumular)(void **, unsigned *,
//                                                   const void *, unsigned),
//                                   void (*mostrar)(const void *, FILE *),
//                                   void (*mostrar2)(const void *, int, FILE *))
//{
//
//}


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

