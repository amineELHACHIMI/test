#include "Span.hpp"

Span::Span(void)
    :c(0)
{
}

Span::~Span(void)
{
}

Span &Span::operator=(const Span &obj)
{
    this->v = obj.v;
    return (*this);
}

Span::Span(const Span &obj)
{
    this->v = obj.v;
}

Span::Span(unsigned int N)
    :c(0)
{
    total = N;
}

void Span::addNumber(unsigned int N)
{
    if (c >= total)
    {
        throw(std::runtime_error("exceeded the available slots for the Span.\n"));
    }
    v.push_back(N);
    c += 1;
}

void    Span::addWhole(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
    for (std::vector<int>::iterator it = b; it != e; it++)
    {
        if (c >= total)
        {
            throw(std::runtime_error("exceeded the available slots for the Span.\n"));
        }
        v.push_back(*it);
        c += 1;
    }
}

int Span::shortestSpan(void)
{
    int l;
    int diff;
    std::vector<int> copy; 

    if (v.size() < 2)
        throw(std::runtime_error("The Span is less than 2 in size.\n"));
    l = 0;
    copy = v;
    sort(copy.begin(), copy.end());
    for (size_t r = 1; r < copy.size(); r++)
    {
        if (!l)
            diff = copy.at(r) - copy.at(l);
        if (diff > (copy.at(r) - copy.at(l)))
            diff = copy.at(r) - copy.at(l);
        l += 1;
    }
    return (diff);
}

int Span::longestSpan(void)
{
    if (v.size() < 2)
        throw(std::runtime_error("The Span is less than 2 in size.\n"));
    return ((*std::max_element(v.begin(), v.end()))-(*std::min_element(v.begin(), v.end())));
}