#include <cmath>
#include <iostream>
int main()
{
    #pragma omp parallel num_threads(1000)
    {
        #pragma omp for
        for(int n=0; n<10; ++n) printf(" %d", n);
    }
}
