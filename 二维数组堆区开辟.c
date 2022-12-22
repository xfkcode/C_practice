#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;
    int m = 8;
    int** parr = malloc(n * sizeof(int*));
    for (int i = 0;i < n;++i) {
        parr[i] = malloc(m * sizeof(int));
        for (int j = 0;j < m;++j) {
            parr[i][j] = 1;
        }
    }

    for (int i = 0;i < n;++i) {
        for (int j = 0;j < m;++j) {
            printf("%d ", parr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0;i < n;++i) {
        free(parr[i]);
        parr[i] = NULL;
    }
    free(parr);
    parr = NULL;
}
