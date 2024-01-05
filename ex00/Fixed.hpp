#include <iostream>

class Fixed
{
    private:
        int fixed_point_numbers;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};