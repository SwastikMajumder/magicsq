#include <stdio.h>

/*
a b c
d e f
g h i
*/

int magic_square(int a, int b, int e, int sum){
    int c = sum - a - b;
    int h = sum - b - e;
    int i = sum - a - e;
    int g = sum - h - i;
    int d = sum - a - g;
    int f = sum - c - i;
    if (g + e + c == sum &&
        d + e + f == sum){
        int board[9];
        board[0] = a;
        board[1] = b;
        board[2] = c;
        board[3] = d;
        board[4] = e;
        board[5] = f;
        board[6] = g;
        board[7] = h;
        board[8] = i;
        int n, m;
        for (n=0; n<9; ++n){
            if (board[n] < 1 || board[n] > 9){
                return 0;
            }
            for (m=n+1; m<9; ++m){
                if (board[m] == board[n]){
                    return 0;
                }
            }
        }
        return 1;
    }
    return 0;
}

int main (){
    int i, j, k;
    for (i=1; i<10; ++i){
        for (j=1; j<10; ++j){
            for (k=1; k<10; ++k){
                if (magic_square(i, j, k, 15)){
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
