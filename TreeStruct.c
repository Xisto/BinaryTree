#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
        int info;
        struct tree *left;
        struct tree *right;

} *aptree, strutree;


// algoritmo que cria a raíz
aptree maketree(int x){
    aptree p;
    p = (aptree) malloc (sizeof(strutree));
    p->info = x;
    p->right = NULL;
    p->left = NULL;
    return p;


} // fim do algoritmo

void setleft(aptree p, int x){
    if (p == NULL)
        printf ("arvore vazia \n");
    else if (p->left != NULL)
        ("inserção incorreta \n");
    else
        p->left = maketree(x);
}

void setright(aptree p, int x){
    if (p == NULL)
        printf ("arvore vazia \n");
    else if (p->right != NULL)
        ("inserção incorreta \n");
    else
        p->right = maketree(x);
}
