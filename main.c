#include <stdio.h>
#include <stdlib.h>
int numero;
int main()
{

    int i;
    int numeroMaximo;
    int numeroMinimo;
    float promedio;
    int acumulador;
    printf("%d",numero);
    for(i=0,acumulador=0;i<10;i++){
        printf("ingrese un numero :\n");
        scanf("%d",&numero);
        printf("%d",numero);
        if(i==0){
            numeroMaximo=numero;
            numeroMinimo=numero;
        }else if(numero<numeroMinimo){
            numeroMinimo=numero;
        }else if(numero>numeroMaximo){
            numeroMaximo=numero;
        }
        acumulador+=numero;
    }
    promedio=(float)acumulador/i;
    printf("El numero Maximo es %d y el Minimo es %d\n",numeroMaximo,numeroMinimo);
    printf("El promedio de numeros ingresados es %.2f",promedio);
}
