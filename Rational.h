#include <iostream>
using namespace std;

class Rational
{
private:
    int num;
    int den; 
public:
    Rational();
    Rational(int, int);
    Rational(const Rational&);
    ~Rational();
    Rational& operator*=(const Rational&);
    Rational operator*(const Rational&)const;
    bool operator==(const Rational&)const;
    bool operator!=(const Rational&)const;
    friend ostream& operator<<(ostream&, const Rational&);
    friend istream& operator>>(istream&, Rational&);
    Rational operator++(int);
    Rational& operator++();
    void SetNum(int);
    void SetDen(int);
    int GetNum();
    int GetDen();
    void ReduceFrac();
    void Print();
    double GetRationalFrac();

};

