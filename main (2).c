#include <stdio.h>
int soma(int a,int b,int c){
    int result;
    result=a +b+c;
    return result;
    
}

int sub(int a,int b,int c){
    int result;
    result=a -b-c;
    return result;
    
}
int mult(int a,int b,int c){
    int result;
    result=a *b*c;
    return result;
    
}
int divi(int a,int b,int c){
    int result;
    result=a /b/c;
    return result;
    
}
int main()
{
    int a,b,c,d;
    int resultado;
    printf("selecione a operação que você deseja:1-soma, 2-subtração 3-multiplicação e 4-divisão:\n\n");
    scanf("%d", &d);
    printf("digite até 3 numeros para a operação:\n\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(d == 1){
        resultado =soma(a,b,c);
        if(d ==2){
            resultado =sub(a,b,c);
            if(d == 3){
                resultado =mult(a,b,c);
            }else{
                resultado =divi(a,b,c);
            }
            
            
        }
    }
    printf("\n%d",resultado);
    

    return 0;
}
