#ifndef MOD8_H_INCLUDED
#define MOD8_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(D)((D).first)
#define last(D) ((D).last)

typedef struct element *adr;

struct infotype{
    string Artis, Judul, Genre;
    int Playtime;
};

struct element{
    infotype info;
    adr next;
};

struct ListLagu{
    adr first;
};

void CreateList_1301213072(ListLagu &D);
void newElement_1301213072(infotype laguBaru, adr &PLagu);
void insertLast_1301213072(ListLagu &D, adr PLagu);
void deleteFirst_1301213072(ListLagu &D, adr PLagu);
void showSemuaLagu_1301213072(ListLagu D);

#endif // MOD8_H_INCLUDED
