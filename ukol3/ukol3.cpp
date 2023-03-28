// ukol3.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "ExtendedArray.h"
using namespace std;
int main()
{
    ExtendedArray e1 = { 5 };
    ExtendedArray e2 = { 4 };
    
    e1.add(5);
    e1.add(4);
    e1.add(3);
    e1.add(2);
    e1.add(1);
    e1.add(0);
    cout << "Array 1: ";
    for (int i = 0; i < e1.getCount(); i++) {
        cout << e1.getAt(i) << " ";
    }
    cout << endl;

    e2.add(6);
    e2.add(3);
    e2.add(2);
    e2.add(8);
    cout << "Array 2: ";
    for (int i = 0; i < e2.getCount(); i++) {
        cout << e2.getAt(i) << " ";
    }
    cout << endl;


    ExtendedArray e3 = { *e1.merge(&e2) };
    cout << "Array 3 (merge 1 2): ";
    for (int i = 0; i < e3.getCount(); i++) {
        cout << e3.getAt(i) << " ";
    }
    cout << endl;

    ExtendedArray e4 = { *e1.intersect(&e2) };
    cout << "Array 4 (intersect 1 2): ";
    for (int i = 0; i < e4.getCount(); i++) {
        cout << e4.getAt(i) << " ";
    }
    cout << endl;

    return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
