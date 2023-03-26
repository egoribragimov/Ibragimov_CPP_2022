#ifndef IBRAGIMOV_CPP_2022_RATIONAL_H
#define IBRAGIMOV_CPP_2022_RATIONAL_H
#pragma once

class Rational {
public:
    Rational();
    Rational(int numerator, int denominator);
    Rational(const Rational& other);

    void print() const;


    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;

    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    bool operator>(const Rational& other) const;
    bool operator>=(const Rational& other) const;
    bool operator<(const Rational& other) const;
    bool operator<=(const Rational& other) const;

private:
    int numerator_;
    int denominator_;
    void reduce();
    int gcd(int a, int b);
};


#endif //IBRAGIMOV_CPP_2022_RATIONAL_H
