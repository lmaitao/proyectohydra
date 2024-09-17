#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>


typedef struct {
int ganados;
int perdidos;
int empatados;
} Estadistica;

 int random_number(int min_num, int max_num)
    {
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1; // include max_num in output
        } else {
            low_num = max_num + 1; // include max_num in output
            hi_num = min_num;
        }

        srand(time(NULL));
        result = (rand() % (hi_num - low_num)) + low_num;
        return result;
    }


 
void escribe(int color,int x, int y)

{

            gotoxy(x,y);

            textcolor(color);

//          printf("%s",cadena);

 

}
 

void ahorcado()

{

    char matriz[10][20]={"helicoptero","naranja","helice","jardinero","electricista","calendario","taladro","cometa","saltamontes","antena"};

 int plantilla[1][20],abc=0,x=37,y=21;

 char abecedario[34];
 
  char frase[20];

 int palabra,numpalabras=10,adivina,fallos,longpalabra,longadivina,salir;

 char repetir='s';

 int acierto; //Variable booleana: 1 significa que acert¢ una

                                                            // o m s letras, 0 que no

 int i,j;

 char letra[1];

 

 

 //////// PRESENTACION MENU PRINCIPAL

 ///////////////////////////////////////

 

 clrscr();

 printf("\n\t=======================================");

 printf("\n\t           JUEGO DEL AHORCADO");

 printf("\n\t=======================================");

 printf("");

 printf("\n\tInstrucciones: El ordenador pensar  una palabra y t£ tienes 10");

 printf("\n\tintentos para acertarla. En cada intento podr s elegir una letra.");

 printf("\n\tSi la palabra a adivinar la contiene, aparecer  en su corres-");

 printf("\n\tpondiente posici¢n. Sino, tendr s un intento menos.Hasta agotar");

 printf("\n\tlos 10. ­­­­BUENA SUERTE!!!");

 printf("\n\n");

 printf("\nPulsa una tecla para empezar...");

 getch();




             //Busca una palabra aleatoriamente

  do

  {
  	             clrscr();
  printf("\n Introduce palabra  a adivinar =  "); scanf("%s",frase);
strcpy (matriz[0],frase);
strcpy (matriz[1],frase);
strcpy (matriz[2],frase);
strcpy (matriz[3],frase);
strcpy (matriz[4],frase);
strcpy (matriz[5],frase);
strcpy (matriz[6],frase);
strcpy (matriz[7],frase);
strcpy (matriz[8],frase);
strcpy (matriz[9],frase);

             clrscr();

             acierto=-1;

             fallos=0;

             longpalabra=0;

             longadivina=0;

             salir=0;

             adivina=random_number(0,9);

            for(i=0;i<strlen(matriz[adivina]);i++)
           

             {

                        plantilla[1][i]=0;

                        longpalabra++;

             }

             plantilla[1][i]='\0';

//          gotoxy(12,13);

             escribe(15,12,13);

             cprintf("Palabra a adivinar: ");

 

             //Presentamos la linea inicial punteada con tantos espacios como letras
            for(i=0;i<strlen(matriz[adivina]);i++)
    

             {

                        printf(" _ ");

 

             }

                        do

                        {

                                   //gotoxy(10,15);

                                   escribe(15,10,15);

                                   cprintf("Introduce una letra: "); scanf("%c",&letra);

                                   //gotoxy(12,13);

                                   escribe(15,12,13);

                                   cprintf("Palabra a adivinar: ");
                                               for(i=0;i<strlen(matriz[adivina]);i++)

                                   {

                                               if (matriz[adivina][i]==letra[0])

                                               {

                                                           plantilla[1][i]=1;

                                                           printf(" %c ",matriz[adivina][i]);

                                                           acierto=1;
                                                           
                                                           fallos-=1;
                                                           

                                               }

                                               else

                                               {       

                                                           if (plantilla[1][i]==1)

                                                           {

                                                                       printf(" %c ",matriz[adivina][i]);   

                                                           }

                                                           else

                                                           {

                                                                       printf(" _ ");   

                                                           }

                                               }

                                   }

                                   //gotoxy(21,21);

                                   escribe(15,21,21);

                                   cprintf("Letras cogidas: ");

                                   abecedario[abc]=letra[0];

                                   x++;

                                   //gotoxy(x,y);

                                   escribe(15,x,y);

                                   printf("%c",abecedario[abc]);

                                   abc++;

                                   if (acierto==0)

                                   {

                                               fallos++;

                                               switch (fallos)

                                               {

                                                           case 1:

                                                                       escribe(6,5,9);

                                                                       cprintf("___________");
                                                                       
                                                                       acierto = -1;

                                                           break;

                                                           case 2:

                                                                       escribe(6,5,8);

                                                                       cprintf("|");

                                                                       escribe(6,5,7);

                                                                       cprintf("|");

                                                                       escribe(6,5,6);

                                                                       cprintf("|");

                                                                       escribe(6,5,5);

                                                                       cprintf("|");

                                                                       escribe(6,5,4);

                                                                       cprintf("|");

                                                                       escribe(6,5,3);

                                                                       cprintf("|");

                                                                       escribe(6,5,2);

                                                                       cprintf("|");
                                                                       acierto = -1;
                                                           break;

                                                           case 3:

                                                                       //gotoxy(5,1);

                                                                       escribe(6,5,1);

                                                                       cprintf("__________");  acierto = -1;

                                                           break;

                                                           case 4:

                                                                       //gotoxy(11,2);

                                                                       escribe(6,11,2);

                                                                       cprintf("|");  acierto = -1;

                                                           break;

                                                           case 5:

                                                                       //gotoxy(11,3);

                                                                       escribe(11,11,3);

                                                                       cprintf("0");  acierto = -1;

                                                           break;

                                                           case 6:

                                                                       //gotoxy(9,4);

                                                                       escribe(11,9,4);

                                                                       cprintf("--+--");  acierto = -1;

                                                           break;

                                                           case 7:

                                                                       //gotoxy(11,5);

                                                                       escribe(11,11,5);

                                                                       cprintf("|");  acierto = -1;

                                                           break;

                                                           case 8:

                                                                       //gotoxy(10,6);

                                                                       escribe(11,10,6);

                                                                       cprintf("/");  acierto = -1;

                                                           break;

                                                           case 9:

                                                                       //gotoxy(12,6);

                                                                       escribe(11,12,6);

                                                                       cprintf("\\");  acierto = -1;

                                                           break;

                                               }

                                   }

                                   longadivina=0;

                                   for (j=0;plantilla[1][j]!='\0';j++)

                                   {

                                               if (plantilla[1][j]==1)

                                                           longadivina=longadivina+plantilla[1][j];

                                   }

                                   acierto=0;

                                   if (fallos==9)

                                               salir=1;

                                   if (longadivina==longpalabra)

                                               salir=1;

                        }

                        while (salir==0);

                        if (fallos==9)

                        {

                                   gotoxy(35,5);

                                   printf("LO SIENTO...... No acertaste.");

                                   gotoxy(35,7);

                                   printf("La palabra era ");puts(matriz[adivina]);

                                   gotoxy(35,9);

                                   printf("¨Quieres intentarlo otra vez?(s/n) ");

                                   repetir=getch();

                        }

                        else

                        {

                                   gotoxy(35,5);

                                   printf("­­­FELICIDADES!!! Acertaste!!");

                                   gotoxy(35,7);

                                   printf("¨Quieres intentarlo otra vez?(s/n) ");

                                   repetir=getch();

                        }

            }

            while (repetir=='s');

}



void piedra(){
	
int jug, maq, op, r, rondas;
char nombre1[20];
char nombre2[20];
char jugada[20];
char jugada2[20];
int contador =0;
Estadistica resultados[2];
char op3;

do
{
contador=0;

    printf("\n Bienvenido \n");
    printf("\n Alumno Luis Maita \n");
    printf("\n Proyecto Final Hydra\n");
    printf("\n");
    system("PAUSE");
	system("cls");

printf("\n Hola, jugaremos pidra, papel o tijera \n");

printf("\n Introduzca nombre jugador 1 : ");
scanf("%s", nombre1);

resultados[0].perdidos = 0;
resultados[0].ganados = 0;
resultados[0].empatados = 0;


printf("\n Introduzca nombre jugador 2 : ");
scanf("%s", nombre2);
resultados[1].perdidos = 0;
resultados[1].ganados = 0;
resultados[1].empatados = 0;
printf("\n");
system("PAUSE");
system("cls");

printf("\n Introduzca numero de rondas a jugar: ");
scanf("%d", &rondas);
system("PAUSE");
system("cls");

do{

contador ++;

printf("\n Ronda del Juego # %d ", contador);

printf("\n Introduzca seleccion jugador 1(%s) = ", nombre1);
scanf("%s", jugada);

system("PAUSE");
system("cls");

if (strcmp(strlwr(jugada), "piedra") ==0) { jug = 0;}
else if (strcmp(strlwr(jugada), "papel") ==0) { jug = 1;}
else if (strcmp(strlwr(jugada), "tijera") ==0) { jug = 2;}


printf("\n Introduzca seleccion jugador 2(%s) =  ", nombre2);
scanf("%s", jugada2);

if (strcmp(strlwr(jugada2), "piedra") ==0) { r = 0;}
else if (strcmp(strlwr(jugada2), "papel") ==0) { r = 1;}
else if (strcmp(strlwr(jugada2), "tijera") ==0) { r = 2;}
system("PAUSE");
system("cls");


switch (jug)
{
case 0:
printf("%s  eligio Piedra\n", nombre1);
printf("\n");
printf("      **********              \n");
printf("     ************             \n");
printf("    ***************           \n");
printf("   *****************          \n");
printf("    ***************           \n");
printf("     *************            \n");
printf("      ***********             \n");
printf("       *********              \n");
printf("        *******               \n");
printf("         *****                \n");
printf("\n");

    if (r==0)
    {
     	printf("\t %s eligio Piedra\n\n", nombre2);
printf("\n");
printf("      **********              \n");
printf("     ************             \n");
printf("    ***************           \n");
printf("   *****************          \n");
printf("    ***************           \n");
printf("     *************            \n");
printf("      ***********             \n");
printf("       *********              \n");
printf("        *******               \n");
printf("         *****                \n");
printf("\n");

        printf("\t\t\tEmpate en la ronda \n\n\n");

        resultados[0].empatados += 1;
        resultados[1].empatados += 1;

    }
 else
    {
     if (r==1)
     {
       	printf("\t %s eligio Papel\n\n", nombre2);
printf("\n");
printf("   *******************        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *******************        \n");
printf("\n");
        printf("\t\t\t %s Gana la ronda \n\n\n", nombre2);

        resultados[1].ganados += 1;
        resultados[0].perdidos += 1;

     }
     else
    {
     if (r==2)
     {
     	printf("\t %s eligio Tijera \n\n", nombre2);
printf("\n");
printf("                 *            \n");
printf("                *             \n");
printf("               *              \n");
printf("    ***       *               \n");
printf("   * * * *************        \n");
printf("    ***     *                 \n");
printf("           *                  \n");
printf("         ***                  \n");
printf("        * * *                 \n");
printf("         ***                  \n");
printf("\n");
        printf("\t\t\t %s Gana la ronda \n\n\n", nombre1);
            resultados[0].ganados += 1;
        resultados[1].perdidos += 1;

	 }

    }
  }
break;
case 1:
printf("%s  eligio Papel \n", nombre1);
printf("\n");
printf("   *******************        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *******************        \n");
printf("\n");
        if (r==0)
        {

     	printf("\t %s eligio Piedra \n\n", nombre2);
printf("\n");
printf("      **********              \n");
printf("     ************             \n");
printf("    ***************           \n");
printf("   *****************          \n");
printf("    ***************           \n");
printf("     *************            \n");
printf("      ***********             \n");
printf("       *********              \n");
printf("        *******               \n");
printf("         *****                \n");
printf("\n");
        printf("\t\t\t %s Gana la ronda \n\n\n", nombre1);

        resultados[0].ganados += 1;
        resultados[1].perdidos += 1;

        }
        else
        {
            if (r==1)
            {

         	printf("\t %s eligio Papel\n\n", nombre2);
printf("\n");
printf("   *******************        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *******************        \n");
printf("\n");
            printf("\t\t\tEmpate en la ronda \n\n\n");
        resultados[0].empatados += 1;
        resultados[1].empatados += 1;

            }
            else
            {
                if (r==2)
                {

     	printf("\t %s eligio Tijera \n\n", nombre2);
printf("\n");
printf("                 *            \n");
printf("                *             \n");
printf("               *              \n");
printf("    ***       *               \n");
printf("   * * * *************        \n");
printf("    ***     *                 \n");
printf("           *                  \n");
printf("         ***                  \n");
printf("        * * *                 \n");
printf("         ***                  \n");
printf("\n");
        printf("\t\t\t %s Gana la ronda \n\n\n", nombre2);
        resultados[1].ganados += 1;
        resultados[0].perdidos += 1;

                }
            }
        }
break;
case 2 :
printf("%s  eligio Tijera \n", nombre1);
printf("\n");
printf("                 *            \n");
printf("                *             \n");
printf("               *              \n");
printf("    ***       *               \n");
printf("   * * * *************        \n");
printf("    ***     *                 \n");
printf("           *                  \n");
printf("         ***                  \n");
printf("        * * *                 \n");
printf("         ***                  \n");
printf("\n");
          if (r==0)
          {
     	printf("\t %s eligio Piedra \n\n", nombre2);
printf("\n");
printf("      **********              \n");
printf("     ************             \n");
printf("    ***************           \n");
printf("   *****************          \n");
printf("    ***************           \n");
printf("     *************            \n");
printf("      ***********             \n");
printf("       *********              \n");
printf("        *******               \n");
printf("         *****                \n");
printf("\n");
        printf("\t\t\t %s Gana la ronda \n\n\n", nombre2);
                resultados[1].ganados += 1;
                resultados[0].perdidos += 1;
          }
          else
          {
              if (r==1)
              {
       	printf("\t %s eligio Papel \n\n", nombre2);
printf("\n");
printf("   *******************        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *                 *        \n");
printf("   *******************        \n");
printf("\n");
        printf("\t\t\t %s Gana la ronda \n\n\n", nombre1);
                resultados[0].ganados += 1;
        resultados[1].perdidos += 1;
              }
              else
              {
                  if (r==2)
                  {
       	printf("\t %s eligio Tijera\n\n", nombre2);
printf("\n");
printf("                 *            \n");
printf("                *             \n");
printf("               *              \n");
printf("    ***       *               \n");
printf("   * * * *************        \n");
printf("    ***     *                 \n");
printf("           *                  \n");
printf("         ***                  \n");
printf("        * * *                 \n");
printf("         ***                  \n");
printf("\n");
            printf("\t\t\tEmpate en la ronda \n\n\n");

        resultados[0].empatados += 1;
        resultados[1].empatados += 1;

                  }
              }
          }
          break;
default:
    printf("Por favor solo introduce los numeros que aparecen en el menu");
}

if (contador < rondas ) {
printf("Quieres jugar la siguiente ronda?\n");
printf("Si deseas continuar  jugando presiona 1\n");
printf("Si deseas salir del juego presiona 2\n");
scanf("%d", &op);
system("PAUSE");
system("cls");


}




if (contador == rondas ) break;


}
while( (op != 2));


printf("\n Resultados \n");
printf("\n jugador %s - ganados = %d  - perdidos =  %d  - empatados = %d\n", nombre1, resultados[0].ganados, resultados[0].perdidos, resultados[0].empatados);
printf("\n jugador %s - ganados = %d  - perdidos =  %d  - empatados = %d\n", nombre2, resultados[1].ganados, resultados[1].perdidos, resultados[1].empatados);


printf("\n Ok, hasta luego, regresa pronto \n");
getch();
system("PAUSE");
system("cls");
printf("\n Desea Jugar Nuevamente ? (S/N) \n");

op3 = getch();

} while(op3 != 'n');




	
}


int main(){
	
	char opcion = '0';
	
	
	
do {
   do{
		
		 clrscr();

	printf("-------- Menu Principal ------\n\n");
	
	printf(" 1 - Piedra, Papel y Tijera \n");
	printf(" 2 - Ahorcado \n");
	printf(" 3 - Salir \n\n");
	
	printf(" Seleccione Opcion = ");
    opcion = getch();
	printf("%c \n",opcion); 
    


	} while ( (opcion != '3') && (opcion != '2') && (opcion != '1'));
	
	
	if (opcion == '1') { clrscr(); piedra();	}
	else 	if (opcion == '2'){ clrscr(); ahorcado();	}
	else 	if (opcion == '3') { clrscr(); printf("Salir de la aplicacion \n ");}
	
} while (opcion != '3');

	
}
