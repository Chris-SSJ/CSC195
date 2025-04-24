#pragma once
#include <iostream>
namespace mathlib {
template<typename T>

	class Fraction {
		
	public:
		Fraction() = default;
		Fraction(T numerator, T denominator)
		{
			if (denominator == 0) {
				m_denominator == numerator;
			}
			m_numerator = numerator;
			m_denominator = denominator;
		}
		Fraction simplify() const {
			T g = gcd(m_numerator, m_denominator);
			T simplifiedNum = m_numerator / g;
			T simplifiedDen = m_denominator / g;

			if (simplifiedDen < 0) {
				simplifiedNum = -simplifiedNum;
				simplifiedDen = -simplifiedDen;
			}

			return Fraction(simplifiedNum, simplifiedDen);
		}
		double ToFloat() const {
			return static_cast<float>(m_numerator) / m_denominator;
		}

		T gcd(T a, T b) const {
			while (b != 0) {
				int temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}



		

		Fraction operator + (const Fraction& other) const {
			return Fraction(m_numerator + other.m_numerator, m_denominator + other.m_denominator);
		}
		Fraction operator - (const Fraction& other) const {
			return Fraction(m_numerator - other.m_numerator, m_denominator - other.m_denominator);
		}
		Fraction operator * (const Fraction& other) const {
			return Fraction(m_numerator * other.m_numerator, m_denominator * other.m_denominator);
		}
		Fraction operator / (const Fraction& other) const {
			return Fraction(m_numerator / other.m_numerator, m_denominator / other.m_denominator);
		}

		bool operator ==(const Fraction& other) const {
			return m_numerator == other.m_numerator && m_denominator == other.m_denominator;
		}

		bool operator !=(const Fraction& other) const {
			return !(*this == other); 
		}

		bool operator <(const Fraction& other) const {
			return this->ToFloat() < other.ToFloat();
		}

		bool operator >(const Fraction& other) const {
			return this->ToFloat() > other.ToFloat();
		}

		bool operator <=(const Fraction& other) const {
			return this->ToFloat() <= other.ToFloat();
		}

		bool operator >=(const Fraction& other) const {
			return this->ToFloat() >= other.ToFloat();
		}



		
		friend std::ostream& operator<<(std::ostream& os, const Fraction<T>& frac) {
			os << frac.m_numerator << "/" << frac.m_denominator;
			return os;
		}

		friend std::istream& operator >>(std::istream& istream, Fraction<T>& frac) {
			istream >> frac.m_numerator;
			istream >> frac.m_denominator;

			return istream;

		}
		
		

	private:
		T m_numerator = 0;
		T m_denominator = 0;

	};
}
