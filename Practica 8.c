#include <stdio.h>
#include <stdlib.h>


int exp_for(int a, int b)
{
    int res = 1;
    int i;

    for(i = 0; i < b; i++)
    {
        res = res * a;
    }

    return(res);
}

int exp_while(int a, int b)
{
    int res = 1;
    int i = 0;

    while(i < b)
    {
        res = res * a;
        i = i + 1;
    }

    return(res);
}

int main()
{
    int a, b, res;
    
    printf("Dame la base: ");
    scanf("%d", &a);
    printf("Dame el exponente: ");
    scanf("%d", &b);

    printf("\n Exponenciacion con for");
    res = exp_for(a, b);
    printf("El resultado es: %d\n", res);

    printf("\n Exponenciacion con for");
    res = exp_while(a, b);
    printf("El resultado es: %d\n", res);

    return 0;
}
Ejercicio 2
Tablas de multiplicar
#include <stdio.h>
#include <stdlib.h>

void mult_for(int n);
void mult_for(int n)
{
  int resp;

  for(i = 1; i <= 10; i++)
  for(int i = 1; i <= 10; i++)
  {
    resp = n * i;
    printf("%d * %d = %d\n", n, i, resp);
  }
  return 0;
  //return 0;
}

void main()
void mult_while(int n)
{
  int n;
    int resp;
    int i = 1;
    while (i <= 10)
    {
        resp = n * i;
        printf("%d * %d = %d\n", n, i, resp);
        i = i + 1;
    }
    
}
void mult_dowhile(int n)
{
    int resp;
    int i = 1;
    do
    {
        resp = n * i;
        printf("%d * %d = %d\n", n, i, resp);
        i = i + 1;
    } while (i <= 10);
    
}
int main()
{
    int n;

  printf("Dame el numero de la tabla a multiplicar: ");
  scanf("%d", n);
    printf("Dame el numero de la tabla a multiplicar: ");
    scanf("%d", &n);
    printf("\n\n\n");
    printf("Utilizacion del for\n");
    mult_for(n);
    printf("\n\n\n");
    printf("Utilizacion del while\n");
    mult_while(n);
    
    printf("\n\n\n");
    printf("Utilizacion del do-while\n");
    mult_dowhile(n);

  multi_for(n);
  return 0;
    return 0;
}
