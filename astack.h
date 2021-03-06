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

/*
 *Deklaracia struktur a premennych
 */
typedef struct astack_elementS //1 element zasobniku
{
	struct astack_elementS *ptr_next; //ukazatel na dalsi prvok
	void *adresa;
} *astack_element;

typedef struct //samotny zasobnik
{
	astack_element First; //ukazatel na prvy prvok zasobniku
	astack_element Second; //ukazatel na druhy prvok
} astack;

extern astack FRAME; // globalny zasobnik TABULIEK SYMBOLOV

/*
 *Deklaracie funkcii
 */
void astack_init(astack *);
void myaPush(astack *, void *);
void myaPop(astack *);
void *myaTop(astack *);
void *myaSecTop(astack *);
void destroyaStack(astack *);
