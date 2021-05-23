#include<stdio.h>
#include<stdlib.h>

int main(){
	
    float peso=0, altura=0, imc=0;
    
    printf("Calculo de IMC\n\n");
    
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    
    printf("Digite sua altura: ");    
    scanf("%f",&altura);
    
    imc=peso/(altura*altura);
    
    printf("O resultado do IMC e: %f \n\n", imc);
    
    if (imc<16) printf("Subpeso severo!\n\n");
    else if (imc>16 && imc<19.9) printf("Subpeso!\n\n");
    else if (imc>20 && imc<24.9) printf("Normal!\n\n");
    else if (imc>25 && imc<29.9) printf("Sobrepeso!\n\n");
    else if (imc>30 && imc<39.9) printf("Obeso!\n\n");
    else if (imc>40) printf("Obeso morbido!\n\n");
    
    system("pause");
    return 0;
}
