#include <stdio.h>
typedef struct intString
{
  int n;
  char s[100];
} intString;

void swapStructs(intString* a,intString* b)
{
  intString s= *a;
  *a=*b;
  *b=s;
}
void saisie(intString * a)
{
    printf("saisir un entier puis une chaine de caractère");
    scanf("%d",&a->n);
    scanf("%s",a->s);

}


void affichage(intString a)
{
    printf("(%d ; %s )\n",a.n,a.s);
}


int main()
{

}
