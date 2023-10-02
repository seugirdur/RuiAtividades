#include <stdio.h>
#define Ex42

#ifdef Ex4.1



int main()
{

    /* 1 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um tera´ as componentes de ordem impar
    e o outro tera´ as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 9}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3, 9}. */

    int a[10];
    int b [5];
    int c [5];
    int i;
    int bi = 0;
    int ci = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o Valor do Indice %d: \n", i+1);
        scanf("%d", &a[i]);

        if( i % 2 == 0)
        {
           c [ci] = a [i];
           ci++;
        }
        else
        {
            b [bi] = a [i];
            bi++;
        }

    }

     printf ("O Vetor A e: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
     printf ("O vetor B Composto dos Indices Pares e: %d  %d  %d  %d  %d \n", b[0], b[1], b[2], b[3], b[4]);
     printf ("O vetor C Composto dos Indices Impares e: %d  %d  %d  %d  %d \n", c[0], c[1], c[2], c[3], c[4]);

}

#endif // Ex4.1


#ifdef Ex42

main()
{
    /* 2 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um tera´ as componentes de valor impar
    e o outro tera´ as componentes de valor par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 4} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2, 4}.  */

    int a[10];
    int b [10];
    int c [10];
    int i;
    int bi = 0;
    int ci = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o Valor do Indice %d: \n", i+1);
        scanf("%d", &a[i]);

        if( a[i] % 2 == 0)
        {
           c [ci] = a [i];
           ci++;

        }
        else
        {
            b [bi] = a [i];
            bi++;
        }


    }

    printf ("O Vetor A e: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);

    for ( i = 0; i < ci; i++)
        {
            if ( i = 0)
            {
               printf("O Vetor C ( Pares ) e: %d", c [ci]);
            }
            else
            {
               if ( i = ci - 1)
               {
                    printf (", %d.\n", c [ci]);
               }

                else
                {
                    printf (", %d", c [ci]);
                }

            }
        }


    for ( i = 0; i < bi; i++)
    {
            if ( i = 0)
            {
                printf("O Vetor B ( Impares ) e: %d", b [bi]);
            }
            else
            {
                if ( i = bi - 1)
               {
                    printf (", %d.\n", b [bi]);
               }
                else
                {
                    printf (", %d", b [bi]);
                }

            }
    }


}





#endif // Ex42

