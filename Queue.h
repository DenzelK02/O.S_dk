// Author: Denzel Kum

#ifndef QUEUE_H
#define QUEUE_H

#include "process.h"

typedef struct
{
    Process* front;
    Process* rear;

} Queue;

void initializeQueue(Queue* queue);
int isEmpty(Queue* queue);
void enqueue(Queue* queue, Process* process);
Process* dequeue(Queue* queue);

#endif
