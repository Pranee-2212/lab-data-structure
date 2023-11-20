#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int top = -1, inp_array[SIZE];

void push() {
    if (top == SIZE - 1) {
        printf("Overflow!!\n");
    } else {
        int element;
        printf("Enter the element to be inserted onto the stack: ");
        scanf("%d", &element);
        top++;
        inp_array[top] = element;
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow!!\n");
    } else {
        printf("Popped element: %d\n", inp_array[top]);
        top--;
    }
}

void show() {
    if (top == -1) {
        printf("Stack is empty!!\n");
    } else {
        printf("Elements present in the stack: \n");
        for (int i = top; i >= 0; --i) {
            printf("%d\n", inp_array[i]);
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nPerform operations on the stack:");
        printf("\n1. Push the element\n2. Pop the element\n3. Show\n4. End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!!\n");
        }
    }
    return 0;
}
