#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std ;

/* i have no idea why it keeps getting wrong answer... */

int main() {
    char ID[50] ;
    while (cin >> ID) {
        if (ID[0] == '#') return 0 ;
        int IDlength = strlen(ID) ;
        bool foundSuccess = false ;
        for (int i = IDlength -1 ; i > 0 ; i--) {
            for (int j = i - 1 ; j > 0 ; j--) {
                if (ID[i]>ID[j]) {
                    char buffer = ID[i] ;
                    for (int x = i  ; x > j ; x--) {
                        ID[x] = ID[x-1] ;
                    }
                    ID[j] = buffer ;
                    foundSuccess = true ;
                    break ;
                }
            }
            if (foundSuccess) {
                cout << ID << endl ;
                break ;
            }
        }
        if (!foundSuccess) {
            cout << "No Successor" << endl ;
        }
    }
    return 0 ;
}
