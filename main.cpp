#include <iostream>
#include "NumberFunctions.cpp"

int main() {

    NumberFunctions n;

    for(int i = 0; i < 100; ++i){
        if(n.isPrime(i) > 0)
            std :: cout << i << " is a prime number!" << endl;
    }
}