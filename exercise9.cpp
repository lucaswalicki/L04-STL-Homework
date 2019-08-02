#include <iostream>
#include <algorithm>
#include <string>

bool is_palindrome(std::string a)
{
    std::string b = a;
    std::reverse(b.begin(), b.end());
    std::pair<std::string::iterator, std::string::iterator> stringPair;
    stringPair = mismatch(a.begin(), a.end(), b.begin());
    return stringPair.first == a.end();
}

int main()
{
    if(is_palindrome("asdsa"))
        std::cout << "Yes" << std::endl; 
    else 
        std::cout << "No" << std::endl;
    return 0;
}