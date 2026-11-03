#include <iostream>
#include <cstdlib>
#include <ctime>



int tirer_nombre(int min, int max)
{
    return rand() % (max -min +1) + min;
}

int main()
{
    srand(time(NULL));
    int secret = tirer_nombre(1,100);
    std::cout <<"Le secret est " << secret <<std::endl;

    std::cout << "Bienvenue au jeu du Plus ou Moins !"<< std::endl;
    return 0;
}