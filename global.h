#ifndef GLOBAL_H
#define GLOBAL_H

#define MAXSIZE 10

typedef struct entry{

    int id;
    char name[50];


}ElementType;

typedef ElementType StackEntry;
#define maxStack MAXSIZE

typedef ElementType QueueEntry;
#define maxQueue     MAXSIZE

#endif // GLOBAL_H
