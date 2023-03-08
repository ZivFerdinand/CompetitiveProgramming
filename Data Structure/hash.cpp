#include <iostream>

using namespace std;

int main()
{
    float mtk, inggris, indo, pkn;
    float rataRata;

    char grade;
    cout << "Masukkan nilai matematika: ";
    cin >> mtk;

    cout << "Masukkan nilai bahasa Inggris: ";
    cin >> inggris;

    cout << "Masukkan nilai bahasa Indonesia: ";
    cin >> indo;

    cout << "Masukkan nilai pkn: ";
    cin >> pkn;

    rataRata = (mtk + inggris + indo + pkn) / 4;
    if(rataRata <= 70)
    {
        grade = 'D';
    }
    else if(rataRata <= 80)
    {
        grade = 'C';
    }
    else if(rataRata <= 90)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }

    if(rataRata > 100)
        cout << "ERROR!\n";
    else
    {
        cout << "Grade: " << grade;
    }
    
}