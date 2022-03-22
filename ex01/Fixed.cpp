#include "Fixed.hpp"

Fixed::Fixed()
{
    setRawBits(0);
}

Fixed::Fixed(int const number):number(number)
{}

Fixed::Fixed(float const number)
{
    this->number = (int)number;
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

float   Fixed::toFloat(void) const
{
    float res = (float)getRawBits();
    return res;

}

int     Fixed::toInt(void) const
{
    return (getRawBits());
}