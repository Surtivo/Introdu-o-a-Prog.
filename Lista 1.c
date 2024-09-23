/******************************************************************************

Fiz todas as questões pelo GDB online, o site que o senhor usa em suas aulas.
Por conta disso não sei como vão rodar no computador e se os arquivos irão abrir corretamente.
Em todos os testes que fiz, eles abriram corretamente pelo site.

Site: https://www.onlinegdb.com

*******************************************************************************/

int Q1 ()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a>0 && b>0 && c>0)
    {
      if (a+b>c && b+c>a && a+c>b)
      {
          if (a==b && b==c) printf("É um triângulo equilátero, todos os lados são iguais.");
          if (a==b && a!=c || b==c && b!=a || a==c && a!=b) printf("É um triângulo isósceles, tem apenas 2 lados iguais.");
          if (a!=b && b!=c && a!=c) printf("É um triângulo escaleno, nenhum lado é igual.");
      }
      else printf("Não é um triângulo!");
    }
    else printf("As medidas precisam ser positivas!");
    return 0;
}

int Q2()
{
    printf("Informe o lado do quadrado\n");
    int lado, i=0, j=0;
    scanf("%d", &lado);
    printf("\n");
    while (i<lado) 
    {
        j=0;
        while (j<lado-1)
        {
            printf("*");
            j++;
        }
    printf("*\n");
    i=i+1;
    }
    return 0;
}

int Q3()
{
    printf("Informe o lado do quadrado\n");
    int lado, i, j, aux;
    scanf("%d", &lado);
    printf("\n");
    aux=lado-2;
    
    for (i=0;i<lado;i++)
    printf("*");
    for (j=0;j<aux;j++)
    {
        printf("\n*");
            for(i=0; i<aux;i++)
            printf(" ");
            for(i=0; i<1;i++)
            printf("*");
    }
    printf("\n");
    for (i=0;i<lado;i++)
    printf("*");
    
    return 0;
}

int Q4()
{
    int n, multi=1;
    scanf("%d", &n);
    if (n<0)
    {
        printf("Somente números positivos!");
    }
    else
    {
      while(n>1)
      {
          multi=multi*n;
          n=n-1;
          
      }
      printf("%d", multi);
      
    }
    
 return 0;   
}

int Q5()
{
    printf("Forneça um número ");
    int k, n=1, s=0;
    scanf("%d", &k);
    while(n<=k)
    {
        s=s+((2*n)-1);
        n++;
    }
    printf("\n O somatório é igual a %d", s);
    
    return 0;
}

int Q6()
{
int k, ult=1, penult=1, count, term;
scanf("%d", &k);
if(k>2)
{
    printf("\n1\n1\n");
   count=3;
   while(count<=k)
   {
        term=ult+penult;
        penult=ult;
        ult=term;
        printf("%d\n", term);
        count++;
   }
}

    return 0;
}
/*Estou considerando o sexto número da sequência de Fibonacci ser 8 e não 13 como diz o enunciado.*/


int Q7() //Não estou contando o 0;
{  
int a,b, c;
scanf("%d %d %d", &a, &b, &c);
printf("\n");
if (a>b)
{
    while (a>=b)
    {
        if(b%c==0) printf("%d\n", b);
    b++;
    }
}
else
{
    while (a<=b)
    {
        if(a%c==0) printf("%d\n", a);
    a++;
    }
}
    return 0;
}

int Q8()
{
    printf("Digite um número \n");
    int k, n=2;
    scanf("%d", &k);
    if(k==2 || k==3 || k==5 || k==7)
    {
        printf("%d é primo!", k);
    }
    else
    {
        {
            if (k%n==0)
            {
                printf("%d não é primo!", k);
            }
            else
            {
                if (k%2==0 || k%3==0 || k%5==0 || k%7==0)
                {
                    printf("%d não é primo!", k);
                }
                else printf("%d é primo!", k);
            }
        }
    }
}
