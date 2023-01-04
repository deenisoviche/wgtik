#include "MOD8.h"

void CreateList_1301213072(ListLagu &D){
    first(D) = NULL;
}

void newElement_1301213072(infotype laguBaru, adr &PLagu){
    PLagu = new element;
    info(PLagu) = laguBaru;
    next(PLagu) = NULL;
}

void insertLast_1301213072(ListLagu &D, adr PLagu){
    adr Q = first(D);

    if (first(D) == NULL){
        first(D) = PLagu;
        next(PLagu) = first(D);
    }else{
        //Q = next(Q);
        while (next(Q) != first(D)){
            Q = next(Q);
        }
        next(Q) = PLagu;
        next(PLagu) = first(D);
    }
}

void deleteFirst_1301213072(ListLagu &D, adr PLagu){
    if (first(D) != NULL){
        PLagu = first(D);
        first(D) = next(PLagu);
        next(PLagu) = NULL;

        adr P = first(D);
        while (next(P) != PLagu){
            P = next(P);
        }
        next(P) = first(D);
    }
}

void showSemuaLagu_1301213072(ListLagu D){
    adr P = first(D);

    cout << info(first(D)).Artis << endl;
    cout << info(first(D)).Judul << endl;
    cout << info(first(D)).Genre << endl;
    cout << info(first(D)).Playtime << endl << endl;

    while (next(P) != first(D)){
        cout << info(P).Artis << endl;
        cout << info(P).Judul << endl;
        cout << info(P).Genre << endl;
        cout << info(P).Playtime << endl << endl;

        P = next(P);
    }
}
