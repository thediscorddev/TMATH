#include "t_math.hpp"
#include <ctime>
#include <iostream>
#include <chrono>
#include <iomanip>
using namespace std;
using namespace std::chrono;
void loop()
{
    double a = 0;
    cout << "==================" << endl;
    cin >> a;
    auto start = high_resolution_clock::now();
    cout << "EulerTotient(a):" << setprecision(7) << t_math::EulerTotient(a) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "execution time:" << duration.count() / 1e+6 << endl;
    loop();
};
int main()
{
    cout << "==============\nEulerTotient(a) test" << endl;
    loop();

    return 0;
}
