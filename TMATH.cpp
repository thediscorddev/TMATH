#include "t_math.hpp"
#include <ctime>
#include <iostream>
#include <chrono>
using namespace std;
using namespace t_math;
using namespace std::chrono;
int main() {
 cout << "==============\ngamma(x) test" << endl;
    double a = 0;
    cin >> a;
    auto start = high_resolution_clock::now();
    cout << gamma(a) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout <<"execution time:" << duration.count()/1e+6 <<endl;
    main();
    
return 0;
}
