#include <stdio.h>

int main() {
    int row, col; 
    scanf("%d %d", &row, &col);
    int a[row][col];
    int element = row * col;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            scanf("%d", &a[i][j]);
        } 
    }
    int cnt = 0;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if (a[i][j] == 0)
            {
                cnt++;
            }
            
        } 
        // printf("\n");
    }
    printf("%d\n", cnt);
    if (element == cnt) 
    {
        printf("Zero Null");
    } else {
        printf("No nulp");
    }
    
    return 0;
}