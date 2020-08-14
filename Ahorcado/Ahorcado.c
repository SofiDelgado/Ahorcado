#include <stdlib.h>
#include <stdio.h>
#include <Ctype.h>


void IngresarPalabra(char X[20]);

int main(){
  //char B[15]={'_','_','_','_','_','_','_','_','_','_','_','_','_','_','_',};
  char A[20];
  IngresarPalabra(A);
  for (int i = 0; i < 20; i++) {
    if (A[i]=='.') {
      break;
    }else{
      printf("%c",A[i] );
    }
  }






}

void IngresarPalabra(char X[20]){

    printf("Jugador A, ingresa una palabra letra por letra para empezar el juego!\n");

    for (int i = 0; i < 20; i++) {
      scanf("%c",&X[i]);
      X[i]=toupper(X[i]);
      if (X[i]=='.') {
        break;
      }

    }
}
