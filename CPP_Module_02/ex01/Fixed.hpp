#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static int const fixed = 8;
    public:
        Fixed();
        Fixed(const int newValue);
        Fixed(const float newValue);
        Fixed(const Fixed &cpy);
        Fixed &operator = (const Fixed &cpy);
        int toInt(void) const;
        float toFloat(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
};

std::ostream &operator << (std::ostream &output, const Fixed &fixed);

#endif