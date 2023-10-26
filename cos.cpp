#include <iostream>
#include <string>
using namespace std;

class Dane {
private:
    int nrAlbumu;
    string imie;
    string nazwisko;
    string wydzial;
    string kierunek;
    int semestr;
    string grupaLaboratoryjna;

public:
  
    Dane(int nr, string name, string sur, string w, string k, int s) : nrAlbumu(nr), imie(name), nazwisko(sur), wydzial(w), kierunek(k), semestr(s) {}


    void ustawGrupe() {
        cout << "Nie wpisano grupy laboratoryjnej. Przydzielam do grupy \"inni\"." << endl;
        grupaLaboratoryjna = "inni";
    }

   
    void wyswietlDane() {
        cout << "Numer albumu: " << nrAlbumu << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Wydzial: " << wydzial << endl;
        cout << "Kierunek: " << kierunek << endl;
        cout << "Semestr: " << semestr << endl;
        cout << "Grupa laboratoryjna: " << grupaLaboratoryjna << endl;
    }
};

int main() {
    int numerAlbumu, semestr;
    string imie, nazwisko, wydzial, kierunek;

    cout << "Podaj numer albumu: ";
    cin >> numerAlbumu;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj wydzial: ";
    cin >> wydzial;
    cout << "Podaj kierunek: ";
    cin >> kierunek;
    cout << "Podaj semestr: ";
    cin >> semestr;

    Dane student(numerAlbumu, imie, nazwisko, wydzial, kierunek, semestr);

    // Pytanie, czy grupa laboratoryjna została wpisana
    string odpowiedz;
    cout << "Czy podano grupe laboratoryjna? (T/N): ";
    cin >> odpowiedz;

    if (odpowiedz == "T" || odpowiedz == "t") {
        cout << "Podaj grupe laboratoryjna: ";
        cin >> student.grupaLaboratoryjna;
    }
    else {
        student.ustawGrupe();
    }

    // Wyświetlenie danych studenta
    student.wyswietlDane();

    return 0;
}
