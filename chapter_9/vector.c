#include <stdio.h>
#include <stdlib.h>
//yet to study dont touch it...
#define INITIAL_CAPACITY 10

typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} Vector;

void initVector(Vector *vec) {
    vec->data = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
    vec->size = 0;
    vec->capacity = INITIAL_CAPACITY;
}

void pushBack(Vector *vec, int value) {
    if (vec->size == vec->capacity) {
        vec->capacity *= 2;
        vec->data = (int *)realloc(vec->data, vec->capacity * sizeof(int));
    }
    vec->data[vec->size++] = value;
}

void printVector(const Vector *vec) {
    for (size_t i = 0; i < vec->size; ++i) {
        printf("%d ", vec->data[i]);
    }
    printf("\n");
}

void freeVector(Vector *vec) {
    free(vec->data);
    vec->size = 0;
    vec->capacity = 0;
}

int main() {
    Vector myVector;
    initVector(&myVector);

    pushBack(&myVector, 1);
    pushBack(&myVector, 2);
    pushBack(&myVector, 3);

    printf("Vector elements: ");
    printVector(&myVector);

    freeVector(&myVector);

    return 0;
}
