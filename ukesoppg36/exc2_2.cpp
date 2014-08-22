using namespace std;
#include <cstdlib>
#include <cmath>
#include <iostream>
int main (int argc, char* argv[])
{
    double N, n, sum_up, sum_down; //, ns
    // convert command line argument to double.
    N = atof(argv[1]);

    sum_up = 0;
    sum_down = 0;

    //Generating sum from n=1 to n=N
    for (n=1; n <= N; n++){
    sum_up += 1./n;
    }


    // Printing
    cout << "Sum of 1/n from n=1 to n=N:" << sum_up << endl;


    //Generating sum from n=N to n=1
    sum_down = 0;
    for (n=N; n >=1; n--){
    sum_down += 1./n;
    }

    //Printing
    cout << "Sum of 1/n from n=N to n=1:" << sum_down << endl;
    return 0;
}
