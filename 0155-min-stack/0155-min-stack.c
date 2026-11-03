
#include <stdlib.h>

typedef struct {
    int *stack;
    int *minStack;
    int top;
    int capacity;
} MinStack;

MinStack* minStackCreate() {
    MinStack* obj = malloc(sizeof(MinStack));

    obj->capacity = 16;
    obj->top = -1;

    obj->stack = malloc(obj->capacity * sizeof(int));
    obj->minStack = malloc(obj->capacity * sizeof(int));

    return obj;
}

void resize(MinStack* obj) {
    obj->capacity *= 2;

    obj->stack = realloc(obj->stack,
                         obj->capacity * sizeof(int));

    obj->minStack = realloc(obj->minStack,
                            obj->capacity * sizeof(int));
}

void minStackPush(MinStack* obj, int val) {
    if (obj->top + 1 == obj->capacity) {
        resize(obj);
    }

    obj->top++;

    obj->stack[obj->top] = val;

    if (obj->top == 0) {
        obj->minStack[obj->top] = val;
    } else {
        int prev = obj->minStack[obj->top - 1];

        obj->minStack[obj->top] =
            (val < prev) ? val : prev;
    }
}

void minStackPop(MinStack* obj) {
    if (obj->top >= 0) {
        obj->top--;
    }
}

int minStackTop(MinStack* obj) {
    return obj->stack[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->minStack[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj->stack);
    free(obj->minStack);
    free(obj);
}
