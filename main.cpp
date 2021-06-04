#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std ;



int main() {
    // this is a comment!
    /* this is a multi-line comment ! */
    cout << "Hello World\n" ;
    cout << "Hello World again!" << endl ;
    cout << "A new line this is!" ;
    
    // variables
    int I = 123 ;
    cout << "I : " << I << endl ;
    float F = 1.1 ;
    cout << "F : " << F << endl ;
    double D = 1.1 ;
    cout << "D : " << D << endl ;
    char C = 'c' ;
    cout << "C : " << C << endl ;
    string S = "str" ;
    cout << "S : " << S << endl ;
    bool B = true ;
    cout << "B : " << B << endl ;
    printf("This is a printf func : %d\t%c\n",75,75) ;
    
    /*
    // getline func
    string str1 ;
    cout << "enter a string: " ;
    getline(cin, str1) ;
    cout << "you entered: " << str1 << endl ;

    // cin
    string str ;
    cout << "enter a string: " ;
    cin >> str ;
    cout << "you entered: " << str << endl ;
    */

    // change data type
    cout << (double) 5/2 << endl ;

    // if case
    bool b = true ;
    if (b) {
        cout << "b is true!" << endl ;
    } else if (b) {
        cout << "b is false!" << endl ;
    } else {
        cout << "b is nothing" << endl ;
    }

    // switch
    char lgrade ;
    cout << "what letter grade did you get: " ;
    cin >> lgrade ;
    switch (lgrade) {
        case 'A' :
            cout << "excellent!" << endl ;
            break ;
        case 'B' :
            cout << "well" << endl ;
            break ;
        case 'C' :
            cout << "good!" << endl ;
            break ;
        case 'D' :
            cout << "bad!" << endl ;
            break ;
        default :
            cout << "not a letter grade " << endl ;
    }

    // string func
    string teststr = "test string" ;
    cout << teststr << endl ;
    cout << teststr.length() << endl ;
    cout << teststr.empty() << endl ;
    cout << teststr.append(" (this is appended text)") << endl ;
    cout << teststr[0] << endl ;
    cout << teststr.at(1) << endl ;
    cout << teststr.substr(0, 5) << endl ;
    cout << teststr.insert(5, "(inserted) ") << endl ;
    cout << teststr.find("str1") << endl ;

    // cmath
    int x = 2 ;
    int y = 5 ;
    cout << "cmath" << endl ;
    cout << max(x, y) << endl ;
    cout << min(x, y) << endl ;
    cout << abs(-6) << endl ;
    cout << pow(x, y) << endl ;
    cout << sqrt(x) << endl ;
    cout << round(4.5) << endl ;
    cout << ceil(5.1) << endl ;
    cout << floor(4.999) << endl ;

    // logic
    cout << (true && false) << endl ;
    cout << true << endl ;
    cout << (false || true) << endl ;

    // while and for loop
    string input = "default" ;
    cin.ignore() ;
    while (!input.empty()) {
        cout << "don't type anything" << endl ;
        getline(cin, input) ;
        cout << "input: " << input << endl ;
    }

    for (int i = 0 ; i < 10 ; i++) {
        cout << i << endl ;
    }

    // printf: %[flags][width][.precision][length]specifier
    string STR = "String" ;
    printf("this is a example of printf: \n") ;
    printf("this is a string: %s\n", STR.c_str()) ;
    printf("%.2f \n%10s\n%10s\n%10s\n", 999.1234, "text", "text1", "text2") ;
    printf("%.2f \n%-10send0\n%-10send1\n%-10send2\n", 999.1234, "text", "text1", "text2") ;

    // random number
    srand(time(NULL)) ;
    cout << rand() << endl ;
    cout << rand() << endl ;
    cout << rand() << endl ;
    cout << rand() << endl ;

    // pointer
    string name = "Jack" ;
    int age = 18 ;

    string* pName = &name ;
    int* pAge = &age ;

    cout << pName << endl ;
    return 0 ;
}
