#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const int GoleminaNa_SpilKarti = 54; // vklucuvajki dva dzokeri
const int GoleminaNa_Simboli = 13;

string simboli[4] = {"Srce", "Dijamant", "Detelinka", "List"};
string Poeni[GoleminaNa_Simboli+2] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Dzandar", "Kralica", "Kral", "Dzoker", "Dzoker"};

// shuffleSpilKarti funkcija za mesanje na spil karti
void shuffleSpilKarti(string SpilKarti[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        string temp = SpilKarti[i];
         SpilKarti[i] =  SpilKarti[j];
         SpilKarti[j] = temp;
    }
}

int main() {
    string SpilKarti[GoleminaNa_SpilKarti ];
    int index = 0;
    
    // vrti niz sekoj simbol i dodava karti vo spilot
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < GoleminaNa_Simboli; j++) {
            SpilKarti[index] = Poeni[j] + " of " + simboli[i];
            index++;
        }
    }
    
    // dodava dva dzokeri na krajot od nizata Spil_Karti
    SpilKarti[index] = "Joker";
    index++;
    SpilKarti[index] = "Joker";
    index++;

    // go pecati spilot na karti po red
    cout << "Spil na karti podredeni po red:" << endl;
    for (int i = 0; i < GoleminaNa_SpilKarti; i++) {
        cout << SpilKarti[i] << endl;
    }
    
    // Ismesan spil na karti
    srand(time(NULL)); // initialize random seed
    shuffleSpilKarti(SpilKarti, GoleminaNa_SpilKarti);
    
    // Ispecati go izmesaniot spilot na karti 
    cout << endl << "Izmesan spil na karti:" << endl;
    for (int i = 0; i < GoleminaNa_SpilKarti; i++) {
        cout << SpilKarti[i] << endl;
    }
    
    return 0;
}

/*Програмата најпрво декларира две константи GoleminaNa_SpilKarti и GoleminaNa_Simboli, што ја претставуваат големината на шпилот на карти и бројот на симболи на картите.
Потоа декларира две низи simboli и Poeni, што ги претставуваат четирите симболи на картите и 13-те вредности на картите (плус два џокери). Програмата дефинира функција наречена shuffleSpilKarti,
која зема низа и ја меша низата користејќи го алгоритмот за мешање, алгоритмот работи така што се повторува низ низата карти од последниот до првиот елемент, заменувајќи го секој елемент со случајно
избран елемент што доаѓа пред него во низата. Потоа програмата декларира низа SpilKarti со големина GoleminaNa_SpilKarti за складирање на шпилот карти, користи две вгнездени јамки за повторување на
секој симбол и вредност, и додавање на секоја карта на шилот со поврзување на соодветните симболи и низи со стрингови. Откако ќе се додадат 52 карти, програмата додава два џокери во шпилот со карти со 
додавање на низата „Џокер“. Потоа програмата го печати подредениот шпил на карти. За мешање на палубата, програмата ја повикува функцијата shuffleSpilKarti,а потоа ја печати секоја карта во измешан шпил. */