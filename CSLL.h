#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define head(D)((D).head)
#define tail(D) ((D).tail)

typedef struct element *adr;

struct infotype{
    string Artis, Judul;
};

struct element{
    infotype info;
    adr next;
};

struct playlistLagu{
    adr head, tail;
};

void createPlaylist_1301213072(playlistLagu &Q);
void newElement_1301213072(infotype laguBaru, adr &pLagu);
void enqueue_1301213072(playlistLagu &Q, adr pLagu);
void dequeue_1301213072(playlistLagu &Q, adr &pLagu);
void showSemuaLagu_1301213072(playlistLagu Q);

#endif // CSLL_H_INCLUDED
