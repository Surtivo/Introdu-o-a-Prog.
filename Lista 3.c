#include <stdio.h>
#include <stdlib.h> /*Habilita a função "rand" e "srand"*/
#include<time.h> /*Habilita a função "time"*/
#define TAM 10

int Q1 ()
{
    int a [5];
    int b [5];
    int c [5] = {};
    int i;
    
    printf("Dê os valores do vetor A. Um valor por vez\n");
    for (i=0; i<5; i++)
    {
        scanf("%i", &a[i]);
    }
    
    printf("Dê os valores do vetor B. Um valor por vez\n");
    for (i=0; i<5; i++)
    {
        scanf("%i", &b[i]);
    }
    
    for (i=0; i<=4; i++)
    {
        if (a[i]<b[i])
        {
            c[i]=b[i];
        }
        if (b[i]<a[i])
        {
            c[i]=a[i];
        }
        if (a[i]==b[i])
        {
            c[i]=a[i];
        }
    }
    
    printf("\nA = [%i] [%i] [%i] [%i] [%i] \n\n", a[0], a[1], a[2], a[3], a[4]);
    printf("B = [%i] [%i] [%i] [%i] [%i] \n\n", b[0], b[1], b[2], b[3], b[4]);
    printf("C = [%i] [%i] [%i] [%i] [%i] \n\n", c[0], c[1], c[2], c[3], c[4]);
    
    return 0;
}

int Q2 ()
{
    int a [5];
    int b [5];
    int c [10] = {};
    int i;
    
    printf("Dê os valores do vetor A. Um valor por vez.\n");
    for (i=0; i<5; i++)
    {
        scanf("%i", &a[i]);
    }
    
    printf("Dê os valores do vetor B. Um valor por vez.\n");
    for (i=0; i<5; i++)
    {
        scanf("%i", &b[i]);
    }
    
    for (i = 0; i<10; i++) 
    {
        c[i*2] = a[i];
    }
    for (i = 0; i<10; i++) 
    {
        c[i*2+1] = b[i];
    }
    
    printf("\nA = [%i] [%i] [%i] [%i] [%i] \n\n", a[0], a[1], a[2], a[3], a[4]);
    printf("B = [%i] [%i] [%i] [%i] [%i] \n\n", b[0], b[1], b[2], b[3], b[4]);
    printf("C = [%i] [%i] [%i] [%i] [%i] [%i] [%i] [%i] [%i] [%i] \n\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9]);
    
    return 0;
}

void exibe_vetor(int v[], int t);
int main()
{
    int a [TAM];
    int b [TAM];
    int c [TAM*2];
    int i;
    
    printf("Dê os valores do vetor A. Um valor por vez\n");
    for (i=0; i<TAM; i++)
    {
        scanf("%i", &a[i]);
    }
    
    printf("Dê os valores do vetor B. Um valor por vez\n");
    for (i=0; i<TAM; i++)
    {
        scanf("%i", &b[i]);
    }
    
    for(i=0; i<TAM; i++)
    {
        c[i*2] = a[i];
    }
    
    for(i=0; i<TAM; i++)
    {
        c[i*2+1] = b[i];
    }
    
    exibe_vetor(a, TAM);
    exibe_vetor(b, TAM);
    exibe_vetor(c, TAM*2);
    
    return 0;
}

void exibe_vetor(int v[], int t)
{
    printf("\n\nOs valores do vetor são:\n");
    for(int i=0; i<t; i++)
    {
        printf("[%i]\t", v[i]);
    }
    
}

int busca_vetor (int x, int v[], int t);
void exibe_vetor (int v[], int t);

int Q4()
{
   int a [TAM];
   int i;
   int x;

    printf("Dê um valor entre 0 e 10.\n");
    scanf("%i", &x);
    
    if (x>=0 && x<=10)
    {
   srand(time(NULL)); 
   /*Habilita a função "rand" sempre produzir valores aleatórios, não valores aleatórios constantes*/
   
   for (i=0; i<TAM; i++)
   {
       a[i]=rand()%10;
   }
   
    exibe_vetor (a, TAM);
    busca_vetor (x, a, TAM);
    }
    
    else printf ("Erro!");
    return 0;
}

void exibe_vetor (int v[], int t)
{
    int i = 0;
    printf("Vetor Aleatório = [");
    while(i<t-1)
    {
        printf("%i,\t", v[i]);
        i++;
    }
    printf("%i]", v[i]);
}

int busca_vetor (int x, int v[], int t)
{
    int cont = 0;
    int i;
    
    for (i=0; i<t; i++)
    {
        if (x==v[i])
        {
            cont++;
        }
    }
    if (cont==0)
    {
        printf("\n\nValor não encontrado.");
    }
    else printf("\n\nO valor %i foi encontrado %i vez(es) no vetor aleatório.", x, cont);
    
    return 0;
}

int acima_valor (float v[], int t, float m);
float calcula_media (float v[], int t);
float maior_valor (float v[], int t);
float calcula_percentual (int f, int t);

int Q5 ()
{
    float a [TAM];
    int i;
    for(i=0; i<TAM; i++)
    {
        scanf("%f", &a[i]);
    }
    
    float y=calcula_media(a, TAM);
    printf("A média da turma é: %.2f.\n\n", y);
    int z = acima_valor(a, TAM, y);
    printf ("%i alunos ficaram com nota maior que a média.\n\n", z);
    printf("O percentual de alunos acima da média é: %.2f.\n\n", calcula_percentual(z, TAM));
    printf("A maior nota da turma foi %.2f\n\n", maior_valor(a, TAM));
    
    return 0;
}

float calcula_media (float v[], int t)
{
    float soma = 0;
    for(int i=0; i<t; i++)
    {
        soma = v[i] + soma;
    }
    float media = soma/t;
    return media;
}

int acima_valor (float v[], int t, float m)
{
    int i;
    int cont = 0;
    
    for (i=0; i<t; i++)
    {
        if ((v[i])>m)
        {
            cont++;
        }
    }
    
    return cont;
}

float calcula_percentual (int f, int t)
{
   float percent = (f*100)/t;
    
    return percent;
}

float maior_valor (float v[], int t)
{
    int j = 0;
    float maior = 0.0;
    
    while (j<t)
    {
        if (v[j]>maior)
        {
            maior = v[j];
        }
    j++;
    }
    
    return maior;
}




