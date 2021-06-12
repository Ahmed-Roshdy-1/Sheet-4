#include "global.h"


typedef struct queuee{
    int front;
    int rear;
    int size;

    QueueEntry entry[maxQueue];

}Queue;


void CreateQueue(Queue *pq);

int queueEmpty(Queue *pq);

int queueFull(Queue *pq);

int queueSize(Queue *pq);

void enqueue(QueueEntry e,Queue *pq);

void dequeue(QueueEntry *e,Queue *pq);


void traverseQueue(Queue *pq,void (*pf)(QueueEntry));
