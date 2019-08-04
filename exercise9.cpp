#include <iostream>
#include <algorithm>
#include <string>

bool is_palindrom(const std::string & a)
{
    auto iterators = std::mismatch(a.begin(),a.end(), a.rbegin(), a.rend()); // zwraca pare iteratorow wskazujac na pierwsze elementy ktore sa różne
    return (iterators.first == a.end() and iterators.second == a.rend());

}

int main()
{
std::string a = "kajak";

std::cout <<is_palindrom(a) <<std::endl;
return 0;
}