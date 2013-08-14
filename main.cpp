/* 
 * File:   main.cpp
 * Author: pzaharov
 *
 * Created on 14 Август 2013 г., 18:20
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    short int i = 0;
    cout << "i = 0: " << i << endl;
    i = 1;
    cout << "i = 1: " << i << endl;
    i = 32767;
    cout << "i = 32767: " << i << endl;
    i = 32768;
    cout << "i = 32767: " << i << endl;
    i = 65534;
    cout << "i = 65534: " << i << endl;
    i = 65535;
    cout << "i = 65535: " << i << endl;
    i = 65536;
    cout << "i = 65536: " << i << endl;
    i = 65537;
    cout << "i = 65537: " << i << endl;
    return 0;
}

