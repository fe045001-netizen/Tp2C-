#include <iostream>
#include <string>
using namespace std;


class Etudiant {
private:
    string nom;
    string cin;
    float note;

public:
 
    void setNom(const string& n) {
        nom = n;
    }
    void setCin(const string& c) {
        cin = c;
    }
    void setNote(float n) {
        note = n;
    }

 
    string getNom() const {
        return nom;
    }
    string getCin() const {
        return cin;
    }
    float getNote() const {
        return note;
    }


    void afficher() const {
        cout << "Étudiant : " << nom << " (CIN: " << cin << ") - Note : " << note << endl;
    }
};

class Filiere {
private:
    string nomFiliere;
    Etudiant etudiant;  

public:
   
    void setNomFiliere(const string& nom) {
        nomFiliere = nom;
    }
    void setEtudiant(const Etudiant& e) {
        etudiant = e;
    }

    void afficher() const {
        cout << "Filière : " << nomFiliere << endl;
        etudiant.afficher();
    }
};


int main() {
    Etudiant e;
    e.setNom("Yassine");
    e.setCin("C78912");
    e.setNote(15.5);

    Filiere f;
    f.setNomFiliere("Génie Informatique");
    f.setEtudiant(e);

    f.afficher();

    return 0;
}

