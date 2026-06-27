#include "Span.hpp"

int main()
{
    int a[] = {1,2,23,4,5,12,7,8,18};
    std::vector<int> value(a, a+9);
Span sp = Span(14);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
sp.addWhole(value.begin(), value.end());
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}