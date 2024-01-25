/**
 * \file programmePrincipal.cpp
 * \brief programme principal à corriger
 * avant de compiler, configurer les options de compilation de manière à avoir 
 * tous les messages d'erreur de compilation y compris toutes les mises en garde:
 * dans les "Properties" du projet, C++ compiler,  Warning Level, More Warnings
 */
#include <iostream>
#include "fonctionsUtilitaires.h"
#include <array>

using namespace std;

int main()
{
    cout << "\n****bug_1\n";
    bug_1();

    cout << "\n****bug_2\n";
    bug_2();

    cout << "\n****bug_3\n";
    bug_3();

    cout << "\n****bug_4\n";
    bug_4();

    cout << "\n****bug_5\n";
    bug_5(5);

    return 0;
}
