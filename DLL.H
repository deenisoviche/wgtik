#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(D)((D).first)
#define last(D) ((D).last)


typedef int infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList_1301213072(List &D);
adr createElement_1301213072(infotype x);
void insertFirst_1301213072(List &D, adr P);
void insertLast_1301213072(List &D, adr P);
void insertAfter_1301213072(adr Prec, adr P);
void insertAscending_1301213072(List &D, infotype x);
void deleteFirst_1301213072(List &D, adr P);
void deleteLast_1301213072(List &D, adr P);
void deleteAfter_1301213072(adr Prec, adr P);
void deleteElm_1301213072(List &D, infotype x);
void printList_1301213072(List D);
bool findElement_1301213072(List D, infotype x);
int frequencyOfElm_1301213072(List D, infotype x);


#endif // DLL_H_INCLUDED
