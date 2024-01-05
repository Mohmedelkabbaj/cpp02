#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_numbers = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy Assignation operator called" << std::endl;
    this->fixed_point_numbers = fixed.getRawBits();
    return *this;
}


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point_numbers;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_numbers = raw;
}