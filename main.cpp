#include <iostream>
#include "LinearnaRovnica.h"

int main() {

    LinearnaRovnica rovnica1(-1.0f , -2.0f);
    LinearnaRovnica rovnica2(1.0f,'a');
    LinearnaRovnica rovnica3(2.0f,'b');
    LinearnaRovnica rovnica4;


    rovnica1.vypisRovnicu();
    rovnica1.vypisKoren();

    rovnica2.vypisRovnicu();
    rovnica2.vypisKoren();

    rovnica3.vypisRovnicu();
    rovnica3.vypisKoren();

    rovnica4.vypisRovnicu();
    rovnica4.vypisKoren();

    return 0;
}

LinearnaRovnica::LinearnaRovnica()
{
    std::cout << "Zadaj koeficient A: ";
    std::cin>>koeficientA;
    std::cout << "Zadaj koeficient B: ";
    std::cin>>koeficientB;
}

LinearnaRovnica::LinearnaRovnica(float varA, float varB):koeficientA(varA),koeficientB(varB){}


LinearnaRovnica::LinearnaRovnica(float koeficient, char nazov)
{
    if(nazov=='a')
    {
        koeficientA = koeficient;
        std::cout << "Zadaj koeficient B: ";
        std::cin>>koeficientB;
    }
    else if(nazov=='b')
    {
        koeficientB = koeficient;
        std::cout << "Zadaj koeficient A: ";
        std::cin>>koeficientA;
    }
}

void LinearnaRovnica::vypisRovnicu() const
{
    std::cout<<"Rovnica: " << koeficientA << "x" << (koeficientB<0 ? ' ':'+') <<  koeficientB << " = 0";
}
void LinearnaRovnica::vypisKoren() const
{

    std::cout << " Koren rovnice je: " <<  -koeficientB/koeficientA<<std::endl;
}



