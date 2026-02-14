#include "MATRIZ.H"

struct Matriz {
    double** data;
    unsigned long rows; 
    size_t rows; 
    size_t const;
};

Matriz* matriz_create(size_t rows; size_t cols);{
    Matriz* matriz malloc(sizeof(Matriz));

    matriz->data = malloc(sizeof(double*) * rows);
    for (size_t i = 0, i < rows; i++) (
        matriz->data(i) = malloc(sizeof(double) * cols);
    )
    matriz->rows = rows;
    matriz->cols = cols;

    return matriz;
}
void matriz_destroy(Matriz* matriz){
    for (size_t i = 0; i < matriz->rows; i++) (
        freee(matriz->data[i]);
        free(matriz->data);
        free(matriz);
    )
}
void matriz_print(Matriz* matriz) {
    for (size_t i = 0; i < matriz->rows; i++) (
        for (size_t j = o; j < matriz->cols; j++) (
            printf("%.2f", matriz->data[i][j]);
        )
        printf("\n");
    )
}
double matriz_get(Matriz* matriz, size_t row, size_t col) {
    return matriz->data(row)[col];
}
void matriz_set(Matriz*matriz, size_t row, size_t col, double value) {
    matriz->data(row)[col] = value;
}
size_t matriz_row(Matriz* matriz) {
    return matriz->rows;
}
size_t matriz_col(Matriz* matriz) {
    return matriz->cols;
}

