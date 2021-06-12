#include "global.h"

typedef struct stackk{

    int top;

    StackEntry entry[maxStack];


}Stack;



void CreateStack(Stack *ps);

void posh(StackEntry e,Stack *pq);


int stacFull(Stack *ps);

void pop(StackEntry *e,Stack *ps);

int stackEmpty(Stack *ps);
