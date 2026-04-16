#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;
    
    printf("digite uma letra: ");
    scanf("%c", &letra);
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
    printf("isso e uma vogal\n");
}
    else {
    printf("isso e uma consoante\n");
}

    system("pause");
    return 0;
}
