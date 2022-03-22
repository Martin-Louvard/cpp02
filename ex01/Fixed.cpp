#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    setRawBits(0);
}

Fixed::Fixed(int const number):number(number)
{
    std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed(float const number)
{
    std::cout << "Float constructor called" << std::endl;
    this->number = (int)number;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->number = src.getRawBits();
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
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
    float res = (float)this->number;
    return res;

}

int     Fixed::toInt(void) const
{
    return (this->number);
}

std::ostream& operator<<(std::ostream& os, const Fixed& i)
{
    os << i.getRawBits(); 
    return os;
}