#ifndef COMPLEX2_H_INCLUDED
#define COMPLEX2_H_INCLUDED
#include <ostream>

using namespace std;
class Complex2 {
	double rPart, iPart; // 실수부 및 허수부
public:
	// 생성자
	Complex2(double r = 0, double i = 0) :rPart(r), iPart(i) {}
	Complex2 conj() const {
		return Complex1(rPart, -iPart);
	}   
	Complex2 operator+(const Complex2& c) const;
};
#endif