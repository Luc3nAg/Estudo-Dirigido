#include <stdio.h>
int main (void)
{
    char compromisso, cidade, dinheiro, perto, chuva;
    printf("Tenho compromisso?: ");
    scanf(" %c", &compromisso);   
    printf("Estou na cidade?: ");
    scanf(" %c", &cidade);  
    printf("Tenho dinheiro?: ");
    scanf(" %c", &dinheiro);
    printf("E perto?: ");
    scanf(" %c", &perto);
    printf("Esta chovendo?: ");
    scanf(" %c", &chuva);

    if ((compromisso == 'n' && cidade == 's' && dinheiro == 'n' && perto == 's') || (compromisso == 'n' && cidade == 's' && dinheiro == 's' && chuva == 'n'))
    {
        printf("vou");
    }
    else if (!((compromisso == 'n' && cidade == 's' && dinheiro == 'n' && perto == 's') || (compromisso == 'n' && cidade == 's' && dinheiro == 's' && chuva == 'n')))
    {
        printf("n vou");
    }
    return 0;
}

