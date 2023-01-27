/*
 *  lab2exe_D.cpp
 *  ENSF 614 Lab 2 Exercise D
 */

#include <iostream>
#include <cstring>
using namespace std;

struct Course {
    char dept[5];
    int number;
};

struct Course func1(void);

void func2(struct Course *p);


int main(void)
{
    Course alpha = { "ENGG", 213 } ;
    Course beta = { "PHYS", 259 } ;
    Course *psc;
    int *pi;

    cout << "A pointer to int occupies " <<  (int) sizeof(pi) << " bytes.\n";
    cout << "A struct course occupies " << (int) sizeof(alpha) << " bytes.\n";
    cout << "A pointer to struct course occupies " << (int) sizeof(psc) << " bytes.\n";

    pi = &(alpha.number);
    *pi = 233;
    psc = &beta;
    psc->number = 269;

    /* point one */

    alpha = func1();
    cout << "The values in struct alfph are: " << alpha.dept << " and " << alpha.number << "\n";
    return 0;
}

struct Course func1(void)
{
    struct Course result;

    strcpy(result.dept, "ENCM");

    /* point two */

    result.number = 339;
    return result;
}
