#include "global.h"
#include "stack.h"


void CreateStack(Stack *ps){

 ps->top=0;


}

void posh(StackEntry e,Stack *ps){

    ps->entry[ps->top++]=e;



}


void pop(StackEntry *e,Stack *ps){


       *e=ps->entry[--ps->top];



}


int stacFull(Stack *ps){


   return(ps->top==maxStack);

}

int stackEmpty(Stack *ps){

  return(ps->top==0);

}
