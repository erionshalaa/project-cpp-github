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

    void fshi() {
        if (n == 0) {
            cout << "Nuk ka lende per fshirje.\n";
            return;
        }

        for (int i = 0; i < n; i++) {
            cout << i + 1 << ") " << l[i].emri
                << " | " << l[i].dita
                << " | " << l[i].ora << "\n";
        }

        int x;
        cout << "Zgjedh numrin per fshirje: ";
        cin >> x;

        if (x < 1 || x > n) {
            cout << "Zgjedhje jo valide.\n";
            return;
        }

        for (int i = x - 1; i < n - 1; i++) {
            l[i] = l[i + 1];
        }
        n--;
        cout << "U fshi.\n";
    }
};


int main() {
    Orari o;
    cout << "=== Testimi i branch feature/fshi ===\n";
    o.fshi();
    return 0;
}
