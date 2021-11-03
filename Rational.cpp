#include "Rational.h"
Rational::Rational() :num(0), den(1) {};
Rational::Rational(int num, int den) :num(num), den(den) {};
Rational::Rational(const Rational& other) :num(other.num), den(other.den) {};
Rational::~Rational() {}

Rational& Rational::operator*=(const Rational& obj) {
    this->num *= obj.num;
    this->den *= obj.den;
    return *this;
}
Rational Rational::operator*(const Rational& obj)const {
    Rational res(*this);
    res *= obj;
    return res;
}
bool Rational::operator==(const Rational& obj)const { return (this->num == obj.num) && (this->den == obj.den); }
ostream& operator<<(ostream& out, const Rational& obj) {
    out << obj.num << '/' << obj.den;
    return out;
}
istream& operator>>(istream& input, Rational& obj) {
    input >> obj.num >> obj.den;
    return input;
}
Rational Rational::operator++(int n) {
    Rational obj(*this);
    obj.num = ++num;
    return obj;
}
Rational& Rational::operator++() {
    Rational obj(*this);
    obj.den = ++den;
    return obj;
}

void Rational::SetNum(int numer) { num = numer; }
void Rational::SetDen(int deno) { den = deno; }
int Rational::GetNum() { return this->num; }
int Rational::GetDen() { return this->den; }
void Rational::ReduceFrac() {
    if (num % den == 0 || den % num == 0) {
        for (int i = num - 1; i > 2; i--)
            if (num % i == 0)
                num /= i;
        for (int i = den - 1; i > 2; i--)
            if (den % i == 0)
                den /= i;
    }
}
void Rational::Print() { cout << num << '/' << den; }
double Rational::GetRationalFrac() { return (double)num / den; }