#ifndef OLIM_H_INCLUDED
#define OLIM_H_INCLUDED

#include <iostream>
using namespace std;

#define head(L) ((L).head)
#define tail(L) ((L).tail)
#define peserta(p) (p)->peserta
#define infoPeserta(p) (p)->infoPeserta
#define nextPeserta(p) (p)->next
#define infoLomba(l) (l)->infoLomba
#define prevLomba(l) (l)->prev
#define nextLomba(l) (l)->next

struct Mahasiswa {
    string nama, nim, univ;
    int angkatan, score_lomba, peringkat;
};

struct Lomba {
    string nama_lomba, level;
    int kuota, angkatan;
};

typedef Mahasiswa infotypeMahasiswa;
typedef Lomba infotypeLomba;
typedef struct ElmPeserta *adrPeserta;
typedef struct ElmLomba *adrLomba;

struct ElmLomba {
    infotypeLomba infoLomba;
    adrPeserta peserta;
    adrLomba next;
    adrLomba prev;
};

struct ElmPeserta {
    infotypeMahasiswa infoPeserta;
    adrPeserta next;
};

struct ListOlim {
    adrLomba head, tail;
};

void createListOlim(ListOlim &L);
adrPeserta createPeserta(string nama, string nim, string univ, int angkatan);
adrLomba createLomba(string nama_lomba, int angkatan, string level, int kuota);
void addLomba(ListOlim &L, adrLomba lomba);
void addPeserta(ListOlim &L, string nama_lomba, adrPeserta peserta);
adrLomba checkLomba(ListOlim L, string nama_lomba);
adrPeserta checkPeserta(ListOlim L, string nim_peserta);
bool checkAngkatan(adrLomba lomba, adrPeserta peserta);
adrLomba deleteLomba(ListOlim &L, string nama_lomba);
adrPeserta deletePeserta(ListOlim &L, string nim_peserta);
void pindahLomba(ListOlim &L, string lomba_tujuan, string nim);
int countTotalPeserta(ListOlim L);
void showAllLomba(ListOlim L);
void showAllPeserta(ListOlim L);
void showAllLombaWithPeserta(ListOlim L);
void showPeserta(ListOlim L, string nim);
void showLomba(ListOlim L, string nama_lomba);
bool isCriteriaAvailable(ListOlim L,adrLomba lomba ,string angkatan, string level);

#endif // OLIM_H_INCLUDED
