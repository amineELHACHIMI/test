#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &a, int k)
{
    typename T::iterator it = std::find(a.begin(), a.end(), k);
    return (it);
}




#endif