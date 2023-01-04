#include "MOD8.h"

int main()
{
    ListLagu D;
    int N = 7;
    infotype Lagu;
    adr P;

    CreateList_1301213072(D);

    for (int i = 1; i <= N; i++){
        cout << "Artis : ";
        cin >> Lagu.Artis;
        cout << "Judul : ";
        cin >> Lagu.Judul;
        cout << "Genre : ";
        cin >> Lagu.Genre;
        cout << "Playtime : ";
        cin >> Lagu.Playtime;
        cout << endl << endl;

        newElement_1301213072(Lagu, P);
        insertLast_1301213072(D, P);
    }
    cout << "============ Menampilkan List ===========" << endl;
    showSemuaLagu_1301213072(D);

    deleteFirst_1301213072(D, P);

    cout << "============ Menampilkan List yang telah dihapus ==============" << endl;
    showSemuaLagu_1301213072(D);

    return 0;
}
