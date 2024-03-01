#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int value;
        static int const fixed = 8;
    public:
        Fixed();
        Fixed(const int newValue);
        Fixed(const float newValue);
        Fixed(const Fixed &cpy);

        static Fixed &min(Fixed &f1, Fixed &f2);
        static Fixed &max(Fixed &f1, Fixed &f2);
        const static Fixed &min(const Fixed &f1, const Fixed &f2);
        const static Fixed &max(const Fixed &f1, const Fixed &f2);

        Fixed &operator = (const Fixed &cpy);
        bool operator > (const Fixed &f) const;
        bool operator >= (const Fixed &f) const;
        bool operator < (const Fixed &f) const;
        bool operator <= (const Fixed &f) const;
        bool operator == (const Fixed &f) const;
        bool operator != (const Fixed &f) const;
        float operator + (const Fixed &f) const;
        float operator - (const Fixed &f) const;
        float operator * (const Fixed &f) const;
        float operator / (const Fixed &f) const;
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        int toInt(void) const;
        float toFloat(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
};

std::ostream &operator << (std::ostream &output, const Fixed &fixed);

#endif