/*4.1 Define a class representing a CartesianComplexNumber. 
Define member functions: add, subtract, multiply, divide, 
conjugate, modulus, argument, print in Cartesian and polar 
form*/

#include <iostream>
#include <math.h>
#include <complex>
using namespace std;
class Complex
{
public:
    int real, r;
    int imag, jr, ji, ig;

    void c()
    {
        cin >> jr >> ji;
    }

    void setdec()
    {
        cin >> r;
        cin >> ig;
    }
    void setvalue()
    {
        cin >> real;
        cin >> imag;
    }
    

    void sum(Complex c1, Complex c2) /* Function to add two complex numbers */
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
        if (c1.imag >= 0)
            printf("Sum of the complex numbers = %d + %di\n", real, imag);
        else
            printf("Sum of the complex numbers = %d %di\n", real, imag);
    }

    void sub(Complex c1, Complex c2)
    {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
        if (c1.imag >= 0)
            printf("Difference of the complex numbers = %d + %di\n", real, imag);
        else
            printf("Difference of the complex numbers = %d %di\n", real, imag);
    }

    void mul(Complex m1, Complex m2)
    {
        real = m1.real * m2.real - m1.imag * m2.imag;
        imag = m1.real * m2.imag + m1.imag * m2.real;
        printf("(%d + %di)\n", real, imag);
    }

    void div(Complex d1, Complex d2)
    {
        int x, y, z;
        x = d1.r * d2.r + d1.ig * d2.ig;
        y = d1.ig * d2.r - d1.r * d2.ig;
        z = d2.r * d2.r + d2.ig * d2.ig;
        if (x % z == 0 && y % z == 0)
        {
            if (y / z >= 0)
                printf("Division of the complex numbers = %d + %di\n", x / z, y / z);
            else
                printf("Division of the complex numbers = %d %di\n", x / z, y / z);
        }
        else if (x % z == 0 && y % z != 0)
        {
            if (y / z >= 0)
                printf("Division of two complex numbers = %d + %d/%di\n", x / z, y, z);
            else
                printf("Division of two complex numbers = %d %d/%di\n", x / z, y, z);
        }
        else if (x % z != 0 && y % z == 0)
        {
            if (y / z >= 0)
                printf("Division of two complex numbers = %d/%d + %di\n", x, z, y / z);
            else
                printf("Division of two complex numbers = %d %d/%di\n", x, z, y / z);
        }
        else
        {
            if (y / z >= 0)
                printf("Division of two complex numbers = %d/%d + %d/%di\n", x, z, y, z);
            else
                printf("Division of two complex numbers = %d/%d %d/%di\n", x, z, y, z);
        }
    }
};
int main()
{
    Complex c1, c2, c3, j1, j3;
    Complex m1, m2, m3, d1, d2, d3;
    float d, re, m;
    cout << "Enter real and imaginary part of first complex number" << endl;
    c1.setvalue();
    cout << "Enter real and imaginary part of second complex number" << endl;
    c2.setvalue();
    cout << "Sum of two complex numbers is" << endl;
    c3.sum(c1, c2);
    cout << "Substraction of two complex numbers is" << endl;

    
    c3.sub(c1, c2);
    cout << "Enter real and imaginary part of first complex number to find multiplication" << endl;
    m1.setvalue();
    cout << "Enter real and imaginary part of second complex number to find multiplication" << endl;
    m2.setvalue();
    cout << "Multiplication of two complex numbers is" << endl;
    m3.mul(m1, m2);
    cout << "Enter real and imaginary part of first complex number to find division" << endl;
    d1.setdec();
    cout << "Enter real and imaginary part of second complex number to find division" << endl;
    d2.setdec();
    d3.div(d1, d2);
    cout << "Enter the real and imagenery number you want the conjugate of" << endl;
    j3.c();
    complex<double> mycomplex(10.0, 2.0);
    cout << "The conjugate of " << mycomplex << " is: ";
    cout << conj(mycomplex) << endl;
    cout << "The argument of " << mycomplex << " is: ";
    cout << arg(mycomplex) << endl;
    cout << "Enter thr real part" << endl;
    cin >> re;
    cout << "Enter thr imaginary part" << endl;
    cin >> m;
    d = sqrt((re * re) + (m * m));
    printf(" Modulus of the complex number |z|  = %f\n", d);
    double x, y, z;
    cout << "Enter the value of real part to find the polar form\n" << endl;
    cin >> x;
    cout << "\nEnter the value of imaginary part to find the polar form" << endl;
    cin >> y;
    z = y;

    //If "-" Operator
    y = -1 * y;

    double r = sqrt(x * x + y * y);
    double t = atan(y / x);
    t = t * 180 / 3.14;
    r = round(r * 1000) / 1000;
    t = ceil(t);
    printf("\nPolar representation (z): %.0f ( cos %0.f (deg) + i sin %.0f (deg))", r, t, t);

    //If "+" Operator
    z = z * 1;
    r = sqrt(x * x + z * z);
    t = atan(z / x);
    t = t * 180 / 3.14;
    r = round(r * 1000) / 1000;
    t = ceil(t);
    printf("\nPolar representation (z): %.0f ( cos %0.f (deg) + i sin %.0f (deg))", r, t, t);

    return 0;
}