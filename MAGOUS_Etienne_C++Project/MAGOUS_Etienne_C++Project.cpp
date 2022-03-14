// MAGOUS_Etienne_C++Project.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

void Damage(int health) {
    health -= 2;
}

void DamageReference(int& heath) {
    heath -= 2;
}

void DamagePointedObject(int* heath) {
    *heath -= 3;
}

int main()
{
    cout << "Hello World! hey\n" << endl;
    int life = 10;
    cout << "the value " << life << " is stored at memory address : " << &life << endl;
    Damage(life);
    cout << life << endl;
    DamageReference(life);
    cout << life << endl;
    DamagePointedObject(&life);
    cout << life << endl;
}

