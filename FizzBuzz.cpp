//
// Fizz Buzz implementation.
//
#include <iostream>
#include "FizzBuzz.h"
#include <string>

void fizzBuzz(int range, int step, int fizz, int buzz){

    for(int i = 1; i <= range; i += step){
        std::string word;

        if(!(i % fizz))
            word += "Fizz";

        if(!(i % buzz))
            word += "Buzz";

        if(!word.length())
            word = std::to_string(i);

        std::cout << word << std::endl;
    }
}