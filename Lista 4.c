#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void mostra (char v[]);

int Q1 ()
{
    srand(time(NULL));
    int valor;
    int i=0;
    char a[10];
    int valores[10] = {0};
    
    printf("Dê 10 caracteres. Escreva-os juntos e sem espaço. ");
    scanf("%s", a);

    char b[10];
    
    while (i<10) 
    {
        valor = (rand()%10+1);
        
        if (valor!=valores[0]&&valor!=valores[1]&&valor!=valores[2]&&valor!=valores[3]&&valor!=valores[4]&&valor!=valores[5]&&valor!=valores[6]&&valor!=valores[7]&&valor!=valores[8])
        {
            valores[i]=valor;
            i++;
        }
    }
    
    for(int k=0; k<10; k++)
    {
        b[valores[k]-1]=a[k];
    }
    
    printf("\n");
    mostra (a);
    printf("\n\n");
    mostra (b);
    
    return 0;
}
void mostra (char v[])
{
        for(int k=0; k<10; k++)
    {
        printf("[%c]", v[k]);
    }
}

void exibe_mat (int v[7][7]);
int Q2 ()
{
    int mat [7][7] = {0};

    
    int dado2;
    int dado1;
    srand(time(NULL));
    
    for(int k=0; k<36000; k++)
    {
        dado1 = (rand()%6)+1;
        dado2 = (rand()%6)+1;
        
        mat[dado1][dado2]++;
    }
    
exibe_mat(mat);
    
    return 0;
}


void exibe_mat (int v[7][7])
{
    v[0][0];
    for (int i=1; i<7; i++)
    {
        v[0][i]=i;
    }

    for (int i=1; i<7; i++)
    {
        v[i][0]=i;
    }


    for (int i=0; i<7; i++)
    {
        printf("\n");
        for(int j=0; j<7; j++)
        {
            printf("%i\t", v[i][j]);
        }
    }
}


//Extremamente duvidoso oq vem abaixo;
int strcounta (char *s);
int lastindexstr (char *s, char c);
int stricmp (char *s1, char *s2);
void viramas (char *s);
int convert (char *);

int Q3 ()
{
    char st [10];
    char sb [10];
    char in;
    
    scanf("%s", st);
    scanf("%s", sb);
    scanf("%c", &in);
    printf("Escolha um caractere.\n");
    scanf("%c", &in);
    
    
    printf("\nO número de caracteres alfabeticos da primeira string é: %d\t", strcounta(st));
    printf("\nO último índice em que [%c] foi encontrado na primeira string é: %d", in, lastindexstr(st, in));
    printf("\nAs strings são iguais se o número entre colchetes for 1, caso contrário ele será 0 [%d]", stricmp(st, sb));
    printf("result: %d\nCaso seja 0, a string contém caracter.\n\n", convert(st));
    
    
    
    return 0;
}

int strcounta (char *s)
{
    int count = 0;
    while (*s != '\0')
    {
        if(*s>=97 && *s<=122)
        {
            count++;
        }
        if(*s>=65 && *s<=90)
        {
            count++;
        }
        s++;
    }
    return count;
}

int lastindexstr (char *s, char c)
{
    int i=0;
    int ind;
    while (i<10)
    {
        if(s[i-1]==c)
        {
            ind=i;
        }
        i++;
    }
    if (ind!=0)
    {
        return ind;
    }
    else return -1;
}

void viramas (char *s)
{
   while (*s != '\0')
    {
        if (*s>='a' && *s<='z')
        {
            *s-=32;
        }
        ++s;
    }  
}

int stricmp (char *s1, char *s2)
{
    int po = 1;
    if (*s1>='a' && *s1<='z')
        {
            viramas(s1);
        }
    if (*s2>='a' && *s2<='z')
        {
            viramas(s2);
        }
    while (*s1 != '\0')
    {
        if (*s1==*s2)
        {
            ++s1;
            ++s2;
            continue;
        }
        else 
        {
            po = 0;
            break;
        }
    }
    while (*s2 != '\0')
    {
        if (*s1==*s2)
        {
            ++s1;
            ++s2;
            continue;
        }
        else 
        {
            po = 0;
            break;
        }
    }
    if (po==1)
    {
        return po;
    }
    else return po;
}

int convert (char *s)
{
   
    int inte = 0;
    int tam = 0;
    int result = 0;
    int sinal = 3;
    
    while (*s != '\0')
    {
        tam++;
        s++;
    }
    printf("\ntam é: %d\n\n", tam);
    
    
    for (int i = 0; i<tam; i++)
        s--;
        
    if (s[0] == '-')
        {
            sinal = 1;
            s++;
        }
    
    else if (s[0] == '+')
        {
            sinal = 0;
            s++;
        }
    
    else if(s[0]>= '0' && s[0]<= '9')
        sinal=2;
        
    else
        return 0;
    
    while (*s != '\0')
    {
        if (*s < '0' || *s > '9')
            return 0;
        s++;
    }
    
    if(sinal == 0 || sinal == 1)
    {
        for (int i = 1; i<tam; i++)
            s--;
    }
    else if (sinal == 2)
    {
        for (int i = 0; i<tam; i++)
            s--;
    }
    else
    {
        printf("?\n");
        return 0;
        
    }
    
    printf("%c\n", *s);            //Aquiiiiiiiiiiiiiii
    printf("sinal %d\n\n", sinal); //Aquiiiiiiiiiiiiiii
    
    
    int val [tam];

    if(sinal == 2){        
    while (inte<tam)
    {
        while (*s != '\0')
        {
            val[inte] = (*s-48);
            inte++;
            s++;
        }
    }
        inte = 0;
    int pe = 0;
    int te = tam;
    
    printf("O vetor val é:\n");
    for (int j=0; j<tam; j++)
        printf("[%d]\t", val[j]);
    
    while (pe<tam-1)
    {
        while (te>1)
        {
            result += val[pe]*(pow(10, te-1));
            pe++;
            te--;
        }
    }
    
    if (te == 1)
        {
            result += val[pe];
        }

    printf("\n\n");
    return result;
    }
    
    if(sinal == 0 || sinal == 1){        
    while (inte<tam-1)
    {
        while (*s != '\0')
        {
            val[inte] = (*s-48);
            inte++;
            s++;
        }
    }
    
    inte = 0;
    int pe = 0;
    int te = tam-1;
    
    printf("O vetor val é:\n");
    for (int j=0; j<tam-1; j++)
        printf("[%d]\t", val[j]);
    
    while (pe<tam-1-1)
    {
        while (te>1)
        {
            result += val[pe]*(pow(10, te-1));
            pe++;
            te--;
        }
    }
    
    if (te == 1)
        {
            result += val[pe];
        }

    printf("\n\n");
    if (sinal == 1)
        return result-result-result;
    else
        return result;
    }
}
