#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

typedef struct list {
    uint64_t address;
    size_t size;
    char comment[64];
    struct list* next;
} list;

list* push(list* top, uint64_t address, size_t size);
list* pop(list* top);
void show_stack(const list* top);
size_t totalMemoryUsage(list *head);

int main(void) 
{
    list* top = NULL;
 
    top = push(top, 140525067852320, 10);
    top = push(top, 140525067852350, 30);
    top = push(top, 140525067852900, 100);
 
    show_stack(top);

    printf("%lu\n", totalMemoryUsage(top));
 
    while(top)
        top = pop(top);
 
    return 0;
}

list* push(list* top, uint64_t address, size_t size)
{
    list* ptr = malloc(sizeof(list));
    ptr->address = address;
    ptr->size = size;
    ptr->next = top;
    return ptr;
}

list* pop(list* top)
{
    if(top == NULL)
        return top;
    list* ptr_next = top->next;
    free(top);
 
    return ptr_next;
}

void show_stack(const list* top)
{
    const list* current = top;
    while(current != NULL) {
        printf("%lu\n", current->size);
        current = current->next;
    }
}

size_t totalMemoryUsage(list *head)
{
    const list* current = head;
    size_t count_byte = 0;
    while(current != NULL) {
        count_byte += current->size;
        current = current->next;
    }
    return count_byte;
}