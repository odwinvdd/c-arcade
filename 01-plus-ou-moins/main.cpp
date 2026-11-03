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
    int essai = 0;
    
    std::cout << "Bienvenue au jeu du Plus ou Moins !"<< std::endl;
    do{ 
        std::cout << "votre essai est ";
        std::cin >> proposition;
        essai++;
        resultat = comparer(proposition, secret);
        if (resultat ==-1){
            std::cout << "Plus grand !" << std::endl;
        } else if (resultat ==1){
            std::cout  << "Plus petit !" << std::endl;
        } 
    } while(resultat !=0);
    std::cout << "Le nombre d'essais est de " << essai << std::endl;
        std::cout << "Trouvé en " << essai << " essais. ";

    if (essai < 5) {
        std::cout << "Devin !" << std::endl;
    } else if (essai < 8) {
        std::cout << "Pas mal !" << std::endl;
    } else {
        std::cout << "Tu y es arrivé !" << std::endl;
    }
    return 0;
}

