#include <iostream>
#include <cstdlib>


using std::cout;
using std::endl;
void MCMC(float N);

int main(){
    int i,
      srand48(time(0));
      lista = drand48()-0.5;
    for (int i=0;i<N;i++)
        {
        propuesta  = lista[i-1] + np.random.normal(loc=0.0, scale=sigma_delta)
        r = min(1,f(propuesta)/f(lista[i-1]))
        alpha = np.random.random()
        if(alpha<r):
            lista.append(propuesta)
        else:
            lista.append(lista[i-1])
    return np.array(lista)