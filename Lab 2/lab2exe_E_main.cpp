/*
 * Main program file.
 *
 * ENSF 614 Lab 2 Exercise E
 */

#include <iostream>
#include <stdlib.h>
using namespace std;
#include "lab2exe_E.h"

double read_double_only(void);
/*
 *  Read a double, then skip to the end of a line of input.
 *
 *  REQUIRES
 *     User has been prompted to enter a double.
 *  PROMISES
 *     If user enters bad input, exit is called with an arg of 1.
 *     Otherwise:
 *        Characters following the int are discarded up to
 *        end-of-line or end-of-file, whichever is first.
 *        Return value is the double that was read.
 */

int main(void)
{
    cplx w, z;            /* entered by user */
    cplx sum;            /* sum of w and z */
    cplx subtract, product;
    cout << "This programs needs values for complex numbers w and z.\n";

    cout << "  Please enter the real part of w     : ";
    w.real = read_double_only();

    cout << "  Please enter the imaginary part of w: ";
    w.imag = read_double_only();

    cout << "  Please enter the real part of z     : ";
    z.real = read_double_only();
    cout << "  Please enter the imaginary part of z: ";
    z.imag = read_double_only();

    cout << "\nw is (" << w.real << ") + j(" << w.imag << ")\n";
    cout << "z is (" << z.real << ") + j(" << z.imag << ")\n";

    sum = cplx_add(w, z);
    cplx_subtract(w, z, &subtract);
    cplx_multiply(&w, &z, &product);

    cout << "\nsum is: (" << sum.real << ") + j(" << sum.imag << ")\n";
    cout << "\ndifference: is (" << subtract.real << ") + j(" << subtract.imag << ")\n";
    printf("\nproduct is: (%f) + j(%f)", product.real, product.imag);
    return 0;
}


double read_double_only(void)
{
    double value_read;
    int char_code;

    if (!(cin >> value_read)) {
        cout << "Error trying to read in a double.  Program terminated.\n";
        exit(1);
    }

    return value_read;
}
