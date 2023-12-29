#include <stdio.h>
#include <stdlib.h>

#define STACKSIZE 10
struct stack {
    int items[STACKSIZE];
    int tos;
};

void push(struct stack *s, int x) {
    if(s->tos == STACKSIZE - 1)
        printf("stack is full\n");
    else {
        s->tos++;
        s->items[s->tos] = x;
    }        
}

int pop(struct stack *s) {
    int x;
    if(s->tos == -1) {
        printf("stack is empty\n");
        return -1;
    } else {
        x = s->items[s->tos];
        s->tos--;
        return x;
    }
}

int peek(struct stack *s) {
    if(s->tos == -1) {
        printf("stack si empty\n");
        return -1;
    }
    else
        return s->items[s->tos];
}

int isEmpty(struct stack *s) {
    if(s->tos == -1)
        return 1;
    else
        return 0;
}

struct stack *createStack() {
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->tos = -1;
    return s;
}

int main(void) {
    struct stack *myStack;
    myStack = createStack();
    push(myStack, 10);
    push(myStack, peek(myStack) * 10);
    push(myStack, peek(myStack) * 10);
    printf("popped element is %d\n", pop(myStack));
    printf("popped element is %d\n", pop(myStack));
    printf("popped element is %d\n", pop(myStack));
    printf("popped element is %d\n", pop(myStack));
    return 0;
}