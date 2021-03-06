#include <iostream>
#include<cstdlib>

// ./a.out -> argc=1, argv =["./a.out"]
// ./a.out 10 -> argc = 2, argv =["./a.out", "10"]

int main(int argc, char **argv)
{
    int a = std::atoi(argv[1]);
    a = 2*a;

    std::cout << "Hola mundo";
    std::cout << "2*a: "<< a << std::endl;
    return 0;
}
