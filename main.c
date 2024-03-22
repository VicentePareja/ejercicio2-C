#include <stdio.h>

int es_divisor(int a, int b){

    if (a % b ==0){
        return 1;
    } else {
        return 0;
    }
}



int main() {

    int a;
    int b;
    int menor;
    int mayor;


    printf("Enter two numbers:");

    scanf("%d %d", &a, &b);

    if (a < b){
        menor = a;
        mayor = b;
    } else {
        mayor = b;
        menor = a;
    }

    int maximo = 1;

    for (int i = 1; i <= menor; i++){
        if (es_divisor(menor, i) && es_divisor(mayor, i)){
            maximo = i;
        }
        
    }

    printf("maximo comun divisor: %d\n", maximo);

    return 0;
}