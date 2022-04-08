#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    float reel;
    float imaginaire;
}complexe;

complexe Sum(complexe  c1 , complexe  c2)
{
    complexe  c;
    c.reel=c1.reel+ c2.reel;
    c.imaginaire=c1.imaginaire+c2.imaginaire;
    return c;
}
void saisie(complexe * c)
{
    printf("saisir");
    scanf("%f",&c->reel);
    scanf("%f",&c->imaginaire);

}


void affichage(complexe c)
{
    printf("%f + i%f \n",c.reel,c.imaginaire);
}
complexe Mul(complexe c1,complexe c2)
{
    complexe c;
    c.reel=c1.reel*c2.reel-(c1.imaginaire*c2.imaginaire);
    c.imaginaire=c1.reel*c2.imaginaire+c2.reel*c1.imaginaire;
    return c;
}
complexe Div(complexe c1,complexe c2)
{
    if(c2.reel==0 && c2.imaginaire==0)
    { 
        printf("la division est impossible");
        complexe o= {0,0};
        return o;
    }
    complexe c;
    c.reel=(c1.reel*c2.reel+(c1.imaginaire*c2.imaginaire))/(pow(c2.reel,2)+pow(c2.imaginaire,2));
    c.imaginaire=(-(c1.reel*c2.imaginaire)+c2.reel*c1.imaginaire)/(pow(c2.reel,2)+pow(c2.imaginaire,2));
    return c;
}


int main()
{
    complexe c1 , c2 , c , t , h;
    saisie(&c1);
    saisie(&c2);
    c=Sum(c1,c2);
    t=Mul(c1,c2);
    h=Div(c1,c2);
    affichage(c);
    affichage(t);
    affichage(h);



}
