#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "queue.h"
#include "stack.h"




void copyQueueToStack(Queue q,Stack *ps){

    ElementType item;
    while(!queueEmpty(&q)){
        dequeue(&item,&q);
        posh(item,ps);
    }
}
void display(ElementType item){

   printf("\ncustomer name %s and id=%d \n",item.name,item.id);

}


int main()
{
    ElementType item;

     Queue q;
     Stack s;
     CreateQueue(&q);
     CreateStack(&s);

     int ch;
     printf("1. Add a New Customer.\n2. Serve a Customer.\n3. Display Customers Information.\n4. Display Customers information in the most-recent Order.\n5. Exit menu \n\n\n");
printf("Enter choose :");
       scanf("%d",&ch);
       if(ch/ch == 1) {

             printf("in valid choose ! \n \n");
        }

       while(ch/ch!= 1 ){ // to chick if the the input always be integer ;




        switch(ch){






        case 1 :
            if(!queueFull(&q)){
                printf("Enter customer name :");
                scanf("%s ", item.name);
                printf("Enter customer id :");
                scanf("%d",&item.id);
                enqueue(item,&q);
            }
            else{
                printf("\n\tthere are no space for now customer\n");
            }
            break;
        case 2:
              if(!queueEmpty(&q)){
                    dequeue(&item,&q);
               printf("customer name is %s and id = %d \n", item.name, item.id);


              }else{
                    printf("there are no customer to serve !\n");
              }
              break;


        case 3:
            traverseQueue(&q,&display);
            break;




        case 4:
             copyQueueToStack(q,&s);

             while(!stackEmpty(&s)){
                pop(&item,&s);

                printf("customer name is %s and id=%d\n",item.name,item.id);

             }
             break;
        case 5:
            if(ch ==5 ){
                break;

            }
        default :
            printf("choose not valid ! \n");


        }



       printf("Enter choose :");
       scanf("%d",&ch);






       }


    return 0;
}
