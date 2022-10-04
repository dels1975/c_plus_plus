/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Inserisci primo addendo, intero: ";
    cin >> x;
    cout << "Inserisci secondo addendo, intero: ";
    cin >> y;

    int sum = x + y;

    cout << "la somma di " << x << "+"
         << y
         << " è: ";
    cout << sum;

    return 0;
}