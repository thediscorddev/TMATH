#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

void DLL_EXPORT SomeFunction(const LPCSTR sometext);
template <typename T> T DLL_EXPORT sin(T value);
int DLL_EXPORT factorial(unsigned int n);
template <typename T> DLL_EXPORT pow(T num, int power);
#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
