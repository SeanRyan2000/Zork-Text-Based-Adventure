#include <iostream>
using namespace std;

template <class T>
T GetMin(T n1, T n2)
{
        return (n1 <= n2) ? n1 : n2;
}
