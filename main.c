#include <stdio.h>
#include "libavl.h"

int main (int argc, char **argv){
    no_t *t;
    int chave;

    t = NULL;

    scanf("%d", &chave);
    while (chave){
        insereNo(t, chave);

        imprimeArvore(t);

        scanf("%d", &chave);
    }

    return 0;
}