/*                @Project: IFJ14
-----------------------------------------------------
  @Author: Marek Bielik   xbieli05@stud.fit.vutbr.cz
  @Author: Filip Gulan    xgulan00@stud.fit.vutbr.cz
  @Author: Filip Ježovica xjezov01@stud.fit.vutbr.cz
  @Author: Luboš Matuška  xmatus29@stud.fit.vutbr.cz
  @Author: Eduard Rybár   xrybar04@stud.fit.vutbr.cz
-----------------------------------------------------
*/



/* PREMENNE */
stack S; //zasobnik
tToken actToken; // aktualny token


typedef enum {
  GLOBAL,
  LOCAL
} tScope;

typedef enum {
  G_VAR_DEC,        //kontext deklaracii glob. premennych
  L_VAR_DEC,        //kontext deklaracie lok. premennych
  FUNCTION_DEC,     //kontext deklaracii funkci
  FUNC_ARG_DEC,      //kontext deklaracii argumentov funkcie
  FUNC_TYPE_DEC,     //kontext deklaracie navratoveho typu funkcie
  
  RET_VAL_CHECK          //kontext typovej kontroly navratovej hodnoty funkcie
} tContext;

typedef struct {   //struktura nesie aktualny semanticky kontext a jeho atributy
  tScope scope;
  tContext context;  //aktualny kontext
  tStav act_type;    //typ aktualneho id
  char *act_id;      //aktualne id premennej
  char *act_fun;     //aktualne id funkcie
  char *l_id;        //id lavej strany priradenia
  char *c_fun;       //id volanej funkcie
} tSem_context;
   
typedef enum {   //priznaky pre ulozenie aktualneho tokenu ako id
  rem_id,
  for_id,
  rem_pid,
  for_pid,
  for_all
} tId_sign;

bool parse();
void extractRule(tSem_context* sem_context);
void sem_check (tSem_context* sem_context);   //funkcia vykonava semanticke akcie
