#include "olim.h"

int main()
{
    ListOlim L;
    adrLomba l;
    adrPeserta p;
    string nama_peserta, nim, univ, nama_lomba, level;
    int angkatan_peserta, score_lomba, peringkat, angkatan_lomba, kuota;

    // Test create list olim
//    cout << head(L) << endl;
//    cout << tail(L) << endl;
    createListOlim(L);
//    cout << head(L) << endl;
//    cout << tail(L) << endl;

    // Test createLomba
//    l = createLomba("Tes Lomba", 2021, "mudah", 30);
//    cout << l << endl;
//    cout << infoLomba(l).nama_lomba << endl;
//    cout << infoLomba(l).angkatan << endl;
//    cout << infoLomba(l).level << endl;
//    cout << infoLomba(l).kuota << endl;
//    cout << peserta(l) << endl;
//    cout << nextLomba(l) << endl;
//    cout << prevLomba(l) << endl;

    // Test createPeserta
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    cout << p << endl;
//    cout << "Nama peserta: " << infoPeserta(p).nama << endl;
//    cout << "Asal universitas: " << infoPeserta(p).univ << endl;
//    cout << "NIM: " << infoPeserta(p).nim << endl;
//    cout << "Angkatan: " << infoPeserta(p).angkatan << endl;
//    cout << "Score: " << infoPeserta(p).score_lomba << endl;
//    cout << "Peringkat: " << infoPeserta(p).peringkat << endl;
//    cout << nextPeserta(p) << endl;

    // Test checkLomba NULL
//    l = checkLomba(L, "Tes Lomba");
//    cout << l << endl;

    // Test checkPeserta NULL
//    p = checkPeserta(L, "1302213020");
//    cout << p << endl;

    // Test addLomba
//    l = createLomba("Tes Lomba", 2021, "mudah", 30);
//    addLomba(L,l);
//    cout << head(L) << endl;
//    cout << infoLomba(head(L)).nama_lomba << endl;
//    cout << infoLomba(head(L)).angkatan << endl;
//    cout << infoLomba(head(L)).level << endl;
//    cout << infoLomba(head(L)).kuota << endl;
//    cout << peserta(head(L)) << endl;
//    cout << nextLomba(head(L)) << endl;
//    cout << prevLomba(head(L)) << endl;
//    cout << endl;

//    l = createLomba("Tes Lomba 2", 2021, "mudah", 30);
//    addLomba(L,l);
//    cout << nextLomba(head(L)) << endl;
//    cout << infoLomba(nextLomba(head(L))).nama_lomba << endl;
//    cout << infoLomba(nextLomba(head(L))).angkatan << endl;
//    cout << infoLomba(nextLomba(head(L))).level << endl;
//    cout << infoLomba(nextLomba(head(L))).kuota << endl;
//    cout << peserta(nextLomba(head(L))) << endl;
//    cout << nextLomba(nextLomba(head(L))) << endl;
//    cout << prevLomba(nextLomba(head(L))) << endl;

    // Test addLomba error lomba telah terdaftar
//    l = createLomba("Tes Lomba", 2021, "mudah", 30);
//    addLomba(L,l);


    // Test check angkatan true
//    l = createLomba("Tes Lomba", 2021, "mudah", 30);
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    cout << checkAngkatan(l,p) << endl;

    // Test check angkatan false
//    l = createLomba("Tes Lomba", 2020, "mudah", 30);
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    cout << checkAngkatan(l,p) << endl;


    // Test addPeserta berhasil
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 30);
//    addLomba(L, l);
//    cout << infoLomba(l).kuota << endl;
//    addPeserta(L, "Tes Lomba", p);
//
//    p = createPeserta("Ashari", "1302213021", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba", p);
//    cout << p << endl;
//    cout << nextPeserta(peserta(l)) << endl;
//    cout << infoLomba(l).kuota << endl;
//    cout << "Nama peserta: " << infoPeserta(nextPeserta(peserta(l))).nama << endl;
//    cout << "Asal universitas: " << infoPeserta(nextPeserta(peserta(l))).univ << endl;
//    cout << "NIM: " << infoPeserta(nextPeserta(peserta(l))).nim << endl;
//    cout << "Angkatan: " << infoPeserta(nextPeserta(peserta(l))).angkatan << endl;
//    cout << "Score: " << infoPeserta(nextPeserta(peserta(l))).score_lomba << endl;
//    cout << "Peringkat: " << infoPeserta(nextPeserta(peserta(l))).peringkat << endl;
//    cout << nextPeserta(peserta(l)) << endl;

    // Test addPeserta lomba tidak tersedia
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 30);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lombaaa", p);

    // Test addPeserta peserta telah terdaftar
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 30);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//    addPeserta(L, "Tes Lomba", p);

    // Test addPeserta Angkatan antara peserta dan lomba tidak sesuai
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2020);
//    l = createLomba("Tes Lomba", 2021, "mudah", 30);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);

    // Test addPeserta kuota lomba telah habis
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 0);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);



    // Test pindahLomba berhasil
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    p = createPeserta("Ashari", "1302213021", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba", p);
//    cout << infoPeserta(peserta(l)).nama << endl;
//
//    l = createLomba("Tes Lomba 2", 2021, "mudah", 10);
//    addLomba(L, l);
//    cout << peserta(l) << endl;
//
//    pindahLomba(L, "Tes Lomba 2", "1302213020");
//    cout << peserta(l) << endl;

    // Test pindahLomba lomba kosong
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addPeserta(L, "Tes Lomba", p);
//    pindahLomba(L, "Tes Lomba", "1302213020");


    // Test pindahLomba lomba yang dituju tidak ada
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//    pindahLomba(L, "asdasd", "1302213020");


    // Test pindahLomba Peserta belum terdaftar
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    pindahLomba(L, "Tes Lomba", "1302213020");


    // Test pindahLomba Angkatan antara peserta dan lomba tidak sesuai
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    l = createLomba("Tes Lomba 2", 2020, "mudah", 20);
//    addLomba(L, l);
//
//    pindahLomba(L, "Tes Lomba 2", "1302213020");


    // Test pindahLomba kuota lomba telah habis
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    l = createLomba("Tes Lomba 2", 2021, "mudah", 0);
//    addLomba(L, l);
//
//    pindahLomba(L, "Tes Lomba 2", "1302213020");

    // Test pindahLomba level lomba tidak sesuai
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    l = createLomba("Tes Lomba 2", 2021, "susah", 4);
//    addLomba(L, l);
//
//    pindahLomba(L, "Tes Lomba 2", "1302213020");


    // Test deletePeserta berhasil
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    p = createPeserta("Ashari", "1302213021", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba", p);
//    cout << peserta(l) << endl;
//
//    p = deletePeserta(L, "1302213020");
//    cout << p << endl;
//    cout << peserta(l) << endl;


    // Test countTotalPeserta
//    cout << countTotalPeserta(L) << endl;
//
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//    cout << countTotalPeserta(L) << endl;


    // Test showAllLomba
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//
//    l = createLomba("Tes Lomba 2", 2021, "mudah", 20);
//    addLomba(L, l);
//
//    l = createLomba("Tes Lomba 3", 2021, "mudah", 20);
//    addLomba(L, l);
//    showAllLomba(L);

    // Test showAllPesrta
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    p = createPeserta("Ashari", "1302213021", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba", p);
//
//    l = createLomba("Tes Lomba 2", 2021, "mudah", 20);
//    addLomba(L, l);
//    p = createPeserta("Dul", "1302213022", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba 2", p);
//
//    showAllPeserta(L);


    // Test showAllLombaWithPeserta
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    p = createPeserta("Ashari", "1302213021", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba", p);
//
//    l = createLomba("Tes Lomba 2", 2021, "mudah", 20);
//    addLomba(L, l);
//    p = createPeserta("Dul", "1302213022", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba 2", p);
//
//    l = createLomba("Tes Lomba 3", 2021, "mudah", 20);
//    addLomba(L, l);
//
//    showAllLombaWithPeserta(L);


    // Test showPeserta
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    l = createLomba("Tes Lomba 2", 2021, "mudah", 20);
//    addLomba(L, l);
//    p = createPeserta("Ashari", "1302213021", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba 2", p);
//    showPeserta(L, "1302213021");


    // Test showLomba
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes Lomba", 2021, "mudah", 20);
//    addLomba(L, l);
//    addPeserta(L, "Tes Lomba", p);
//
//    p = createPeserta("Ashari", "1302213021", "Telkom University", 2021);
//    addPeserta(L, "Tes Lomba", p);
//    showLomba(L,"Tes Lomba");




    // Test deleteLomba
//    p = createPeserta("Arya", "1302213020", "Telkom University", 2021);
//    l = createLomba("Tes", 2021, "mudah", 20);
//    addLomba(L, l);
//
//    l = createLomba("Tes2", 2021, "mudah", 20);
//    addLomba(L, l);
////    cout << head(L) << endl;
//    addPeserta(L, "Tes", p);
//
//    p = createPeserta("Ashari", "1302213021", "Telkom University", 2021);
//    addPeserta(L, "Tes", p);
//    showAllLombaWithPeserta(L);
//
//    l = deleteLomba(L, "Tes");
//    showAllLombaWithPeserta(L);
//    cout << l << endl;
//    cout << head(L) << endl;

    int pilihan;

    while (true) {

        cout << "===== PROGRAM OLIMPIADE SAINS =====" << endl;
        cout << "1. Tambah Lomba" << endl;
        cout << "2. Tambah Peserta" << endl;
        cout << "3. Pindah Lomba" << endl;
        cout << "4. Hapus Peserta" << endl;
        cout << "5. Hapus Lomba" << endl;
        cout << "6. Tampilkan Semua Lomba" << endl;
        cout << "7. Tampilkan Semua Peserta" << endl;
        cout << "8. Tampilkan Semua Lomba & Peserta" << endl;
        cout << "9. Tampilkan Detail Peserta" << endl;
        cout << "10. Tampilkan Detail Lomba" << endl;
        cout << "11. Tampilkan Total Peserta" << endl;
        cout << "0. Exit" << endl;
        cout << "====================================" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan == 0) {
            break;
        } else if (pilihan == 1) {
            cout << "===== TAMBAH LOMBA =====" << endl;
            cout << "Masukkan Nama Lomba (tidak boleh spasi): ";
            cin >> nama_lomba;

            cout << "Masukkan Angkatan Lomba: ";
            cin >> angkatan_lomba;

            cout << "Masukkan Level Lomba (easy, medium, hard): ";
            cin >> level;

            cout << "Masukkan Kuota Lomba: ";
            cin >> kuota;

            l = createLomba(nama_lomba, angkatan_lomba, level, kuota);
            addLomba(L,l);
            cout << "===== SELESAI TAMBAH LOMBA =====" << endl;
            cout << endl;
        } else if (pilihan == 2) {
            if (head(L) == NULL) {
                cout << "Belum Bisa Menambahkan Peserta" << endl;
                cout << "Lomba Masih Kosong, Silahkan Tambahkan Lomba Terlebih Dahulu" << endl;
                cout << endl;
            } else {
                cout << "===== TAMBAH PESERTA =====" << endl;
                cout << "Masukkan Nama Peserta: ";
                cin >> nama_peserta;

                cout << "Masukkan Universitas Peserta: ";
                cin >> univ;

                cout << "Masukkan NIM Peserta: ";
                cin >> nim;

                cout << "Masukkan Angkatan Peserta: ";
                cin >> angkatan_peserta;

                p = createPeserta(nama_peserta, nim, univ, angkatan_peserta);

                cout << "===== LIST LOMBA =====" << endl;
                showAllLomba(L);
                cout << "======================" << endl;
                cout << "Masukkan Nama Lomba Yang Ingin Diikuti: ";
                cin >> nama_lomba;
                addPeserta(L, nama_lomba, p);

                cout << "===== SELESAI TAMBAH PESERTA =====" << endl;
                cout << endl;
            }

        } else if (pilihan == 3) {
            cout << "===== PINDAH LOMBA =====" << endl;
            cout << "Masukkan Nama Lomba Tujuan: ";
            cin >> nama_lomba;

            cout << "Masukkan NIM Peserta Yang Ingin Dipindah: ";
            cin >> nim;

            pindahLomba(L, nama_lomba, nim);
            cout << "===== SELESAI PINDAH LOMBA =====" << endl;
            cout << endl;
        } else if (pilihan == 4) {
            if (countTotalPeserta(L) == 0) {
                cout << "Peserta Kosong" << endl;
            } else {
                cout << "===== HAPUS PESERTA =====" << endl;
                cout << "Masukkan NIM Peserta Yang Ingin Dihapus: ";
                cin >> nim;
                p = deletePeserta(L, nim);

                cout << "Peserta Berikut Berhasil Dihapus" << endl;
                cout << "Nama peserta: " << infoPeserta(p).nama << endl;
                cout << "Asal universitas: " << infoPeserta(p).univ << endl;
                cout << "NIM: " << infoPeserta(p).nim << endl;
                cout << "Angkatan: " << infoPeserta(p).angkatan << endl;
                cout << "Score: " << infoPeserta(p).score_lomba << endl;
                cout << "Peringkat: " << infoPeserta(p).peringkat << endl;
                cout << endl;
                cout << "===== SELESAI HAPUS PESERTA =====" << endl;
            }
            cout << endl;

        } else if (pilihan == 5) {
            if (head(L) == NULL) {
                cout << "Lomba Kosong" << endl;
            } else {
                cout << "===== HAPUS LOMBA =====" << endl;
                cout << "Masukkan Nama Lomba Yang Ingin Dihapus: ";
                cin >> nama_lomba;

                l = deleteLomba(L,nama_lomba);
                cout << "Lomba Yang Berhasil Dihapus" << endl;
                cout << "Nama lomba: " << infoLomba(l).nama_lomba << endl;
                cout << "Kuota: " << infoLomba(l).kuota << endl;
                cout << "Angkatan: " << infoLomba(l).angkatan << endl;
                cout << "Level: " << infoLomba(l).level << endl;
                cout << endl;
                cout << "===== SELESAI HAPUS LOMBA =====" << endl;
            }

            cout << endl;
        } else if (pilihan == 6) {
            cout << "===== LIST SEMUA LOMBA =====" << endl;
            showAllLomba(L);
            cout << "============================" << endl;
            cout << endl;
        } else if (pilihan == 7) {
            cout << "===== LIST SEMUA PESERTA =====" << endl;
            showAllPeserta(L);
            cout << "==============================" << endl;
            cout << endl;
        } else if (pilihan == 8) {
            cout << "===== LIST SEMUA LOMBA & PESERTA =====" << endl;
            showAllLombaWithPeserta(L);
            cout << "======================================" << endl;
            cout << endl;
        } else if (pilihan == 9) {
            cout << "===== DETAIL PESERTA =====" << endl;
            cout << "Masukkan NIM Peserta: ";
            cin >> nim;
            showPeserta(L, nim);
            cout << "==========================" << endl;
            cout << endl;
        } else if (pilihan == 10) {
            cout << "===== DETAIL LOMBA =====" << endl;
            cout << "Masukkan Nama Lomba: ";
            cin >> nama_lomba;
            showLomba(L, nama_lomba);
            cout << "========================" << endl;
            cout << endl;
        } else if (pilihan == 11) {
            cout << "===== TOTAL PESERTA =====" << endl;
            cout << "Total Peserta: " << countTotalPeserta(L) << endl;
            cout << "==========================" << endl;
            cout << endl;
        } else {
            cout << "Pilihan tidak valid!! (Masukkan pilihan antara 0 atau 1-10)" << endl;
        }
    }

    cout << "TERIMA KASIH";


    return 0;
}
