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
 *Inkludovanie funkcii, ktore budeme pouzivat
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdarg.h>

/*
 *Define na eliminovanie magickych konstant
 */

/*
 *Deklaracia struktur a premennych
 */

typedef struct elementSTrash //struktura, ktora je prvok zoznamu
{
	struct elementSTrash *rptr;
	struct elementSTrash *lptr;
	void *adresa;
} *trash_element;

typedef struct trashSTrash //struktura, ktora je zoznam
{
	trash_element Act;
	trash_element First;
	trash_element Last;
} trash;

extern trash TrashX;

/*
 *Deklaracia funkcii
 */
void trashInit();
void addToBin(void *);
void myfree(void *);
void trashDestroy(int);
void emptyMem(void *);
void *mymalloc(long long int);
void *myrealloc(void *,long long int);
 
