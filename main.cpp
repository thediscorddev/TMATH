#include "main.h"

// a sample exported function
template <typename T> DLL_EXPORT pow(T num, int power) {
int sum = 1;
};
int DLL_EXPORT factorial(unsigned int n) {
if(n==1 || n == 0) return 1;
if(n > 1) return n*factorial(n-1);
};
void DLL_EXPORT SomeFunction(const LPCSTR sometext)
{
    MessageBoxA(0, sometext, "DLL Message", MB_OK | MB_ICONINFORMATION);
};
template <typename T>
T DLL_EXPORT sin(T value) {
double sum = 0;
for(int i = 0; i< 20; i++) {
sum+=0;
};
};
extern "C" DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
