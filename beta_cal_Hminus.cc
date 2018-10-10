// This macro is to calculate the gamma which means Lorentz factor from velocity beta //
// This is made on July 3, 2018. by H. Yasuda //

#include <fstream>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <sstream>
#include <math.h>
using namespace std;


//SETTING PARAMETER//
double c = 299792458; // light speed [m/s]
// double m = 105.65837; // mass of muon [MeV/c^2]
double m = 1000.; // mass of Hminus [MeV/c^2]
// double m = 910.; // mass of Hminus [MeV/c^2]


int main(){

    cout << "%%%%% START %%%%%" << endl;

    double mom = 0;
    cout << "Please enter the mom : ";
    scanf("%lf",&mom);

    cout << "INPUT : mom = " << mom << endl;

    double beta = 0;
    beta = mom / sqrt(m*m + mom*mom);
    cout << "beta  = " << beta << endl;

    double gamma = 0;
    gamma = 1 / sqrt(1-beta*beta);
    cout << "gamma = " << gamma << endl;


    cout << "%%%%% FINISH %%%%%" << endl;

}
