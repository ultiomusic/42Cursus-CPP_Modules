#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static int const fixed = 8;
    public:
        Fixed();
        Fixed(const Fixed &cpy);
        Fixed &operator = (const Fixed &cpy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
};

#endif