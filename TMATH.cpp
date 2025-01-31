#include "t_math.hpp"
#include <ctime>
#include <iostream>
#include <chrono>
#include <iomanip>
#include <fstream>
using namespace std;
using namespace std::chrono;
void loop()
{
    double a = 0;
    cout << "==================" << endl;
    cin >> a;
    auto start = high_resolution_clock::now();
    cout << "W(a):" << setprecision(7) << t_math::ProductLogAlternativeBranch(a) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "execution time:" << duration.count() / 1e+6 << endl;
    loop();
};
int main()
{
    ofstream file("outputs_li.txt");
    double a = -0.01;
    double t = 10;
    std::cout << t_math::li(2) << endl;
    while(t > 0)
    {
        if(t!=1) {
        file << "(" << setprecision(7) << t << "," << t_math::gamma(t) << ")" << endl;
        }
        t+=a;
    }
    file.close();

    return 0;
}
