#include "olim.h"

void createListOlim(ListOlim &L) {
    head(L) = NULL;
    tail(L) = NULL;
}

adrPeserta createPeserta(string nama, string nim, string univ, int angkatan) {
    adrPeserta p = new ElmPeserta;
    infoPeserta(p).nama = nama;
    infoPeserta(p).nim = nim;
    infoPeserta(p).univ = univ;
    infoPeserta(p).angkatan = angkatan;
    infoPeserta(p).score_lomba = 0;
    infoPeserta(p).peringkat = 0;
    nextPeserta(p) = NULL;
    return p;
}

adrLomba createLomba(string nama_lomba, int angkatan, string level, int kuota) {
    adrLomba l = new ElmLomba;
    infoLomba(l).nama_lomba = nama_lomba;
    infoLomba(l).angkatan = angkatan;
    infoLomba(l).level = level;
    infoLomba(l).kuota = kuota;
    peserta(l) = NULL;
    prevLomba(l) = NULL;
    nextLomba(l) = NULL;
    return l;
}


adrLomba checkLomba(ListOlim L, string nama_lomba) {
    adrLomba l = head(L);
    if (l != NULL) {
        do {
            if (infoLomba(l).nama_lomba == nama_lomba) {
                return l;
            }
            l = nextLomba(l);
        } while (l != head(L));
    }
    return NULL;
}

adrPeserta checkPeserta(ListOlim L, string nim_peserta) {
    adrLomba l = head(L);
    if (l != NULL) {
        do {
            adrPeserta p = peserta(l);
            while (p != NULL) {
                if (infoPeserta(p).nim == nim_peserta) {
                    return p;
                }
                p = nextPeserta(p);
            }
            l = nextLomba(l);
        } while (l != head(L));
    }

    return NULL;
}

bool checkAngkatan(adrLomba l, adrPeserta p) {
    return infoLomba(l).angkatan == infoPeserta(p).angkatan;
}

void addLomba(ListOlim &L, adrLomba l) {
    if (checkLomba(L, infoLomba(l).nama_lomba) == NULL) {
        if (head(L) == NULL) {
            head(L) = l;
            tail(L) = l;
            prevLomba(head(L)) = tail(L);
            prevLomba(tail(L)) = head(L);
            nextLomba(head(L)) = tail(L);
            nextLomba(tail(L)) = head(L);
        } else {
            nextLomba(l) = head(L);
            prevLomba(l) = tail(L);
            nextLomba(tail(L)) = l;
            prevLomba(head(L)) = l;
            tail(L) = l;
        }
        cout << "Berhasil menambahkan lomba" << endl;
    } else {
        cout << "Nama lomba telah terdaftar" << endl;
        cout << "Gagal menambahkan lomba" << endl;
    }

}

void addPeserta(ListOlim &L, string nama_lomba, adrPeserta p) {
    if (head(L) == NULL) {
        cout << "Lomba Kosong" << endl;
    } else if (checkLomba(L, nama_lomba) == NULL) {
        cout << "Lomba dengan nama '" << nama_lomba << "' tidak tersedia" << endl;
    } else if (checkPeserta(L, infoPeserta(p).nim) != NULL) {
        cout << "Peserta telah terdaftar" << endl;
    } else {
        adrLomba l = head(L);
        do {
            l = nextLomba(l);
        } while (l != head(L) && infoLomba(l).nama_lomba != nama_lomba);

        if (!checkAngkatan(l,p)) {
            cout << "Angkatan antara peserta dan lomba tidak sesuai" << endl;
        } else if (infoLomba(l).kuota == 0) {
            cout << "Kuota lomba telah habis" << endl;
        } else {
            if (peserta(l) == NULL) {
                peserta(l) = p;
            } else {
                nextPeserta(p) = peserta(l);
                peserta(l) = p;
            }
            infoLomba(l).kuota--;
            cout << "Berhasil tambah peserta" << endl;
            return;
        }
    }

    cout << "Gagal tambah lomba" << endl;
}


void pindahLomba(ListOlim &L, string lomba_tujuan, string nim) {
    adrLomba l = head(L);
    adrLomba lt = checkLomba(L,lomba_tujuan);
    adrPeserta p = checkPeserta(L, nim);
    bool ketemu = false;

    if (l == NULL) {
        cout << "Lomba Kosong" << endl;
    } else if (lt == NULL) {
        cout << "Lomba yang dituju tidak ada" << endl;
    } else if (p == NULL) {
        cout << "Peserta belum terdaftar, silahkan daftar terlebih dahulu" << endl;
    } else {
        if (!checkAngkatan(lt,p)) {
            cout << "Angkatan antara peserta dan lomba tidak sesuai" << endl;
        } else if (infoLomba(lt).kuota <= 0) {
            cout << "Kuota lomba telah habis" << endl;
        } else {
            do {
                adrPeserta q = peserta(l);
                while (q != NULL) {
                    if (nextPeserta(q) == p || peserta(l) == p) {
                        if (infoLomba(l).nama_lomba == infoLomba(lt).nama_lomba) {
                            cout << "Lomba asal dan tujuan tidak boleh sama" << endl;
                        } else if (infoLomba(l).level != infoLomba(lt).level) {
                            cout << "Level lomba tidak sesuai" << endl;
                        } else {
                            if (peserta(l) == p) {
                                if (nextPeserta(peserta(l)) == NULL) {
                                    peserta(l) = NULL;
                                } else {
                                    peserta(l) = nextPeserta(p);
                                    nextPeserta(p) = NULL;
                                }

                            } else {
                                nextPeserta(q) = nextPeserta(p);
                                nextPeserta(p) = NULL;
                            }

                            if (peserta(lt) == NULL) {
                                peserta(lt) = p;
                            } else {
                                nextPeserta(p) = peserta(lt);
                                peserta(lt) = p;
                            }
                            infoLomba(l).kuota++;
                            infoLomba(lt).kuota--;
                            cout << "Peserta berhasil dipindahkan" << endl;
                            return;
                        }

                        ketemu = true;
                        break;

                    }
                    q = nextPeserta(q);
                }

                if (ketemu) {
                    break;
                }

                l = nextLomba(l);
            } while (l != head(L));
        }

        cout << "Gagal pindah lomba" << endl;


    }
}

adrPeserta deletePeserta(ListOlim &L, string nim_peserta) {
    adrPeserta p, q;
    adrLomba l = head(L);
    do {
        p = peserta(l);
        if (nextPeserta(p) == NULL && infoPeserta(p).nim == nim_peserta) {
            q = peserta(l);
            peserta(l) = NULL;
            return q;
        } else if (nextPeserta(p) != NULL && infoPeserta(p).nim == nim_peserta) {
            peserta(l) = nextPeserta(p);
            nextPeserta(p) = NULL;
            return p;
        } else {
            while (nextPeserta(p) != NULL) {
                if (infoPeserta(nextPeserta(p)).nim == nim_peserta) {
                    q = nextPeserta(p);
                    nextPeserta(p) = nextPeserta(q);
                    nextPeserta(q) = NULL;
                    return q;
                }
                p = nextPeserta(p);
            }
        }


        l = nextLomba(l);
    } while (l != head(L));

    return NULL;
}

bool isCriteriaAvailable(ListOlim L,adrLomba lomba ,int angkatan, string level) {
    adrLomba l = head(L);
    do {
        if (l != lomba && infoLomba(l).angkatan == angkatan && infoLomba(l).level == level && infoLomba(l).kuota > 0) {
            return true;
        }
        l = nextLomba(l);
    } while (l != head(L));

    return false;
}

adrLomba deleteLomba(ListOlim &L, string nama_lomba) {
    adrLomba l = checkLomba(L,nama_lomba);
    string lomba_tujuan;
    if (l == NULL) {
        cout << "Lomba yang dituju tidak ada" << endl;
    } else if (head(L) == l && head(L) == tail(L)) {
        head(L) = NULL;
        tail(L) = NULL;
        nextLomba(l) = NULL;
        prevLomba(l) = NULL;
        peserta(l) = NULL;
        cout << "Lomba berhasil dihapus" << endl;
        return l;
    } else {
        adrPeserta p = peserta(l);

        while (p != NULL) {
            if (!isCriteriaAvailable(L, l, infoPeserta(p).angkatan, infoLomba(l).level)) {
                cout << "Tidak ada lagi kriteria lomba yang sesuai" << endl;
                cout << "Peserta dengan NIM " << infoPeserta(p).nim << " terpaksa dihapus!!" << endl;
                cout << endl;
                deletePeserta(L,infoPeserta(p).nim);
            } else {
                cout << "Masukkan lomba tujuan untuk peserta dengan NIM " << infoPeserta(p).nim << ": ";
                cin >> lomba_tujuan;
                pindahLomba(L, lomba_tujuan, infoPeserta(p).nim);
                cout << endl;
            }
            p = peserta(l);
        }

        if (head(L) == l) {
            nextLomba(tail(L)) = nextLomba(l);
            prevLomba(nextLomba(l)) = tail(L);
            head(L) = nextLomba(l);
            nextLomba(l) = NULL;
            prevLomba(l) = NULL;
        } else if (tail(L) == l) {
            prevLomba(head(L)) = prevLomba(l);
            nextLomba(prevLomba(l)) = head(L);
            tail(L) = prevLomba(l);
            prevLomba(l) = NULL;
            nextLomba(l) = NULL;
        } else {
            nextLomba(prevLomba(l)) = nextLomba(l);
            prevLomba(nextLomba(l)) = prevLomba(l);
            nextLomba(l) = NULL;
            prevLomba(l) = NULL;
        }

        return l;

    }

    return NULL;
}

int countTotalPeserta(ListOlim L) {
    int total = 0;
    adrLomba l = head(L);
    if (l != NULL) {
        do {
            adrPeserta p = peserta(l);
            if (p != NULL) {
                while (p != NULL) {
                    total++;
                    p = nextPeserta(p);
                }
            }

            l = nextLomba(l);
        } while (l != head(L));
    }

    return total;
}

void showAllLomba(ListOlim L) {
    adrLomba l = head(L);
    if (l == NULL) {
        cout << "Lomba Kosong" << endl;
    } else {
        do {
            cout << "Nama lomba: " << infoLomba(l).nama_lomba << endl;
            cout << "Kuota: " << infoLomba(l).kuota << endl;
            cout << "Angkatan: " << infoLomba(l).angkatan << endl;
            cout << "Level: " << infoLomba(l).level << endl;
            cout << endl;
            l = nextLomba(l);
        } while (l != head(L));
    }
}

void showAllPeserta(ListOlim L) {
    adrLomba l = head(L);
    if (countTotalPeserta(L) == 0) {
        cout << "Peserta Kosong" << endl;
    } else  {
        do {
            adrPeserta p = peserta(l);
            while (p != NULL) {
                cout << "Nama peserta: " << infoPeserta(p).nama << endl;
                cout << "Asal universitas: " << infoPeserta(p).univ << endl;
                cout << "NIM: " << infoPeserta(p).nim << endl;
                cout << "Angkatan: " << infoPeserta(p).angkatan << endl;
                cout << "Score: " << infoPeserta(p).score_lomba << endl;
                cout << "Peringkat: " << infoPeserta(p).peringkat << endl;
                cout << endl;
                p = nextPeserta(p);
            }
            l = nextLomba(l);
        } while (l != head(L));
    }
}

void showAllLombaWithPeserta(ListOlim L) {
    adrLomba l = head(L);
    if (l == NULL) {
        cout << "Lomba Kosong" << endl;
    } else {
        do {
            cout << "Nama lomba: " << infoLomba(l).nama_lomba << endl;
            cout << "Kuota: " << infoLomba(l).kuota << endl;
            cout << "Angkatan: " << infoLomba(l).angkatan << endl;
            cout << "Level: " << infoLomba(l).level << endl;
            cout << "===== PESERTA =====" << endl;
            adrPeserta p = peserta(l);
            if (p == NULL) {
                cout << "Peserta Kosong" << endl;
                cout << endl;
            } else {
                while (p != NULL) {
                    cout << "Nama peserta: " << infoPeserta(p).nama << endl;
                    cout << "Asal universitas: " << infoPeserta(p).univ << endl;
                    cout << "NIM: " << infoPeserta(p).nim << endl;
                    cout << "Angkatan: " << infoPeserta(p).angkatan << endl;
                    cout << "Score: " << infoPeserta(p).score_lomba << endl;
                    cout << "Peringkat: " << infoPeserta(p).peringkat << endl;
                    cout << endl;
                    p = nextPeserta(p);
                }
            }

            l = nextLomba(l);
        } while (l != head(L));
    }
}

void showPeserta(ListOlim L, string nim) {
    adrLomba l = head(L);
    adrPeserta p = checkPeserta(L, nim);
    if (p == NULL) {
        cout << "Peserta dengan nim " << nim << " tidak ada" << endl;
    } else {
        do {
            adrPeserta q = peserta(l);
            while (q != NULL && q != p) {
                q = nextPeserta(q);
            }
            if (q == p) {
                cout << "Nama peserta: " << infoPeserta(p).nama << endl;
                cout << "Asal universitas: " << infoPeserta(p).univ << endl;
                cout << "NIM: " << infoPeserta(p).nim << endl;
                cout << "Angkatan: " << infoPeserta(p).angkatan << endl;
                cout << "Score: " << infoPeserta(p).score_lomba << endl;
                cout << "Peringkat: " << infoPeserta(p).peringkat << endl;
                cout << "===== LOMBA YANG DIIKUTI =====" << endl;
                cout << "Nama lomba: " << infoLomba(l).nama_lomba << endl;
                cout << "Kuota: " << infoLomba(l).kuota << endl;
                cout << "Angkatan: " << infoLomba(l).angkatan << endl;
                cout << "Level: " << infoLomba(l).level << endl;
                cout << endl;
                break;
            }
            l = nextLomba(l);
        } while (l != head(L));
    }
}

void showLomba(ListOlim L, string nama_lomba) {
    adrLomba l = checkLomba(L, nama_lomba);
    if (l == NULL) {
        cout << "Lomba dengan nama '" << nama_lomba << "' tidak ada" << endl;
    } else {
        cout << "Nama lomba: " << infoLomba(l).nama_lomba << endl;
        cout << "Kuota: " << infoLomba(l).kuota << endl;
        cout << "Angkatan: " << infoLomba(l).angkatan << endl;
        cout << "Level: " << infoLomba(l).level << endl;
        cout << "===== DAFTAR PESERTA =====" << endl;
        adrPeserta p = peserta(l);
        if (p == NULL) {
            cout << "Peserta kosong" << endl;
        } else {
            while (p != NULL) {
                cout << "Nama peserta: " << infoPeserta(p).nama << endl;
                cout << "Asal universitas: " << infoPeserta(p).univ << endl;
                cout << "NIM: " << infoPeserta(p).nim << endl;
                cout << "Angkatan: " << infoPeserta(p).angkatan << endl;
                cout << "Score: " << infoPeserta(p).score_lomba << endl;
                cout << "Peringkat: " << infoPeserta(p).peringkat << endl;
                cout << endl;
                p = nextPeserta(p);
            }
        }
    }
}

