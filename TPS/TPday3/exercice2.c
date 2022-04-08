#include <stdio.h>
typedef struct intString
{
  int n;
  char s[100];
} intString;

void swapStructs(intString* a,intString* b)
{
  intString t= *a;
  *a=*b;
  *b=t;
}
void saisie(intString * l)
{
    printf("saisir");
    scanf("%d",&l->n);
    scanf("%s",l->s);

}


void affichage(intString l)
{
    printf("(%d ; %s )\n",l.n,l.s);
}


int main()
{
    intString T;
    saisie(&T);
    intString R;
    saisie(&R);
    affichage(T);
    affichage(R);
    swapStructs(&T,&R);
    affichage(T);
    affichage(R);
    




}
