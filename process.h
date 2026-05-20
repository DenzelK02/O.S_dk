
// Author: Denzel Kum

#ifndef PROCESS_H
#define PROCESS_H

typedef struct Process
{
    int id;
    char name[20];
    int state; // 0 = FREE, 1 = READY, 2 = RUNNING
    int remainingTime;
    struct Process* next;

} Process;

#endif
