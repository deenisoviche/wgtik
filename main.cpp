#include "DLL.H"

int main()
{
    List D;
    createList_1301213072(D);

    insertAscending_1301213072(D, 25);
    printList_1301213072(D);

    insertAscending_1301213072(D, 10);
    printList_1301213072(D);

    insertAscending_1301213072(D, 10);
    printList_1301213072(D);

    insertAscending_1301213072(D, 25);
    printList_1301213072(D);

    insertAscending_1301213072(D, 25);
    printList_1301213072(D);

    insertAscending_1301213072(D, 25);
    printList_1301213072(D);

    insertAscending_1301213072(D, 15);
    printList_1301213072(D);

    deleteElm_1301213072(D, 25);
    printList_1301213072(D);

    deleteElm_1301213072(D, 15);
    printList_1301213072(D);

    deleteElm_1301213072(D, 10);
    printList_1301213072(D);

    cout << endl << "====================" << endl << endl;

    bool F = findElement_1301213072(D, 10);
    cout << "Find 10 : " << F << endl;

    int O = frequencyOfElm_1301213072(D, 10);
    cout << "Frequency 10 : " <<  O << endl;

    O = frequencyOfElm_1301213072(D, 25);
    cout << "Frequency 25 : " <<  O << endl;

    O = frequencyOfElm_1301213072(D, 2);
    cout << "Frequency 2 : " <<  O << endl;
    return 0;
}
