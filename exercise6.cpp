#include <iostream>
#include <forward_list>
#include <iterator>

int main()
{
    std::forward_list<int> flist = {2, 34, 7, 87, 43, 9, 0, 2};
    auto itFront = begin(flist);
    auto itBack = end(flist);
    std::cout << "size: " << std::distance(itFront,itBack) <<std::endl;
    auto iter5 = flist.begin();
    std::advance(iter5, 4);
    std::cout << "5th element = " << *iter5 << std::endl;
    std:: cout << "Distance = " << std::distance(itFront, iter5) << std::endl;
}