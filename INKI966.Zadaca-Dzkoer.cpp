//INKI966 Marija Stojanovska 
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <string>

using namespace std;
// Struktura sto gi pretstavuva kartite za igranje
struct Karta {
    string simboli; //simbol na karti(pr. „Srce“, „Detelinka“, „Dijamant“, „List“)
    int bodovi; //vrednost na kartite (pr. 1,2,3....13)
};

// vektor koj gi sodrzi site karti vo spilot
vector<Karta> spil = {
    {"Srce", 1}, {"Detelinka", 1}, {"Dijamant", 1}, {"List", 1},
    {"Srce", 2}, {"Detelinka", 2}, {"Dijamant", 2}, {"List", 2},
    {"Srce", 3}, {"Detelinka", 3}, {"Dijamant", 3}, {"List", 3},
    {"Srce", 4}, {"Detelinka", 4}, {"Dijamant", 4}, {"List", 4},
    {"Srce", 5}, {"Detelinka", 5}, {"Dijamant", 5}, {"List", 5},
    {"Srce", 6}, {"Detelinka", 6}, {"Dijamant", 6}, {"List", 6},
    {"Srce", 7}, {"Detelinka", 7}, {"Dijamant", 7}, {"List", 7},
    {"Srce", 8}, {"Detelinka", 8}, {"Dijamant", 8}, {"List", 8},
    {"Srce", 9}, {"Detelinka", 9}, {"Dijamant", 9}, {"List", 9},
    {"Srce", 10}, {"Detelinka", 10}, {"Dijamant", 10}, {"List", 10},
    {"Srce", 11}, {"Detelinka", 11}, {"Dijamant", 11}, {"List", 11},
    {"Srce", 12}, {"Detelinka", 12}, {"Dijamant", 12}, {"List", 12},
    {"Srce", 13}, {"Detelinka", 13}, {"Dijamant", 13}, {"List", 13}
};

//funkcija koja gi mesa kartite 
void MesanjeNaSpil() {
	//,,seed" generator na slucaen broj vo odredeno vreme
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    // mesanje na spilot so generator na slucaen broj
    shuffle(spil.begin(), spil.end(), default_random_engine(seed));
}
	//funkcija koja gi deli kartite na igracite
void namesteniKarti(int BrNaIgraci) {
	//pecatenje na spilot karti po redosled (broj i simbol)
    cout << "Karti podredeni po simbol i broj: ";
    for (auto& Karta : spil) {
        cout << Karta.bodovi << Karta.simboli << " ";
    }
    cout << endl;
	//mesanje na spilot karti
    MesanjeNaSpil();
    vector<vector<Karta>> Igraci(BrNaIgraci);

	//pecatenje na karti posle mesanje na spilot
    cout << "Karti posle mesanje: ";
    for (auto& Karta : spil) {
        cout << Karta.bodovi << Karta.simboli << " ";
    }
    cout << endl;

    int igrac = 0;
    for (auto& Karta : spil) {
       Igraci[igrac].push_back(Karta); //dodaj ja kartata na moemntalniot igrac
        igrac = (igrac + 1) % BrNaIgraci; //zgolemi go brojacot za eden 1
    }

    for (int i = 0; i < BrNaIgraci; i++) {
        cout << "Igrac " << i + 1 << ": ";
        for (auto& Karta : Igraci[i]) {
            cout << Karta.bodovi << Karta.simboli << " "; //pecatenje vrednost i simbolot na kartata 
        }
        cout << endl;
    }
}

int main() {
    namesteniKarti(4); //povikuvanje na funkcija namestiKarti, i broj na igraci 4
    return 0;
}
