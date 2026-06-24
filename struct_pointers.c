#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int id;
    float health;
} Entity;

void damage_entity (Entity *e)
{
    e->health -= 15.5;
}

int main (void)
{
    Entity a = {1, 30.0};
    Entity *b = &a;
    printf("Address: %p\n", b);
    printf("ID: %d\n", b->id);
    printf("Health: %.2f\n", b->health);
    damage_entity(b);
    printf("New Health: %.2f\n", b->health);
}