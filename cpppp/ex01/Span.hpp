#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iostream>

class Span
{
    private:
        std::vector<int> v;
        size_t          c;
		size_t			total;
    public:
        Span(void);
        ~Span(void);
        Span &operator=(const Span &obj);
        Span(const Span &obj);
        Span(unsigned int N);
        void    addNumber(unsigned int N);
        int     shortestSpan(void);
        int     longestSpan(void);
        void    addWhole(std::vector<int>::iterator b, std::vector<int>::iterator e);
};







#endif