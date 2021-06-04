#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std ;

int FindCharInString(char target, string str) {
    int str_length = str.length() ;
    for (int i = 0 ; i < str_length ; i++) {
        if (str[i] == target) { return i ; } ;
    } ;
        return -1 ;
}

int main() {
    // get answer
    string answer_pool[] = {"jack","bike","hike","mise"} ;
    srand(time(NULL)) ;
    int index = rand() % (sizeof(answer_pool)/sizeof(answer_pool[0])) + 1 ;
    string answer = answer_pool[index] ;
    cout << "there are " << sizeof(answer_pool)/sizeof(answer_pool[0]) << " elements in the ansewer pool" << endl ;
    cout << index << endl ;
    cout << answer << endl ;

    // game while loop
    bool gameover = false ;
    int tries = 0 ;
    while (!gameover) {
        answer = answer_pool[index] ;
        string input = "";
        tries++ ;
        while (input.length() != 4) {
            cout << "nuber " << tries << " guess : " ;
            cin >> input ;
        }
        int a=0,b=0 ;
        // a check loop
        for (int i = 0 ; i < 4 ; i++) {
            if (answer[i] == input[i]) {
                answer[i] = '\0' ;
                input[i] = '\0' ;
                a += 1 ;
            }
        }
        // b check loop
        for (int i = 0 ; i < 4 ; i++) {
            if (input[i] != '\0') {
                int match_index = FindCharInString(input[i], answer) ;
                if (match_index != -1) {
                    b++ ;
                    answer[match_index] = '\0' ;
                }
            }
        }
        printf("%dA%DB\n", a, b) ;
        if (a == 4) { gameover = true ; }
    }
    cout << "you have the right guess! condrads, you tried " << tries << " times to reach the answer" << endl ;
    return 0 ;
}
