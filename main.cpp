#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <cstdlib>  // atoi, atof, and somve others
#include <complex>
#include <cmath>

using namespace std;

typedef complex<double> Complex;

Complex I=1i;

#define box_x 500.
#define label_space 150.
#define box_y 300.

static double G=10;
static double dt=0.001;

#include "Star.h"



int main()
{
    stars.push_back(Star(1.+I,0.,10));

    return 0;
}
