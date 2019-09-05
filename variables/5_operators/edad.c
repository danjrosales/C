#include<stdio.h>

int main(){
    int edad = 0; // Declaro e inicializo variable
    printf("Dame tu edad:\n"); // Mandando mensaje a usuario
    scanf("%d", &edad);  // Pidiendo el valor desde la entrada ESTANDAR, teclado

printf("Eres un %s\n",(edad < 21) ? "puberto":"adulto jóven");
    
   /* if(edad < 35){ // Comparación
        printf("\tEres jóven\n");
    }else{ // de lo contrario
        printf("\tTe duelen las rodillas\n");
    }*/
}
