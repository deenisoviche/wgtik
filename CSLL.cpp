#include "CSLL.h"

void createPlaylist_1301213072(playlistLagu &Q)
{
    head(Q) = NULL;
    tail(Q) = NULL;
}

void newElement_1301213072(infotype laguBaru, adr &PLagu)
{
    PLagu = new element;
    info(PLagu) = laguBaru;
    next(PLagu) = NULL;
}

void enqueue_1301213072(playlistLagu &Q, adr PLagu){

    if (head(Q) == NULL){
        head(Q) = PLagu;
        tail(Q) = PLagu;
    }else{
        next(tail(Q)) = PLagu;
        tail(Q) = PLagu;
    }
}

void dequeue_1301213072(playlistLagu &Q, adr &PLagu){
    if (head(Q) != NULL){
        PLagu = head(Q);
        head(Q) = next(PLagu);
        next(PLagu) = NULL;
    }else{
        cout << "Queue Kosong" << endl;
    }
}

void showSemuaLagu_1301213072(playlistLagu Q)
{
    adr P = head(Q);

    while (P != NULL){
        cout << "Artis : " << info(P).Artis << endl;
        cout << "Judul : " << info(P).Judul << endl << endl;

        P = next(P);
    }
}
