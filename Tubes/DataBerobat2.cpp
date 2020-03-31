#include <iostream>
#include "DataBerobat2.h"
using namespace std;

bool isEmpty(list L){
    if (first(L) == NULL && last(L) == NULL){
        return true;
    }else{
        return false;
    }
};

void createList(list &L){
    first(L) = NULL;
    last(L) = NULL;
};

void createNew13(infotype x, address &p){
    p = new elmlist;
    info(p) = x;
    next(p) = NULL;
};

void createNew2(infotype x, address p){
    p = new elmlist;
    info(p) = x;
    next(p) = NULL;
    prev(p) = NULL;
};

void insertlast1(list &L, address p){
    if(isEmpty(L) == true){
        first(L) = p;
        last(L) = p;
        next(p) = NULL;
    }else{
        next(last(L)) = p;
        next(p) = NULL;
        last(L) = p;
    }
}

void insertfirst3(list &L, address p){
    if(isEmpty(L) == true){
        first(L) = p;
        last(L) = p;
        next(p) = p;
    }else{
        next(p) = first(L);
        next(last(L)) = p;
        first(L) = p;
    };
};

void deleteafter1(list &L, address p, address &prec){
        address p
        address q

        if (isEmpty(L)){
            cout << "data kosong" << endl;
        }else if(first(L) == prec && next(prec) == NULL){
            first(L) = NULL;
            last(L) = NULL;
            p = prec;
            next(p) = NULL;
        }else if(next(prec) == NULL){
            q = first(L);
            while(next(q) != prec){
                q = next(q);
            }
            p = prec;
            next(q) = NULL;
            next(p) = NULL;
            last(L) = q;
        }else if(first(L) == prec){
            first(L) = next(prec)
            p = prec;
            next(p) = NULL;
        }else{
            q = first(L);
            while(next(q) != prec){
                q = next(q);
            }
            p = prec;
            next(q) = next(p);
            next(p) = NULL;
        }
}

void deleteafter3(list &L, address &prec){
        address p
        address q

        if (isEmpty(L)){
            cout << "data kosong" << endl
        }else if(first(L) == prec && next(prec) == first(L)){
            first(L) = NULL;
            last(L) = NULL;
            p = prec;
            next(p) = NULL;
        }else if(next(prec) == first(L)){
            q = first(L);
            while(next(q) != prec){
                q = next(q);
            }
            p = prec
            next(q) = first(L);
            next(p) = NULL;
            last(L) = q;
        }else if(first(L) == prec){
            first(L) = next(prec);
            next(last(L)) = next(prec);
            p = prec;
            next(p) = NULL
        }else{
            q = first(L);
            while(next(q) != prec){
                q = next(q);
            }
            p = prec;
            next(q) = next(p);
            next(p) = NULL;
        }
}

void caridata1(list &L, infotype &x, address prec){
    if(isEmpty(L)){
        cout << "datakosong" << endl;
    }else(info(first(L)))
}

void printdata1(list L){
    address p;
    p = first(L);
    while(next(p) != NULL){
        cout<<info(p)<<endl;
        p = next(p);
    }
    cout<<info(p)<<endl;
};

void printdata3(list L){
    address p;
    p = first(L);
    while(next(p) != first(L)){
        cout<<info(p)<<endl;
        p = next(p);
    }
    cout<<info(p)<<endl;
};
