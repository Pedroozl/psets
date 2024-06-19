#include <stdio.h>
#include <string.h>

// Trocar A, E, I, O, U por 6, 3, 1, 0, v


// ./sem_vogais.c PEDRO


int main(int argc, char* argv[])
{ 
    if(argc < 1) {
        printf("Sem argumentos suficientes");
        return 0;
    }

    char* frase = argv[1];
    char novo[128];

    for(int i = 0; i < strlen(frase); i++) {
        char c = frase[i];
        switch (c)
        {
        case 'a':
            novo[i] = '6';
            break;
        case 'e':
            novo[i] = '3';
            break;
        case 'i':
            novo[i] = '1';
            break;
        case 'o':
            novo[i] = '0';
            break;
        case 'u':
            novo[i] = 'v';
            break;      
        default:
            novo[i] = c;
            break;
        }
    }

    printf("Antigo %s \n", frase);
    printf("Novo %s\n", novo);

    return 0;
}