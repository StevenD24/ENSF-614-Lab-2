/*
 *  File Name: lab2exe_E.cpp
 *  Assignment: ENSF 614 Lab 2 Exercise E
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Jan 23, 2023
 */

#include "lab2exe_E.h"

cplx cplx_add(cplx z1, cplx z2)
{
    cplx result;

    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;
    return result;
}

void cplx_subtract(cplx z1, cplx z2, cplx *difference) {
    (*difference).real = z1.real - z2.real;
    (*difference).imag = z1.imag - z2.imag;
}

void cplx_multiply(const cplx *pz1, const cplx *pz2, cplx *product) {
    double a = (*pz1).real;
    double b = (*pz1).imag;
    double c = (*pz2).real;
    double d = (*pz2).imag;

    (*product).real = (a*c - b*d);
    (*product).imag = (a*d + b*c);
}