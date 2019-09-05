#include<stdio.h>

int main(){
    int edad = 0; // Declaro e inicializo variable
    printf("Dame tu edad:\n"); // Mandando mensaje a usuario
    scanf("%d", &edad);  // Pidiendo el valor desde la entrada ESTANDAR, teclado

	//printf("Eres un %s\n",(edad >= 13 && edad <= 21) ? "jovén":"viejo");
    
    if(edad < 5){ // Comparación
        printf("\tEres infante");
    }else if(edad >5 && edad <21){ // de lo contrario
        printf("\tEres puberto\n");
    }else{
       printf("\tEres viejo\n");
    }
}
