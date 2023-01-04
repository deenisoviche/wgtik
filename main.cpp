#include "CSLL.h"
int main()
{
    playlistLagu Q;
    createPlaylist_1301213072(Q);

    int N = 7;
    infotype Lagu;
    adr P;


    for (int i = 1; i <= N; i++){
        cout << "Artis : ";
        cin >> Lagu.Artis;
        cout << "Judul : ";
        cin >> Lagu.Judul;
        cout << endl;

        newElement_1301213072(Lagu, P);
        enqueue_1301213072(Q, P);
    }
    cout << "============ Menampilkan List ===========" << endl;
    showSemuaLagu_1301213072(Q);

    dequeue_1301213072(Q, P);

    cout << "============ Menampilkan List yang telah dihapus ==============" << endl;
    showSemuaLagu_1301213072(Q);

    return 0;
}
