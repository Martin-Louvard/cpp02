#include "Fixed.hpp"

Fixed::Fixed()
{
    setRawBits(0);
}

Fixed::~Fixed(void)
{}

Fixed::Fixed(Fixed const & src)
{
    this->number = src.getRawBits();
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    this->number = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{ 
    return this->number;
}

void    Fixed::setRawBits(int const raw)
{
    this->number = raw;
}