#include "easyfind.hpp"
#include <vector>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> a(arr, arr + 5);
    std::vector<int>::iterator it;
    std::vector<int>::iterator il;
    it = easyfind(a, 3);
    il = easyfind(a, -8);
    if (it != a.end())
    {
        std::cout << "it is found " << *it << "\n"; 
    }
    if (il == a.end())
    {
        std::cout << "it is not found" << "\n";
    }
}

