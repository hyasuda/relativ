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
double m = 105.65837; // mass of muon [MeV/c^2]


int main(){

    cout << "%%%%% START %%%%%" << endl;

    double beta = 0;
    cout << "Please enter the beta : ";
    scanf("%lf",&beta);

    cout << "INPUT : beta = " << beta << endl;

    double gamma = 0;
    double mom = 0;

    gamma = 1/sqrt(1-beta*beta);
    cout << "gamma = " << gamma << endl;

    mom = gamma*beta*m; // unit is [MeV/c]
    cout << "mom = " << mom << endl;

    cout << "%%%%% FINISH %%%%%" << endl;

}
