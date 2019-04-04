#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include <cmath>

using std::cout;
using std::endl;
void MCMC(int N);float normal(float x);
int main()
{
    srand48(time(0));
    int N = 1000;
    MCMC(N);
    return 0;
    
}
void MCMC(int N)
{
    float old=drand48() - 0.5;
    float nuevo, r;    
    for(int i=0; i<N;i++)
    {
        r=1;
        nuevo=old+drand48()-0.5;
        if(normal(nuevo)/normal(old) < r)
        {
            r=(normal(nuevo)/normal(old) < r);
        }
        if(r > drand48())
        {
            old=nuevo;
        }
        cout << old << endl;    
    }    
}
float normal(float x)
{
    float expo=x*x;
    return exp(-expo);
}
