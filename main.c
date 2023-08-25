#define aula3ex1

/*1 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
#ifdef aula1ex1
#include <stdio.h>
void main() {
    int segundos, minutos, horas;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("Isso e igual a %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);

    return;
}


#endif

/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
*/
#ifdef aula1ex2
#include <stdio.h>

void main() {
    short s;
    long l;
    int i;
    float f;
    double d;
    char c;

    printf("Digite um valor short: ");
    scanf("%hd", &s);

    printf("Digite um valor long: ");
    scanf("%ld", &l);

    printf("Digite um valor int: ");
    scanf("%d", &i);

    printf("Digite um valor float: ");
    scanf("%f", &f);

    printf("Digite um valor double: ");
    scanf("%lf", &d);

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("\n%10d%20ld%30d\n", s, l, i);
    printf("%40.2f%50.2lf%60c\n", f, d, c);

}

#endif

/*3 - Escreva um programa que permute o conte�do de duas vari�veis sem utilizar uma
    vari�vel auxiliar.*/
#ifdef aula1ex3
#include <stdio.h>

void main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Depois da troca:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return;
}

#endif

/*4 - Fa�a um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro n�mero formado pelos d�gitos invertidos do n�mero lido.
    Ex:   N�meroLido = 123
        N�meroGerado = 321*/
#ifdef aula1ex4
#include <stdio.h>

void main() {
    int numeroLido, numeroGerado;

    do {
        printf("Digite um numero inteiro positivo de tres digitos: ");
        scanf("%d", &numeroLido);
    } while (numeroLido < 100 || numeroLido > 999);

    numeroGerado = (numeroLido % 10) * 100 + ((numeroLido / 10) % 10) * 10 + (numeroLido / 100);

    printf("Numero Gerado: %d\n", numeroGerado);

    return;
}

#endif

/*5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
#ifdef aula1ex5
#include <stdio.h>

void main() {
    int numero, limite, menorMultiplo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Digite o limite minimo: ");
    scanf("%d", &limite);

    menorMultiplo = numero;

    while (menorMultiplo <= limite) {
        menorMultiplo += numero;
    }

    printf("Menor multiplo de %d maior que %d: %d\n", numero, limite, menorMultiplo);

    return;
}

#endif

#ifdef aula2ex1
#include <stdio.h>

void main() {
    int hora1, minuto1, segundo1, hora2, minuto2, segundo2;

    printf("Digite o primeiro instante (hh:mm:ss): ");
    scanf("%d:%d:%d", &hora1, &minuto1, &segundo1);

    printf("Digite o segundo instante (hh:mm:ss): ");
    scanf("%d:%d:%d", &hora2, &minuto2, &segundo2);

    int segundosTotais1 = hora1 * 3600 + minuto1 * 60 + segundo1;
    int segundosTotais2 = hora2 * 3600 + minuto2 * 60 + segundo2;

    int diferencaSegundos = segundosTotais2 - segundosTotais1;

    int hora, minuto, segundo;

    hora = diferencaSegundos / 3600;
    minuto = (diferencaSegundos % 3600) / 60;
    segundo = diferencaSegundos % 60;

    printf("Intervalo de tempo decorrido: %02d:%02d:%02d\n", hora, minuto, segundo);

    return;
}




#endif

#ifdef aula2ex2
#include <stdio.h>

void main() {
    char a;
    int num;

    num = 99;

    for (;;) {
        printf("Seu numero e %d? ", num);
        a = getchar();
        getchar();

        if (a == '=') {
            printf("O seu numero e %d\n", num);
            break;
        } else if (a == '<') {
            num /= 2;
        } else if (a == '>') {
            num += num / 2;
        } else {
            printf("Entrada invalida. Use '=', '<' ou '>'\n");
        }
    }

    return;
}

#endif

#ifdef aula2ex3
#include <stdio.h>

void main() {
    char a;
    int num, cont;

    num = 99;
    cont = 0;

    for (;;) {
        printf("Seu numero e %d? ", num);
        a = getchar();
        getchar();

        switch (a) {
            case '=':
                printf("O seu numero e %d\n", num);
                printf("Numero de tentativas: %d\n", cont);
                return;
            case '<':
                if (num % 2 != 0) {
                    num = (num / 2) + 1;
                } else {
                    num = num / 2;
                }
                break;
            case '>':
                if (num % 2 != 0) {
                    num = ((num + (num / 2)) + 1);
                } else {
                    num = (num + (num / 2));
                }
                break;
            default:
                printf("Entrada invalida. Use '=', '<' ou '>'\n");
        }

        cont++;
    }
}

#endif

#ifdef aula2ex4
main()
{

    /*4 - Receba via teclado a distancia em km e a quantidade de litros de gasolina
    consumidos por um carro em um percurso.
    Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela
    abaixo:
    CONSUMO (km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/

    float km, l, cons;

    printf("Digite a distancia ( KM ) percorrida pelo o carro! " );
    scanf("%f", &km);

     printf("Digite a quantidade de combustivel ( L ) consumidas pelo o carro no percurso! " );
    scanf("%f", &l);

    cons = km / l;


    if ( cons < 8 )
        {
            printf("Venda o carro!");
        }
    else
            if( cons > 14)
                {
                    printf("Super economico!");
                }
            else
                {
                    printf("Economico!");
                }

}

#endif

#ifdef aula2ex5

main()
{
    /*5 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados. */

    int num, cont, soma;
    float media;

    soma = 0;
    cont = 0;

    for(;;)
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if ( num < 0)
        {
            break;
        }
        else
        {
            soma = soma + num;
            cont = cont + 1;
        }
    }

    media = soma / cont;


    printf("A media dos numeros positivos e: %f", media);

}

#endif



#ifdef aula3ex1
#include <stdio.h>

int SomaFat(int x) {
    int i, fat = 1, soma = 0;

    for (i = 1; i <= x; i++) {
        fat = fat * i;
    }

    printf("\nO valor da Fatorial é: %d\n", fat);

    while (fat != 0) {
        soma += fat % 10;
        fat /= 10;
    }

    return soma;
}

void main() {
    int num, sf;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    sf = SomaFat(num);

    printf("\nA soma dos algarismos da fatorial do número digitado é: %d\n", sf);

    return;
}

#endif


#ifdef aula3ex2
#include <stdio.h>

int operar(float a, float b);

void main() {
    float num1, num2;

    printf("Insira um numero: \n");
    scanf("%f", &num1);
    printf("Insira outro numero: \n");
    scanf("%f", &num2);

    int resultado = operar(num1, num2);

    printf("Resultado: %d\n", resultado);

    return;
}

int operar(float a, float b) {
    if (a > 0 && b > 0) {
        int soma = 0;
        for (float i = a + 1; i < b; i++) {
            soma += i;
        }
        return soma;
    }
    else if (a < 0 && b < 0) {
        float multiplicacao = 1;
        for (float i = a + 1; i < b; i++) {
            multiplicacao *= i;
        }
        return (int)multiplicacao;
    }
    else {
        if (b != 0) {
            float divisao = a / b;
            return (int)divisao;
        }
        else {
            return -1;
        }
    }
}

#endif

#ifdef aula3ex3
#include <stdio.h>

int soma(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);

void main() {
    int a = 0, b = 5;

    printf("\nsoma %d ", soma(a, b));
    printf("\nsubtrair %d ", subtrair(a, b));
    printf("\nmultiplicar %d ", multiplicar(a, b));

    if (b != 0) {
        printf("\ndividir %d ", dividir(a, b));
    } else {
        printf("\nImpossível dividir por zero.");
    }

    return;
}

int soma(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}

#endif

#ifdef aula3ex4

#include <stdio.h>

int soma(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);

void main() {
    int n;
    printf("Quantos pares de números você deseja inserir? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b;
        printf("\nInsira o primeiro número: ");
        scanf("%d", &a);
        printf("Insira o segundo número: ");
        scanf("%d", &b);

        printf("\nResultado para o par %d:", i + 1);
        printf("\nSoma: %d ", soma(a, b));
        printf("\nSubtrair: %d ", subtrair(a, b));
        printf("\nMultiplicar: %d ", multiplicar(a, b));

        if (b != 0) {
            printf("\nDividir: %d ", dividir(a, b));
        } else {
            printf("\nImpossível dividir por zero.");
        }
    }

    return;
}

int soma(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}


#endif

#ifdef aula3ex5
#include <stdio.h>

float soma(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

void main() {
    int n, opera;
    float termo1, termo2;
    int existeResultado = 0;

    printf("Digite quantos números você deseja operar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &termo1);

        if (existeResultado == 1) {
            printf("Digite qual operação deseja realizar:\n");
            printf("1 - soma\n2 - subtração\n3 - multiplicação\n4 - divisão\n");
            scanf("%d", &opera);

            printf("Digite o %dº número: ", i + 1);
            scanf("%f", &termo2);

            switch (opera) {
                case 1:
                    termo1 = soma(termo1, termo2);
                    break;
                case 2:
                    termo1 = subtrair(termo1, termo2);
                    break;
                case 3:
                    termo1 = multiplicar(termo1, termo2);
                    break;
                case 4:
                    if (termo2 != 0) {
                        termo1 = dividir(termo1, termo2);
                    } else {
                        printf("Impossível dividir por zero.\n");
                    }
                    break;
                default:
                    printf("Operação inválida.\n");
                    break;
            }
        }
        existeResultado = 1;
    }

    printf("O resultado é %.2f\n", termo1);

    return;
}

float soma(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

#endif