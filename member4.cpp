#include <iostream>
#include <string>
using namespace std;

struct Lenda {
    string emri;
    string dita;
    string ora;
};

class Orari {
private:
    Lenda l[20];
    int n;

public:
    Orari() { n = 0; }

    int numriLendeve() const {
        return n;
    }
};

void menu() {
    cout << "\n=== Menaxhimi i Orarit (FIEK) ===\n";
    cout << "1) Shto lende\n";
    cout << "2) Shfaq orarin\n";
    cout << "3) Kerko sipas dites\n";
    cout << "4) Fshi lende\n";
    cout << "0) Dil\n";
}

int main() {
    Orari o;
    int z;

    cout << "=== Testimi i branch feature/menu-main ===\n";

    do {
        menu();
        cout << "Zgjedh: ";
        cin >> z;

        // Branch-i 4 nuk ka funksionet e plota, ato do të jenë merge nga branch-et e tjera
        if (z == 1) o.shto();
        else if (z == 2) o.shfaq();
        else if (z == 3) o.kerkoSipasDites();
        else if (z == 4) o.fshi();

    } while (z != 0);

    cout << "Numri total i lendeve: " << o.numriLendeve() << "\n";
    return 0;
}