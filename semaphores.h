#ifndef SEMAPHORES_H
#define SEMAPHORES_H

#include <semaphore.h>

extern sem_t S1, S2;

void initialize_semaphores();
void wait(sem_t *sem);
void signal(sem_t *sem);

#endif /* SEMAPHORES_H */
