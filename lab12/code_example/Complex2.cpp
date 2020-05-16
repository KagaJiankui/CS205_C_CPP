//
// Created by lenovo on 2019/11/27.
//
// Complex.cpp -- implementing Complex methods
#include <iostream>
#include "Complex2.h"
Complex::Complex():real(0),imag(0)
{

}
Complex::Complex(double re,double im):real(re),imag(im)
{

}
Complex Complex::operator+(const Complex& other)const
{
    double result_real = real + other.real;
    double result_imaginary = imag + other.imag;
    return Complex( result_real, result_imaginary );
}
Complex Complex::operator+(double real)const
{
    double result_real = real + this->real;
    double result_imaginary = imag ;
    return Complex( result_real, result_imaginary );
}
void Complex::Show() const{

    std::cout << real << "+" <<imag<<"i"<<std::endl;
}
