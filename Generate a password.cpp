#include <iostream>
#include <vector>
#include <random>
#include <functional> //for std::function, 
// This is a part of the standard c++ library,
// and comes with arithmetic, ordering and logic operators.
// It is designed to use syntax similar to that of functions.
#include <algorithm> //for std::generate_n
// This library introduces random number generation capabilities. 
// It allows us to call classes: default_random_engine, random_device ,uniform_int_distribution
typedef std::vector<char> char_array;

char_array charset(){
    //We change this as we want
    return char_array(
        { '0','1','2','3','4',
        '5','6','7','8','9',
        'A','B','C','D','E','F',
        'G','H','I','J','K',
        'L','M','N','O','P',
        'Q','R','S','T','U',
        'V','W','X','Y','Z',
        'a','b','c','d','e','f',
        'g','h','i','j','k',
        'l','m','n','o','p',
        'q','r','s','t','u',
        'v','w','x','y','z'
        });
};

// A string of the given length is returned 
//from the function that generates random characters
std::string random_string(size_t length, std::function<char(void)> rand_char)
{
    std::string str(length, 0);
    std::generate_n(str.begin(), length, rand_char);
    return str;
}

int main()
{
    //0) Create a character set.
    //   Here we can use array, 
    //   but the function is cleaner and more flexible
    const auto ch_set = charset();

    //1) Let's make a non-deterministic generator of (Pseudo)random numbers     
    std::default_random_engine rng(std::random_device{}());

    //2) We need to design a (Pseudo)random number generator 
    //   so that it gives us uniformly distributed indices in character sets
    std::uniform_int_distribution<> dist(0, ch_set.size() - 1);

    //3) We make a fucktion that binds them, in order to get:
    //   a non-deterministic uniform arrangement from the character set 
    //   of our choice
    auto randchar = [ch_set, &dist, &rng]() {return ch_set[dist(rng)]; };

    //4) User provides password length!       
    int length;
    std::cout << "Enter password length: ";
    std::cin >> length;
    std::cout <<"Pasword suggestion is: "<<random_string(length, randchar) << std::endl;
    return 0;
}.