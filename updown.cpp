#include<iostream>
#include<cmath>
#include<cstdlib>

typedef float REAL;

REAL sumup(int N);
REAL sumdown(int N);

int main(int argc, char **argv)
{
    std::cout.precision(8); std::cout.setf(std::ios::scientific);
    const int NMAX = std::atoi(argv[1]);

    for (int N =1; N < NMAX; N++){
        REAL s1 = sumup(N);
        REAL s2 = sumdown(N);
        std::cout <<N
                  << "\t" << s1 <<"\t" << s2
                  << "\t" << std::fabs(s1-s2)/s2
                  << "\n";
    }
    return 0;
}
REAL sumup(int N)
{
    REAL suma = 0;
    for (int n = 1; n <= N; ++n){
        suma +=1.0/n;
    }
    return suma;
}
REAL sumdown(int N)
{
    REAL suma=0;
    for (int n = N; n >= 1; ++n){
        suma +=1.0/n;
    }
    return suma;
}
