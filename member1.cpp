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

    void shto() {
        if (n >= 20) {
            cout << "Orari eshte plot.\n";
            return;
        }

        cout << "Emri i lendes: ";
        cin.ignore();
        getline(cin, l[n].emri);

        cout << "Dita: ";
        getline(cin, l[n].dita);

        cout << "Ora: ";
        getline(cin, l[n].ora);

        n++;
        cout << "U shtua.\n";
    }

    void shfaq() const {
        if (n == 0) {
            cout << "Nuk ka lende.\n";
            return;
        }
        for (int i = 0; i < n; i++) {
            cout << i + 1 << ") " << l[i].emri
                << " | " << l[i].dita
                << " | " << l[i].ora << "\n";
        }
    }
};

int main() {
    Orari o;
    int z;

    cout << "=== Testimi i branch feature/shto-shfaq ===\n";

    do {
        cout << "\n1) Shto lende\n2) Shfaq orarin\n0) Dil\n";
        cout << "Zgjedh: ";
        cin >> z;

        if (z == 1) o.shto();
        else if (z == 2) o.shfaq();

    } while (z != 0);

    return 0;
}
