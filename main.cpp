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
    
    short int i = 0, binI = 0;
    cout << "i = 0: " << i << endl;
    i = 1, binI = 0b0000000000000001;
    cout << "short i = 1: " << i << " (" << binI << ")" << endl;
    i = 32767, binI = 0b0111111111111111;
    cout << "short i = 32767: " << i << " (" << binI << ")" << endl;
    i = 32768, binI = 0b1000000000000000;
    cout << "short i = 32767: " << i << " (" << binI << ")" << endl;
    i = 65534, binI = 0b1111111111111110;
    cout << "short i = 65534: " << i << " (" << binI << ")" << endl;
    i = 65535, binI = 0b1111111111111111;
    cout << "short i = 65535: " << i << " (" << binI << ")" << endl;
    // 0b1111111111111111 + 0b1 = 0b0000000000000000
    i = 65536;
    cout << "i = 65536: " << i << endl;
    // 0b1111111111111111 + 0b10 = 0b0000000000000001
    i = 65537;
    cout << "i = 65537: " << i << endl << endl;
    
    unsigned short int j = 0;
    cout << "j = 0: " << j << endl;
    j = 1;
    cout << "j = 1: " << j << endl;
    j = 32767;
    cout << "j = 32767: " << j << endl;
    j = 32768;
    cout << "j = 32767: " << j << endl;
    j = 65534;
    cout << "j = 65534: " << j << endl;
    j = 65535;
    cout << "j = 65535: " << j << endl;
    j = 65536;
    cout << "j = 65536: " << j << endl;
    j = 65537;
    cout << "j = 65537: " << j << endl;
            
    return 0;
}

