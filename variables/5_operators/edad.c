#include<stdio.h>

int main(){
    int edad = 0; // Declaro e inicializo variable
    printf("Dame tu edad:\n"); // Mandando mensaje a usuario
    scanf("%d", &edad);  // Pidiendo el valor desde la entrada ESTANDAR, teclado

printf("Eres un %s\n",(edad < 21) ? "puberto":"adulto j�ven");
    
   /* if(edad < 35){ // Comparaci�n
        printf("\tEres j�ven\n");
    }else{ // de lo contrario
        printf("\tTe duelen las rodillas\n");
    }*/
}
