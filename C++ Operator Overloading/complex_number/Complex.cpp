#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <sstream>
#include <math.h>

#include "complex.h"

using namespace std;

Complex::Complex(double real_part , double imaginary_part) : 
                real{real_part},
                imaginary{imaginary_part}
                {
                    // empty constructor for this
                }
    
void Complex::set_real(double value){
    real = value;
}

void Complex::set_imaginary(double value){
    imaginary = value;
}

double Complex::get_real() const{ return real;}
double Complex::get_imaginary() const{return imaginary;}

bool Complex::is_real() const{
    if (imaginary == 0){
        return true;
    }
    return false;
}

bool Complex::is_imaginary() const{
    if (real == 0){
        return true;
    }
    return false;
}

// implement the operator member functions
Complex Complex::operator+(const Complex& other) const{
    // return the new complex number
    Complex new_complex{real + other.get_real() , imaginary + other.get_imaginary()};
    return new_complex;
}   

Complex Complex::operator-(const Complex& other) const{
    Complex new_complex{real - other.get_real() , imaginary - other.get_imaginary()};
    return new_complex;
}

Complex Complex::operator*(const Complex& other) const{
    
    // create the new Complex number
    double new_real = real * other.get_real() - imaginary * other.get_imaginary();
    double new_imaginary = real * other.get_imaginary() + imaginary * other.get_real();
    Complex new_compelx{new_real , new_imaginary};

    return new_compelx;
}

Complex Complex::inverse() const{
    if (real == 0 && imaginary == 0){
        throw invalid_argument("cannot divide the zero compelx.");
    }
    double new_real = real / (real * real + imaginary * imaginary);
    double new_imaginary = -imaginary / (real * real + imaginary * imaginary);

    Complex new_complex{new_real , new_imaginary};
    return new_complex;
}

Complex Complex::operator/(const Complex& other) const{
    // get the inverse of the other
    Complex inverse = other.inverse();
    Complex new_complex{(*this) * inverse};
    return new_complex;
}

bool Complex::operator==(const Complex& other) const{
    if (other.get_real() == real && other.get_imaginary() == imaginary){
        return true;
    }
    return false;
}

bool Complex::operator!=(const Complex& other) const{
    if (real != other.get_real() || imaginary != other.get_imaginary()){
        return true;
    }
    return false;
}

bool Complex::operator!() const{
    if (real == 0 && imaginary == 0){
        return true;
    }
    return false;
}

string Complex::to_string() const{
    // create the the new ostring
    ostringstream text_stream;
    text_stream << setprecision(2) << fixed << real << ((imaginary >= 0) ? "+" : "") << setprecision(2)
                << imaginary << "i" << endl;
    return text_stream.str();
}

ostream& operator<<(ostream& out , const Complex& complex){
    out << setprecision(2) << fixed << complex.real 
        << ((complex.imaginary >= 0) ? "+" : "") << setprecision(2) << complex.imaginary << "i";
    return out;
}

istream& operator>>(istream& in , Complex& complex){
    // double real{0};
    // double imaginary{0};
    in >> complex.real;
    in >> complex.imaginary;;
    in.ignore();

    // complex.set_real(real);
    // complex.set_imaginary(imaginary);

    return in;
}

// implement the conversion constructors
Complex::operator string() const{
    ostringstream text;
    text << real << ((imaginary > 0) ? "+" : "") << imaginary << "i";
    return text.str();
};

Complex::operator double() const {
    return sqrt(pow(real , 2) + pow(imaginary, 2));
}

// declare the abs methodd
double Complex::abs() const {
    return static_cast<double>((*this));
}

// declare the subscript operator methods
double Complex::operator[](unsigned int index) {
    if (index > 1 || index < 0){
        throw out_of_range("cannot take index behind the 1");
    }
    if (index == 0){
        return real;
    }
    else{
        return imaginary;
    }
}

double& Complex::operator[](unsigned int index){
    if (index > 1 || index < 0){
        throw out_of_range("cannot take index behind the 1");
    }
    if (index  == 0){
        return real;
    }
    else{
        return imaginary;
    }
}

