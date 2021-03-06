/*                @Project: IFJ14
-----------------------------------------------------
  @Author: Marek Bielik   xbieli05@stud.fit.vutbr.cz
  @Author: Filip Gulan    xgulan00@stud.fit.vutbr.cz
  @Author: Filip Ježovica xjezov01@stud.fit.vutbr.cz
  @Author: Luboš Matuška  xmatus29@stud.fit.vutbr.cz
  @Author: Eduard Rybár   xrybar04@stud.fit.vutbr.cz
-----------------------------------------------------
*/

/*
 *Inkludovanie funkcii
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

/*
 *Deklaracia struktur a premennych
 */
typedef struct stack_elementS //1 element zasobniku
{
	struct stack_elementS *ptr_next; //ukazatel na dalsi prvok
	int data; //data ktore obsahuje
} *stack_element;

typedef struct //samotny zasobnik
{
	stack_element First; //ukazatel na prvy prvok zasobniku
} stack;

/*
 *Deklaracie funkcii
 */
void stack_init(stack *); //inicializacia zasobniku
void myPush(stack *, int); //pushnutie hodnoty na zasobnik
void myPushMul(stack *, int, ...); //pushnutie niekolkych hodnoty na zasobnik, poct je podla 2 argumentu
void myPop(stack *); //popnutie hodnoty zo zasobniku
int myTop(stack *); //precitaniestack *S hodnoty z vrchola zasobniku
void destroyStack(stack *); //zrusi vsetky prvky zoasobniku
void showStack(stack *); //funkcia na vypis celeho zasobniku pre testovacie ucely
