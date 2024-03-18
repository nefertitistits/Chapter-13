#include <stdio.h>
#include <stdio.h>

int main() {
    Stack s;
    init(&s);

    // Testing the stack functions
    push(&s, 5);
    push(&s, 10);
    push(&s, 15);

    printf("Original stack:\n");
    printf("Count: %d\n", count(&s));

    printf("Duplication: %d\n", dup(&s));
    printf("After duplication, count: %d\n", count(&s));

    printf("Addition: %d\n", add(&s));
    printf("After addition, count: %d\n", count(&s));

    printf("Popping all elements: ");
    while (!is_empty(&s)) {
        printf("%d ", pop(&s));
    }
    printf("\n");

    return 0;
}
