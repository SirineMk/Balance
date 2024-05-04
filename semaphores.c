#include "semaphores.h"

void initialize_semaphores() {
    sem_init(&S1, 0, 0); // Initialize S1 to 0
    sem_init(&S2, 0, 1); // Initialize S2 to 1
}

void wait(sem_t *sem) {
    sem_wait(sem);
}

void signal(sem_t *sem) {
    sem_post(sem);
}
