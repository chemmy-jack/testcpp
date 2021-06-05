#include <iostream>
using namespace std ;

/* and this time it's runtime error, i am so fucked. I am begging to hate this thing. */

int main() {
    int N, m, end, now, powerOn[50] = {0} ;
    while (cin >> N) {
        if (N == 0) return 0 ;
        for (int i = 0 ; i < N ; i++) { powerOn[i] = i ; } ;
        m = 0 ;
        do {
            m++ ;
            now = 0 ;
            for (int i = 0 ; i < N ; i++) { powerOn[i] = i ; } ;
            for (int i = N ; i > 1 ; i--) {
                if (now >= i) now %= i ;
                for (int j = now ; j < i ; j++ ) {
                    powerOn[j] = powerOn[j+1] ;
                }
                now += m - 1 ;
            }
        } while (powerOn[0] != 12) ;
        cout << m << endl ;
    }
    return 0 ;
}
