#ifndef DATABEROBAT2_H_INCLUDED
#define DATABEROBAT2_H_INCLUDED

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev

#include <iostream>

using namespace std;
typedef string infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
    address prev;
};

struct list{
    address first;
    address last;
};

bool isEmpty(list L);
void createList(list &L);
void createNew13(infotype x, address &p);
void createNew2(infotype x, address &p);
void insertlast1(list &L, address p);
void insertfirst2(list &L, address p);
void insertlast2(list &L, address p);
void insertfirst3(list &L, address p);
void caridata(list &L, address prec);
void deleteafter(list &L, address &p, address &Prec);
void printdata1(list L);
void printdata3(list L);


#endif // DATABEROBAT2_H_INCLUDED
