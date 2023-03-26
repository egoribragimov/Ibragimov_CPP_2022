#include <iostream>
#include "Rational.h"

Rational::Rational() : numerator_(0), denominator_(1) {}

Rational::Rational(int numerator, int denominator) {
    if (denominator == 0) {
        std::cout << "Error: denominator != 0" << std::endl;
        numerator_ = 0;
        denominator_ = 1;
        return;
    }
    numerator_ = numerator;
    denominator_ = denominator;
    reduce();
}

Rational::Rational(const Rational& other) : numerator_(other.numerator_), denominator_(other.denominator_) {}

void Rational::print() const {
    std::cout << numerator_ << '/' << denominator_;
}

int Rational::gcd(int a, int b) { //нод
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void Rational::reduce() {
    int gcd_value = gcd(abs(numerator_), denominator_);
    numerator_ /= gcd_value;
    denominator_ /= gcd_value;

    if (denominator_ < 0) {
        numerator_ *= -1;
        denominator_ *= -1;
    }
}

Rational Rational::operator+(const Rational& other) const {
    Rational result;
    result.numerator_ = numerator_ * other.denominator_ + other.numerator_ * denominator_;
    result.denominator_ = denominator_ * other.denominator_;
    result.reduce();
    return result;
}

Rational Rational::operator-(const Rational& other) const {
    Rational result;
    result.numerator_ = numerator_ * other.denominator_ - other.numerator_ * denominator_;
    result.denominator_ = denominator_ * other.denominator_;
    result.reduce();
    return result;
}

Rational Rational::operator*(const Rational& other) const {
    Rational result;
    result.numerator_ = numerator_ * other.numerator_;
    result.denominator_ = denominator_ * other.denominator_;
    result.reduce();
    return result;
}

Rational Rational::operator/(const Rational& other) const {
    Rational result;
    result.numerator_ = numerator_ * other.denominator_;
    result.denominator_ = denominator_ * other.numerator_;
    result.reduce();
    return result;
}

bool Rational::operator==(const Rational& other) const {
    return numerator_ == other.numerator_ && denominator_ == other.denominator_;
}

bool Rational::operator!=(const Rational& other) const {
    return !(*this == other);
}

bool Rational::operator>(const Rational& other) const {
    return numerator_ * other.denominator_ > denominator_ * other.numerator_;
}

bool Rational::operator>=(const Rational& other) const {
    return numerator_ * other.denominator_ >= denominator_ * other.numerator_;
}

bool Rational::operator<(const Rational& other) const {
    return numerator_ * other.denominator_ < denominator_ * other.numerator_;
}

bool Rational::operator<=(const Rational& other) const {
    return numerator_ * other.denominator_ <= denominator_ * other.numerator_;
}

