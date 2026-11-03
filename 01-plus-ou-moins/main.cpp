#include <iostream>
#include <cstdlib>
#include <ctime>


int tirer_nombre(int min, int max)
{
    return rand() % (max -min +1) + min;
}

int comparer(int proposition, int secret)
{
  if (proposition < secret){
    return -1;
  } else if (proposition > secret) {
    return 1;
  } else {
    return 0;
  }
}

int main()
{
    srand(time(NULL));
    int secret = tirer_nombre(1,100);
    int proposition; 
    int resultat;
    
    std::cout << "Bienvenue au jeu du Plus ou Moins !"<< std::endl;
    do{ 
        std::cout << "votre essai est ";
        std::cin >> proposition;
        resultat = comparer(proposition, secret);
        if (resultat ==-1){
            std::cout << "Plus grand !" << std::endl;
        } else if (resultat ==1){
            std::cout  << "Plus petit !" << std::endl;
        } 
    } while(resultat !=0);
    return 0;
}

