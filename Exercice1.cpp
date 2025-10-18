#include <iostream>
#include <string>
using namespace std;

class Etudiant {
private:
    string nom;
    string cin;
    float note1;
    float note2;
    float note3;

public:

    void setNom(const string& n) {
        nom = n;
    }
    void setCin(const string& c) {
        cin = c;
    }
    void setNote1(float n1) {
        note1 = n1;
    }
    void setNote2(float n2) {
        note2 = n2;
    }
    void setNote3(float n3) {
        note3 = n3;
    }
    string getNom() const {
        return nom;
    }
    string getCin() const {
        return cin;
    }
    float getNote1() const {
        return note1;
    }
    float getNote2() const {
        return note2;
    }
    float getNote3() const {
        return note3;
    }

    float calculMoyenne() const {
        return (note1 + note2 + note3) / 3.0;
    }


    void afficher() const {
        cout << "Nom : " << nom << endl;
        cout << "CIN : " << cin << endl;
        cout << "Notes : " << note1 << " | " << note2 << " | " << note3 << endl;
        cout << "Moyenne : " << calculMoyenne() << endl;
    }
};

int main() {
    Etudiant e;
    e.setNom("Lamia");
    e.setCin("AB123456");
    e.setNote1(14);
    e.setNote2(16);
    e.setNote3(18);

    e.afficher();

    return 0;
}

