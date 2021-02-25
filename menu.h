#ifndef menu_H
#define menu_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;
char nama[30];
char path[100];
FILE*fpointer;


typedef struct{      //record member
	char Nama[50];
	char Telp[13];
	char Instagram[15];
	long ID;
} Nota;

struct merchandise{  //record tukar hadiah
    int point;
    char pilihan_warna[20];
};

// ====>  VOID  <==== //
void header();
void terima_kasih();
void ucapan_akhir();
void null_number();
void new_line();
void point_tidakcukup();
void selesai();
void loading();
void garis();
void garis_header();
void input_struk();
void mendaftar_member();
void update_to_file_ayce(char *nama_barang,int qty,int subtotal);
void update_to_file_appetizer(char *nama_barang,int qty,int subtotal);
void update_to_file_paket(char *nama_barang,int qty,int subtotal);
void update_point(int point);
void keluar_pendaftaran();
void jadi_member();
void cek_member();
void Create();
void Delete();
void Update();
void Read();

// ====>  INT  <==== //
int hitung_belanjaan (int kuantitas, int indeks, struct list *ayce);
int Pembayaran_Kembalian (int total, int pembayaran);
int hitung_poin (int total_belanja);
int persentase_diskon (int total);
int tukar_poin (int point);
int Ppn(int total);
int Diskon(int total);
int tukar_point();
int get_point();

#endif
