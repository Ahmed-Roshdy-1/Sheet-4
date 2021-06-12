#include "global.h"
#include "queue.h"


void CreateQueue(Queue *pq){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;




}


int queueEmpty(Queue *pq){

    return(pq->size==0);
}

int queueFull(Queue *pq){

           return(pq->size==maxQueue);

}

int queueSize(Queue *pq){


       return(pq->size==maxQueue);


}

void enqueue(QueueEntry e,Queue *pq){

    pq->rear=(pq->rear+1)%maxQueue;

    pq->entry[pq->rear]=e;

    pq->size++;





}

void dequeue(QueueEntry *e,Queue *pq){

    *e=pq->entry[pq->front];

    pq->front=(pq->front+1)%maxQueue;

    pq->size--;






}


void traverseQueue(Queue *pq,void (*pf)(ElementType)){

    int pos,s;

    for(pos=pq->front,s=0;s<pq->size;s++){

        (*pf)(pq->entry[pos]);

        pos=(pos+1)%maxQueue;
    }






}






