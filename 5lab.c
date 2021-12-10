#include <stdio.h>

int main(){
    int arr[9] = {12, 13, 14, 15, 16, 17, 18, 19, 20}; //вводим массив
    int mat[2][2] = {1, 1, 1, 4};//задаём вид матрицы
    int mat2[2][2] = {1, 2, 4, 1};
    int ans[2][2] = {0};//ответ

    printf("myarray:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                ans[i][j] += mat[i][k] * mat2[k][j];
            }
        }
    }
    for(int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            printf("%d", ans[x][y]);
            printf(" ");
        }
        for (int y = 0; y < 2; y++) {
            printf("%d", ans[y][x]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}