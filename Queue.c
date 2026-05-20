// Author: Denzel Kum

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void initializeQueue(Queue* queue)
{
    queue->front = NULL;
    queue->rear = NULL;
}

int isEmpty(Queue* queue)
{
    if (queue->front == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(Queue* queue, Process* process)
{
    process->next = NULL;

    if (queue->rear == NULL)
    {
        queue->front = process;
        queue->rear = process;
    }
    else
    {
        queue->rear->next = process;
        queue->rear = process;
    }
}

Process* dequeue(Queue* queue)
{
    if (isEmpty(queue))
    {
        return NULL;
    }

    Process* temp = queue->front;
    queue->front = queue->front->next;

    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }

    return temp;
}
