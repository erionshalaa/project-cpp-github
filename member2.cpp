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

    void kerkoSipasDites() const {
        if (n == 0) {
            cout << "Nuk ka lende.\n";
            return;
        }

        string d;
        cout << "Shkruaj diten: ";
        cin.ignore();
        getline(cin, d);

        bool gjetur = false;
        for (int i = 0; i < n; i++) {
            if (l[i].dita == d) {
                cout << l[i].emri << " - " << l[i].ora << "\n";
                gjetur = true;
            }
        }

        if (!gjetur)
            cout << "Nuk ka lende per kete dite.\n";
    }
};

// Main i thjeshtë për testim
int main() {
    Orari o;
    cout << "=== Testimi i branch feature/kerko-dite ===\n";
    o.kerkoSipasDites(); // thirrja e funksionit për testim
    return 0;
}

