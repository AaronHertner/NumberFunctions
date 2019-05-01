//
// Created by Aaron Hertner on 4/30/2019.
//
#include <iostream>

using namespace std;

class NumberFunctions{
    public:
        //returns a boolean indicating whether a number is
        //prime or not
        bool isPrime(int x){
            int count = 0;
            for(int i = 1; i <= x; ++i){
                for(int j = 1; j <= x; ++j){
                    if( j * i == x){count++;}
                }
            }
            return count == 2;
        }
};