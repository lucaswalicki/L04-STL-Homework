#include <iostream>
#include <forward_list>
#include <iterator>

/*
void printSize(int x, int y)
{
    int flistSize = 0;
    for (auto i=x; i!= y; ++i)
    {
        ++flistSize;
    }
    std::cout << flistSize << std::endl;
}
*/

int main()
{
    std::forward_list<int> flist{2, 34, 7, 87, 43, 9, 0, 2};
    auto itFront = flist.begin();
    auto itBack = flist.end();
    int flistSize = 0;
    for (auto i=itFront; i!= itBack; ++i)
    {
        ++flistSize;
    }
    std::cout << flistSize << std::endl;
    std::advance(itFront, 4);
    std::cout << "5th element = " << *itFront << std::endl;
    std:: cout << "distance = " << std::distance(flist.begin(), itFront) << std::endl;
}