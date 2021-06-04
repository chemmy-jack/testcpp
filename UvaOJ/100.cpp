#include <stdlib.h>
#include <stdio.h>
#include <cmath>
using namespace std ;

/* three tries and exceeds time limit every time */

int getAnswer(int x, int y) {
    int biggest = 0 ;
    while (x<y) {
        int j = 1, i = x ;
        for ( int i = x ; i > 1 ; j ++ ) {
            if (i%2) {
                i = i*3 + 1 ;
            } else {
                i /= 2 ;
            }
        }
        if (j > biggest) { biggest = j ; } ;
        x++ ;
    }
    return biggest ;
}

int main() {
    int a, b ;
    do {
        b = 0 ;
        scanf("%d %d", &a, &b) ;
        printf("%d\n", getAnswer(fmin(a, b), fmax(a, b))) ;
    } while (a != 1 || b != 0) ;
    return 0 ;
}
