#include<stdio.h>
#include<math.h>

float perimetro(float raio);
float area(float raio);
float main(float raio)
{
    printf("Forneça o valor do raio ");
    scanf("%f", &raio);
    printf("\n A área é igual a %.2f", area(raio));
    printf("\n O perímetro é igual a %.2f", perimetro(raio));
    
    return 0;
}

float area(float raio)
{
    float area = 3.14*pow(raio,2);
    return area;
}

float perimetro(float raio)
{
    float perimetro = 2*3.14*raio;
    return perimetro;
}

float fahrenheit(float C);
float kelvin(float C);
int main(int a, int b)
{
    printf("Forneça duas temperaturas em Celsius ");
    scanf("%d %d", &a, &b);
    if (a<b)
    {
        float c = (float)a * 1.0;
        while (c<=b)
        {
            printf("\n Celsius %.2f  ||  Fahrenheit %.2f  ||  Kelvin %.2f",c, fahrenheit(c), kelvin(c));
            c = c + 0.5;
        }
    }
    if (b<a)
    {
        float c = (float)b * 1.0;
        while (c<=a)
        {
            printf("\n Celsius %.2f  ||  Fahrenheit %.2f  ||  Kelvin %.2f",c, fahrenheit(c), kelvin(c));
            c = c + 0.5;
        }
    }
    

    return 0;
}

float fahrenheit(float c)
{
    float f = c*1.8+32;
    return f;
}

float kelvin(float c)
{
    float k = c+273;
    return k;
}

float pesoideal(float a, char s);
float main (float t, float p, char g)
{
    printf("Informe altura, peso e sexo, respectivamente.\n");
    t=1.0;
    while (t>0)   
    {
        scanf("%f %f %c", &t, &p, &g);
        printf("\nO peso ideal é %.2f.", pesoideal(t, g));
        if (p>pesoideal(t,g))
        {
            printf("\nEstá acima do peso ideal.");
        }
        else printf("\nNão está acima do peso ideal.");
    }
    
    return 0;
}

float pesoideal(float a, char s)
{
    if (s == 'M' || s == 'm')
    {
        float pesoideal = 72.7 * a - 58;
        return pesoideal;
    }
    if (s == 'F' || s == 'f')
    {
        float pesoideal = 62.1 * a - 44.72;
        return pesoideal;
    }
    else return 0;
}

float calcValor(float preco, int quant);
int main(float preco, int quant)
{
    preco = 1;
    printf("Informe o valor da passagem e a quantidade desejada.\n");
    while (preco>0)
    {
    scanf("\n%f %d", &preco, &quant);
    printf("O valor total é R$:%.2f\n", calcValor(preco, quant));
    }
    return 0;
}

float calcValor(float preco, int quant)
{
    float vt = preco*quant;
    if (quant>=2 && quant<=4)
    {
       float desc = vt*0.05;
        vt= vt-desc;
        return vt;
    }
    if (quant>=5 && quant<8)
    {
        float desc = vt*0.1;
        vt = vt-desc;
        return vt;
    }
    if (quant>=8)
    {
        float desc = vt*0.2;
        vt = vt-desc;
        return vt;
    }
}
