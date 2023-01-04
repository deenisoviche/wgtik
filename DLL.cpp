#include "DLL.H"

void createList_1301213072(List &D){
    first(D) = NULL;
    last(D) = NULL;
}

adr createElement_1301213072(infotype x){
    adr P = new element;

    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst_1301213072(List &D, adr P){
    if (first(D) == NULL && last(D) == NULL){
        first(D) = P;
        last(D) = P;
    }else {
        next(P) = first(D);
        prev(first(D)) = P;
        first(D) = P;
    }
}

void insertLast_1301213072(List &D, adr P){
    if (first(D) == NULL && last(D) == NULL){
        first(D) = P;
        last(D) = P;
    }else{
        next(last(D)) = P;
        prev(P) = last(D);
        last(D) = P;
    }
}

void insertAfter_1301213072(List &D, adr Prec, adr P){
    next(P) = next(Prec);
    prev(next(Prec)) = P;
    prev(P) = Prec;
}

void insertAscending_1301213072(List &D, infotype x){
    adr P = createElement_1301213072(x);

    if (first(D)== NULL && last(D) == NULL){
        first(D) = P;
        last(D) = P;
    }else{
        adr before = first(D);
        while (before != NULL && x > info(before)){
            before = next(before);
        }

        if (before == NULL){
            next(last(D)) == P;
            prev(P) = last(D);
            last(D) = P;
        }else if (before == first(D)){
            next(P) = first(D);
            prev(first(D)) = P;
            first(D) = P;
        }else{
            next(P) = before;
            prev(P) = prev(before);
            next(prev(before)) = P;
            prev(before) = P;
        }
    }
}

void deleteFirst_1301213072(List &D, adr P){
    P = first(D);

    if (first(D) == last(D)){
        first(D) = NULL;
        last(D) = NULL;
    }else{
        first(D) = next(first(D));
        prev(first(D) = NULL);
        next(P) = NULL;
    }
}

void deleteLast_1301213072(List &D, adr P){
    if (first(D) == last(D)){
        first(D) = NULL;
        last(D) = NULL;
    }else{
        P = last(D);
        last(D) = prev(P);
        next(last(D)) = NULL;
        prev(P) = NULL;
    }
}

void deleteAfter_1301213072(List &D, adr Prec, adr P){
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;

    next(P) = NULL;
    prev(P) = NULL;
}

void deleteElm_1301213072(List &D, infotype x){
    adr P = first(D);
    adr Q = createElement_1301213072(x);

    if(info(first(D)) == info(Q)){
        deleteFirst_1301213072(D, Q);
    }else if (info(last(D)) == info(Q)){
        deleteLast_1301213072(D, Q);
    }else{
        while(P != NULL && info(P) < x){
                P = next(P);
            }
        P = prev(P);
        deleteAfter_1301213072(D, P, Q);
    }
}

void printList_1301213072(List D){
    adr temp = first(D);

    if (first(D) == NULL && last(D) == NULL){
        cout << "List Kosong" << endl;
    }else{
       while (temp != NULL){
            cout << info(temp) << " ";
            temp = next(temp);
        }
    }
    cout << endl;
}


bool findElement_1301213072(List D, infotype x){
    adr P  = first(D);
    while (P != NULL){
        if (info(P) == x){
            return true;
        }
        P = next(P);
    }
    return false;
}

int frequencyOfElm_1301213072(List D, infotype x){
    adr P = first(D);
    int i = 0;

    if (first(D) == NULL && last(D) == NULL){
        return 0;
    }else{
        while (P != NULL){
            if (info(P) == x){
                i++;
            }
            P = next(P);
        }
        return i;
    }
}
