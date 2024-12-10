#include <stdio.h>

int main (int argc, char *argv[]) {

    int n, edad;
    float tmin, tmax, tpits;
    float minTmin, maxTmax, minTpits, promEdad;
    int cminTmin=1, cmaxTmax=1, cminTpits=1;

    do{
        printf("Ingrese el numero de conductores (1-5): ");
        scanf("%d",&n);
    }while(n<=0 || n>5);
    for (int i = 0; i < n; i++)
    {
        do{
        printf("Ingrese el tiempo minimo del conductor %d: ",i+1);
        scanf("%f",&tmin);
        }while(tmin<0);
        do{
        printf("Ingrese el tiempo maximo del conductor %d: ",i+1);
        scanf("%f",&tmax);
        }while(tmax<0);
        printf("Ingrese el tiempo minimo del conductor %d en pits: ",i+1);
        scanf("%f",&tpits);
        printf("Ingrese la edad del conductor %d: ",i+1);
        scanf("%d",&edad);
        printf("-----------------------------------------\n");
        promEdad+=edad;
        if (i==0){
            minTmin=tmin;
            maxTmax=tmax; 
            minTpits=tpits;
        }
        if (tmin<minTmin)
        {
            minTmin=tmin;
            cminTmin=i+1;
        }
        if(tmax>=maxTmax){
            maxTmax=tmax;
            cmaxTmax=i+1;
        }
        if (tpits<minTpits)
        {
            minTpits=tpits;
            cminTpits=i+1;
        }
    }
    promEdad=promEdad/n;
    printf("El menor tiempo fue %.2f del conductor %d\n",minTmin,cminTmin);
    printf("El mayor tiempo fue %.2f del conductor %d\n",maxTmax,cmaxTmax);
    printf("El menor tiempo en pits fue %.2f del conductor %d\n",minTpits,cminTpits);
    printf("El promedio de la edad de los conductores es: %.2f\n",promEdad);

    return 0;
}