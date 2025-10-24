#include <iostream>
using namespace std;

int main() {
    int studentCode;
    int taskVarCount;
    int taskNr;
    
    cout << "Ievadiet jūsu studenta kodu: ";
    cin >> studentCode;
    
    cout << "Ievadiet uzdevumu variantu skaitu: ";
    cin >> taskVarCount;
    
    taskNr = studentCode % taskVarCount;
    
    cout << "\n--- Rezultāts ---" << endl;
    cout << "Studenta kods: " << studentCode << endl;
    cout << "Uzdevumu variantu skaits: " << taskVarCount << endl;
    cout << "Jūsu uzdevuma varianta numurs (taskNr): " << taskNr << endl;
    
    if (taskNr == 0) {
        cout << "\nPiezīme: Ja taskNr ir 0, tad jāpaņem pēdējais uzdevuma variants." << endl;
        cout << "Pēdējais uzdevuma variants būtu: " << taskVarCount << endl;
    }
    
    return 0;
}
