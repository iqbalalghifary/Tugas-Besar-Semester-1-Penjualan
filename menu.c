#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include "barang.h"
#include "menu.h"

FILE*PENJUALAN;
char txt[100] = "Data Pribadi Member.txt";

void header(){					// ====> HEADER TOKO NYC! <==== //
	printf	("\t---------------------------------------------------------------------------------------------------------------------\n");
	printf	("\t->                                  ^^ ^^ ^^                                                                       <-\n");
	printf	("\t->  NNN    NN  OOOO  WW       WW    || || ||  OOOO  UU  UU RRRRRR      CCCCC HH  HH  OOOO  II  CCCCC EEEEEE    ||  <-\n");
	printf	("\t->  NNNN   NN OO  OO WW       WW    || || || OO  OO UU  UU RR   RR    CC     HH  HH OO  OO II CC     EE        ||  <-\n");
	printf	("\t->  NN NN  NN OO  OO WW       WW    || || || OO  OO UU  UU RR   RR    CC     HH  HH OO  OO II CC     EE        ||  <-\n");
	printf	("\t->  NN  NN NN OO  OO WW   W   WW     VV00VV  OO  OO UU  UU RRRRR      CC     HHHHHH OO  OO II CC     EEEEE     ||  <-\n");
	printf	("\t->  NN   NNNN OO  OO  WW WWW WW        ||    OO  OO UU  UU RR  RR     CC     HH  HH OO  OO II CC     EE            <-\n");
	printf	("\t->  NN    NNN  OOOO    WW   WW         ||     OOOO   UUUU  RR   RR     CCCCC HH  HH  OOOO  II  CCCCC EEEEEE    00  <-\n");
	printf	("\t->  ============================       ||    =====================    =====================================        <-\n");
	printf	("\t=====================================================================================================================\n");
}

void terima_kasih(){		// ====>  UCAPAN TERIMA KASIH TERAKHIR  <==== //
	garis_header();
	puts	("\t\t     -->                ^^ ^^ ^^                                                           <--");
	puts	("\t\t     -->      NNN    NN || || ||  CCCCCC ||     RRRR   EEEE  SSSSS TTTTTT  OO         00   <--");
	puts	("\t\t     -->      NNNN   NN || || || CC      ||     R   R  E    SS       TT   O  O  =======    <--");
	puts	("\t\t     -->      NN NN  NN || || || CC      ||     RRRR   EEE   SSSS    TT   O  O   =====     <--");
	puts	("\t\t     -->      NN  NN NN  VV00VV  CC      ||     R  R   E        SS   TT   O  O    ===      <--");
	puts	("\t\t     -->      NN   NNNN    ||    CC      ||     R   R  EEEE SSSSS    TT    OO      =       <--");
	puts	("\t\t     -->      NN    NNN    ||    CC                           &                    =       <--");
	puts	("\t\t     -->      NN     NN    ||     CCCCCC 00                 B A R                  =       <--");
	puts	("\t\t     =========================================================================================");
	puts	("\n\n\t\t\t\t==================================================================== ");
	printf	("\t\t\t\t   ** TERIMA KASIH TELAH BERBELANJA. SILAHKAN DATANG KEMBALI ! **        ");
	puts	("\n\t\t\t\t====================================================================\n ");
	printf	("\t\t\t\tTekan ENTER untuk Memesan => ");
    system	("pause");
    system	("cls");
	main	();
}

void ucapan_akhir(){				// ====>  pengucapan akhir lalu mengisi formulir member  <==== //
	garis_header();
	puts	("\t\t     -->                ^^ ^^ ^^                                                           <--");
	puts	("\t\t     -->      NNN    NN || || ||  CCCCCC ||     RRRR   EEEE  SSSSS TTTTTT  OO         00   <--");
	puts	("\t\t     -->      NNNN   NN || || || CC      ||     R   R  E    SS       TT   O  O  =======    <--");
	puts	("\t\t     -->      NN NN  NN || || || CC      ||     RRRR   EEE   SSSS    TT   O  O   =====     <--");
	puts	("\t\t     -->      NN  NN NN  VV00VV  CC      ||     R  R   E        SS   TT   O  O    ===      <--");
	puts	("\t\t     -->      NN   NNNN    ||    CC      ||     R   R  EEEE SSSSS    TT    OO      =       <--");
	puts	("\t\t     -->      NN    NNN    ||    CC                           &                    =       <--");
	puts	("\t\t     -->      NN     NN    ||     CCCCCC 00                 B A R                  =       <--");
	puts	("\t\t     =========================================================================================");
	puts	("\n\n\t\t\t\t==================================================================== ");
	printf	("\t\t\t\t   ** TERIMA KASIH TELAH BERBELANJA. SILAHKAN DATANG KEMBALI ! **        ");
	puts	("\n\t\t\t\t====================================================================\n ");
	puts	("\t\t\t\t  ==> Silahkan isi data Pendaftaran untuk menjadi Member kami. <==");
	selesai();
}

void null_number(){							// ====> NO YANG DIINPUT KELEBIHAN <==== //
	puts	("\n\t\t\t\t Mohon maaf:( Pesanan yang Anda pilih tidak ada di daftar Menu.");
    puts	("\t\t\t\t\t ==> Silahkan pesan kembali pesanan Anda <==\n");
    printf	("\n\t\t\t\t ");
    system	("pause");
	system	("cls");
}

void null_option(){							// ====> NO YANG DIINPUT KELEBIHAN <==== //
	puts	("\n\t\t\t\tMohon maaf, Option yang Anda pilih tidak ada di daftar Member.");
    puts	("\t\t\t\t\t==> Silahkan pilih option yang tersedia Anda <==\n");
    printf	("\n\t\t\t\t");
    system	("pause");
	system	("cls");
}

void null_ID(){							// ====> NO YANG DIINPUT KELEBIHAN <==== //
	puts	("\n\t\t\t\tMohon maaf, ID yang Anda masukkan tidak ada di daftar Member.");
    puts	("\t\t\t\t==> Silahkan daftar menjadi member terlebih dahulu <==\n");
    printf	("\n\t\t\t\t");
    system	("pause");
	system	("cls");
}

void new_line(){									// ====>  MEMFORMAT SYSTEM KE TAMPILAN BARU  <==== //
	system	("cls");
	header	();
    puts	("\n\t\t\t\t\t=====================================================");
}

void point_tidakcukup(){
	puts("\t\t\t\t\t\tMaaf... Point Anda tidak mencukupi.");
	puts("\n\t\t\t\t\t=====================================================");
}

void selesai(){
	printf	("\n\n\t\t\t\t\t");
	system	("pause");
	system	("cls");
}

void loading(){										// ====>  Fitur tampilan loading  <==== //
	int i;
	system("cls");
	header();
		printf("\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\tWait a Minutes... \n\n\t\t\t\t");
	for (i=0; i<=65;i++){
		printf("%c",178);
		Sleep(15);}
}

void garis(){
	int i;
		printf("\t\t\t\t");
	for (i=0; i<=64;i++){
		printf("%c",205);
		Sleep(10);}
}

void garis_header(){
	int i;
		printf("\n\n\t\t     ");
	for (i=0; i<=88;i++){
		printf("%c",240);
		Sleep(5);}
		printf("\n");
}

void input_struk(){										// ====>   INPUT STRUK BELANJAAN   <==== //
	fpointer = fopen("struk_belanja.txt","w");			// ====>  Menulis struck belanja dalam file
	fprintf(fpointer,"\n===================================================================\n");
	fprintf(fpointer,"======================== NOW YOUR CHOICE ! ========================\n");
	fprintf(fpointer,"|                      Hot Line: 022-2200922                      |\n");
	fprintf(fpointer,"|                     PT. Irfan Ikbal Company                     |\n");
	fprintf(fpointer,"|                    Jl. Yang Pernah Ada No. 1                    |\n");
	fprintf(fpointer,"|                       Bandung, Indonesia                        |\n");
    fprintf(fpointer,"|_________________________________________________________________|\n");
    fprintf(fpointer," _________________________________________________________________\n");
    fprintf(fpointer,"||         Menu         ||  Jumlah Pembelian  ||      Total      ||\n");
	fprintf(fpointer,"|-----------------------------------------------------------------|\n");
} 

void mendaftar_member(){				// ====>  MAIN MENU PENGINPUTAN MEMBER BARU -> FILE <==== //
	int menu;
	daftar:
	system("cls");
	header	();
		puts	("\n\t\t\t\t==================== Menu Pendaftaran ====================");
		printf	("\t\t\t\t1. Daftar menjadi Member\n\t\t\t\t2. Lihat data Member\n\t\t\t\t3. Update data Member\n\t\t\t\t4. Berhenti jadi Member\n\t\t\t\t5. Exit\n");
		printf	("\t\t\t\t==========================================================\n\t\t\t\tPilihan >> ");scanf("%i",&menu);fflush(stdin);
	switch(menu){
		case 1:
			Create();
			break;
		case 2:
			Read();
			break;
		case 3:
			Update();
			break;
		case 4:
			Delete();
			break;
		case 5:
			system("cls");
			loading();
			main();
			break;
		}
}

void update_to_file_ayce(char *nama_barang,int qty,int subtotal){	// ====>  MEM-PRINT DATA BELANJAAN KE STRUK -> FILE <==== //
	FILE *fpointer;
		fpointer = fopen("struk_belanja.txt","a");
		fprintf	(fpointer,"  %s \t",nama_barang);
		fprintf	(fpointer,"\t\t   %d \t",qty);
	if (subtotal >=100000 && subtotal < 1000000){
    	fprintf(fpointer,"\t     %d\n",subtotal);}
	else if(subtotal >= 1000000){
		fprintf(fpointer,"\t    %d\n",subtotal);}
	fclose	(fpointer);
}

void update_to_file_paket(char *nama_barang,int qty,int subtotal){	// ====>  MEM-PRINT DATA BELANJAAN KE STRUK -> FILE <==== //
	FILE *fpointer;
		fpointer = fopen("struk_belanja.txt","a");
		fprintf	(fpointer,"   %s \t",nama_barang);
		fprintf	(fpointer,"\t   %d \t",qty);
	if (subtotal >=100000 && subtotal < 1000000){
    	fprintf(fpointer,"\t     %d\n",subtotal);}
	else if(subtotal >= 1000000){
		fprintf(fpointer,"\t    %d\n",subtotal);}
	fclose	(fpointer);
}

void update_to_file_appetizer(char *nama_barang,int qty,int subtotal){	// ====>  MEM-PRINT DATA BELANJAAN KE STRUK -> FILE <==== //
	FILE *fpointer;
		fpointer = fopen("struk_belanja.txt","a");
		fprintf	(fpointer,"   %s \t",nama_barang);
		fprintf	(fpointer,"\t   %d \t",qty);
	if(totappetizer < 100000 ){
		fprintf(fpointer,"\t      %d\n",subtotal);}
	else if (subtotal >=100000 && subtotal < 1000000){
    	fprintf(fpointer,"\t %d\n",subtotal);}
	else if(subtotal >= 1000000){
		fprintf(fpointer,"\t%d\n",subtotal);}
	fclose	(fpointer);
}

void update_point(int point){										// ====>  MEM-PRINT UPDATE-AN POINT MEMBER -> FILE <==== //
    FILE *fpointer;
    fpointer = fopen(path,"w");			//menulis jumlah point dalam file 
    fprintf(fpointer,"Point anda adalah : %d",point);
    fclose(fpointer);
}

void jadi_member(){				// ====>  MENGINPUT CALON MEMBER -> FILE <==== //
	FILE *fpointer;
	strcpy(path,nama);
	strcat(path,".txt");
	fpointer = fopen(path,"w");
	fprintf(fpointer,"0");
	fclose(fpointer);
	fpointer = fopen("Daftar_Member.txt","a");
	fprintf(fpointer, "- %s \n", nama);
	fclose(fpointer);
}

void cek_member(){				 // ====>  MENGECEK KEANGGOTAAN MEMBER  <==== //
    char str[1000]; char *pos;
    puts	("\n\t\t\t\t\t=====================================================");
	printf("\t\t\t\t\tMasukan nama Member : ");scanf("%s",&nama);
    fpointer = fopen("Daftar_Member.txt", "r");
		if (fpointer == NULL){   
			fclose(fpointer);
	        	printf("\t\t\t\t\tMember tidak ditemukan!\n");
	        	fpointer = fopen("Daftar_Member.txt","a");
	        fclose(fpointer);
	        	fpointer = fopen("Daftar_Member.txt","r");}
	    while ((fgets(str,1000, fpointer)) != NULL){
	        pos = strstr(str, nama);
				if (pos != NULL){
	            	a = 1;
	            break;}
			}
    fclose(fpointer);
	    if(a == 1){
	        printf("\t\t\t\t\tNama Ditemukan.\n");
	        selesai();
	        a = 1;
			}
	    else{
	        printf("\t\t\t\t\tNama Tidak Ditemukan.\n");
	        selesai();
	        a = 0;}
    fclose(fpointer);
}

void Create(){					// ====> Mendaftar menjadi member <===== //
	Nota Penjualan;
	PENJUALAN=fopen(txt,"a");
		printf("\n\t\t\t\t==================== Menu Pendaftaran ====================\n");
		printf("\t\t\t\t====================== Pendaftaran  ======================\n");
		printf("\t\t\t\tMasukkan Nama Anda \t\t: ");scanf("%[^\n]",&Penjualan.Nama);fflush(stdin);
		printf("\t\t\t\tMasukkan ID Anda \t\t: ");scanf("%i",&Penjualan.ID);fflush(stdin);
		printf("\t\t\t\tMasukkan No Telepon Anda \t: ");scanf("%s",&Penjualan.Telp);fflush(stdin);
		printf("\t\t\t\tMasukkan Instagram anda \t: ");scanf("%s",&Penjualan.Instagram);fflush(stdin);
		puts  ("\t\t\t\t===========================================================\n");
	fprintf(PENJUALAN,"%s_%d_%s_%s\n",Penjualan.Nama,Penjualan.ID,Penjualan.Telp,Penjualan.Instagram);
	fclose(PENJUALAN);
}

void Read(){                      // ====>  MEMBACA KEANGGOTAAN MEMBER YANG SUDAH TERDAFTAR  <==== //
	Nota Penjualan;
	int id;
			puts  ("\n\t\t\t\t==================== Menu Pendaftaran ====================");
			puts  ("\t\t\t\t====================== Cek Biodata  ======================");
			printf("\t\t\t\tMasukan ID Customer yang ingin ditampilkan \t: "); scanf("%i",&id);fflush(stdin);
			printf("\n");
		PENJUALAN=fopen("Data Pribadi Member.txt","r");
	while (!feof(PENJUALAN)){
			fscanf(PENJUALAN,"%[^_]_%i_%[^_]_%[^\n]\n",&Penjualan.Nama,&Penjualan.ID,&Penjualan.Telp,&Penjualan.Instagram);
			fflush(stdin);
		if(id==Penjualan.ID){
			printf("\t\t\t\tNama Customer \t\t : %s\n",Penjualan.Nama);
			printf("\t\t\t\tID Customer \t\t : %i\n",Penjualan.ID);
			printf("\t\t\t\tNo Telepon Customer \t : %s\n",Penjualan.Telp);
			printf("\t\t\t\tInstagram \t\t : %s\n",Penjualan.Instagram);
			printf("\n\t\t\t\t===========================================================");
		}
	}
    fclose(PENJUALAN);
}

void Update(){                     // ====>  MENGUPDATE KEANGGOTAAN MEMBER  <==== //
	Nota Penjualan[50];
	int id,index,i;
		puts  ("\n\t\t\t\t==================== Menu Pendaftaran ====================");
		puts  ("\t\t\t\t====================== Update Data  ======================");
		printf("\t\t\t\tMasukan ID yang ingin diubah \t: ");scanf("%i",&id);fflush(stdin);
		printf("\n");
		PENJUALAN=fopen("Data Pribadi Member.txt","r");
		index=0;
	while (!feof(PENJUALAN)){
		fscanf(PENJUALAN,"%[^_]_%i_%[^_]_%[^\n]\n",&Penjualan[index].Nama,&Penjualan[index].ID,&Penjualan[index].Telp,&Penjualan[index].Instagram);
		fflush(stdin);
			if(id==Penjualan[index].ID){
				printf("\t\t\t\tMasukkan Nama Anda \t\t: ");scanf("%[^\n]",&Penjualan[index].Nama);fflush(stdin);
				printf("\t\t\t\tMasukkan ID Anda \t\t: ");scanf("%i",&Penjualan[index].ID);fflush(stdin);
				printf("\t\t\t\tMasukkan No Telepon Anda \t: ");scanf("%s",&Penjualan[index].Telp);fflush(stdin);
				printf("\t\t\t\tMasukkan Instagram Anda \t: ");scanf("%[^\n]",&Penjualan[index].Instagram);fflush(stdin);
		}
		index++;
	}
	fclose(PENJUALAN);
		PENJUALAN=fopen("Data Pribadi Member.txt","w");
	fclose(PENJUALAN);
		PENJUALAN=fopen("Data Pribadi Member.txt","a");
	for(i=0;i<index;i++){
		fprintf(PENJUALAN,"%s_%i_%s_%s\n",Penjualan[i].Nama,Penjualan[i].ID,Penjualan[i].Telp,Penjualan[i].Instagram);
	}
	fclose(PENJUALAN);
}
	
void Delete(){ 						// ====>  MENGHAPUS KEANGGOTAAN MEMBER  <==== //
	Nota Penjualan[50];
	int id,index,i;
		puts  ("\n\t\t\t\t==================== Menu Pendaftaran ====================");
		puts  ("\t\t\t\t======================= Hapus Member  ======================");
		printf("\t\t\t\tMasukan ID Customer yang ingin dihapus \t: ");scanf("%i",&id);fflush(stdin);
	PENJUALAN=fopen("Data Pribadi Member.txt","r");
	index=0;
	while (!feof(PENJUALAN)){
		fscanf(PENJUALAN,"%[^_]_%i_%s_%[^\n]\n",&Penjualan[index].Nama,&Penjualan[index].ID,&Penjualan[index].Telp,&Penjualan[index].Instagram);
		fflush(stdin);
			if(id!=Penjualan[index].ID){
				index++;
			}
		}
	fclose(PENJUALAN);
		PENJUALAN=fopen("Data Pribadi Member.txt","w");
	fclose(PENJUALAN);
		PENJUALAN=fopen("Data Pribadi Member.txt","a");
	for(i=0;i<index;i++){
		fprintf(PENJUALAN,"%s_%i_%s_%s\n",Penjualan[i].Nama,Penjualan[i].ID,Penjualan[i].Telp),Penjualan[i].Instagram;
	}
	fclose(PENJUALAN);
}

//================================ function =============================//

int hitung_belanjaan (int kuantitas, int indeks, struct list *ayce){
    int subtotal = (ayce[indeks].harga * kuantitas);
	return subtotal;
}

int Pembayaran_Kembalian (int total, int pembayaran){							// ====>  OPERASI PENGHITUNGAN JUMLAH YANG HARUS DIBAYAR  <==== //
	FILE *fpointer;
    int kembalian;
    if (total != 0){
		if (pembayaran < total){
			puts 	("\n\t\t\tUang anda tidak mencukupi. Mohon membayar sesuai dengan total pembelian Anda.\n");
		    printf 	("\t\t\t\tSilahkan masukan kembali jumlah uang pembayaran\t: ");
		    scanf	("%d",&pembayaran);
		    system	("cls");
		    header	();
			puts	("\n\t\t\t\t======================= NYC! Resto & BAR =========================");
		    puts	("\t\t\t\t ________________________________________________________________");
			puts	("\t\t\t\t|>>                 Data Pembelanjaan Customer                 <<|");
			printf	("\t\t\t\t|| Pembelanjaan Anda adalah\t= Rp.%d                  			  ", total);
			printf	("\n\t\t\t\t|| Uang Pembayaran Anda adalah\t= Rp.%d                          ", pembayaran);
			puts	("\n\t\t\t\t||                                    						    ");
			printf	("\t\t\t\t|| Uang Kembalian Anda adalah\t=  Rp.%d                		    \n", Pembayaran_Kembalian(total,pembayaran));
			puts	("\t\t\t\t|================================================================|");
			puts	("\t\t\t\t|                                                                |");
			fpointer = fopen("struk_belanja.txt","a");
	    	fprintf	(fpointer,"=================================================================\n");	//---====> BAGIAN PEMBAYARAN (selesai)
	    		if(diskonpersen == 0){	//--------------------------------------------------------====> PENGOUTPUTAN DISKON -> FILE(mulai)
	        		fprintf(fpointer," Diskon :     --\n");}
    				else{					//--------------------------------------------------------====> PENGOUTPUTAN DISKON -> FILE(selesai)
				    	fprintf(fpointer," Diskon\t: %d persen\n",diskonpersen);}	
					    fprintf(fpointer," Total\t: Rp.%d (Ppn 5 persen)\n",total);
					    fprintf(fpointer,"-----------------------------------------------------------------\n");
					    fprintf(fpointer," Pembayaran\t: Rp.%d\n",pembayaran);
					    fprintf(fpointer," Kembalian\t: Rp.%d\n",Pembayaran_Kembalian(total,pembayaran));
					    fprintf(fpointer," Anda hemat\t: Rp. %d\n",hemat);
					    fprintf(fpointer,"===================================================================\n");
					    fprintf(fpointer,"              ** TERIMA KASIH TELAH MAKAN DISINI ! **      \n");
				    	fprintf(fpointer,"===================================================================\n");
					    fclose(fpointer);
				if (point == 0){
				    selesai();}
				    qtyayce=0,qtypaket=0,qtyappetizer=0,qtymcourse=0,qtydessert=0,qtybeverages=0;
					totalayce=0,totalpaket=0,totalappetizer=0,totalmcourse=0,totaldessert=0,totalbeverages=0;
					subtotal=0,total=0;
				    selesai();
				    terima_kasih();
		    		main();}
				else if (pembayaran > total){
		    		kembalian=pembayaran-total;
			return kembalian;}
		else if (pembayaran = total){
		kembalian=0;
	return kembalian;}
	}
}

int hitung_poin (int total_belanja){
    int poin = total_belanja / 200000;
    return poin;
}

int tukar_poin (int point){
	int pilih,pil2,pilihan;
    struct merchandise gantungan_kunci,payung,boneka;
	    gantungan_kunci.point = 2;
	    payung.point=5;
	    boneka.point=7;
    	printf("\t\t\t\t\t\t** Point total Anda : %d **\n\n",point);
    do {
        puts	("\t\t\t\t\tIngin tukar point dengan apa?");
        puts	("\t\t\t\t\t1.Gantungan kunci (2 Point)");
        puts	("\t\t\t\t\t2.Payung          (5 Point)");
        puts	("\t\t\t\t\t3.Boneka          (7 Point)");
        printf	("\t\t\t\t\tSilakan masukkan nomor pilihan Anda : ");scanf("%d",&pilih);
        new_line();
		if (pilih == 1){
            if( point < gantungan_kunci.point){
            	point_tidakcukup();
            	break;}
		            point -= gantungan_kunci.point;
		            puts	("\t\t\t\t\t-----------------------------------------------------");
		            puts	("\t\t\t\t\t|~ Selamat! ~                                       |");
		            puts	("\t\t\t\t\t|> Anda mendapatkan Gantungan kunci! ~              |");
		            printf	("\t\t\t\t\t|> Sisa point Anda : %d                             ||\n",point);
		            puts	("\t\t\t\t\t-----------------------------------------------------");
		            puts	("\t\t\t\t\tTukar point lagi? (Ketik 1 untuk Ya dan 2 untuk Tidak)");
					printf	("\t\t\t\t\tPilihan >> ");scanf("%d",&pilihan);
        }
        else if(pilih == 2){
            if(point < payung.point){
            	point_tidakcukup();
            break;}
            puts	("\t\t\t\t\tSilakan pilih warna merchandise yang Anda sukai : ");
            puts	("\t\t\t\t\t1.Merah");
            puts	("\t\t\t\t\t2.Biru");
            puts	("\t\t\t\t\t3.Hitam");
            printf	("\t\t\t\t\tSilakan masukkan angka dari pilihan : ");scanf("%d",&pil2);
        if(pil2 == 1){
            strcpy (payung.pilihan_warna,"Merah");
		} else if(pil2==2){
            strcpy (payung.pilihan_warna," Biru");
        } else if(pil2==3){
            strcpy (payung.pilihan_warna,"Hitam");
        } else {
                printf("\t\t\t\t\tPilih warna berdasarkan list yang tersedia (Masukkan Angka saja) : \n");
            }
            point -= payung.point;
            puts	("\t\t\t\t\t-----------------------------------------------------");
            puts	("\t\t\t\t\t|~ Selamat! ~                                       |");
            printf	("\t\t\t\t\t|> Anda mendapatkan Payung Berwarna : %s!       ~|\n",payung.pilihan_warna);
            printf	("\t\t\t\t\t|> Sisa point anda : %d                             ||\n",point);
            puts	("\t\t\t\t\t-----------------------------------------------------");
            puts	("\t\t\t\t\tTukar point lagi? (Ketik 1 untuk Ya dan 2 untuk Tidak)");
			printf	("\t\t\t\t\tPilihan >> ");scanf("%d",&pilihan);
        } else if(pilih == 3){
        	if(point <boneka.point){
            	point_tidakcukup();
            	break;}
		            point -= boneka.point;
		            puts	("\t\t\t\t\t-----------------------------------------------------");
		            puts	("\t\t\t\t\t|~ Selamat! ~                                       |");
		            puts	("\t\t\t\t\t|> Anda mendapatkan Boneka Mascot! ~                |");
		            printf	("\t\t\t\t\t|> Sisa point Anda : %d                             ||\n",point);
		            puts	("\t\t\t\t\t-----------------------------------------------------");
		            puts	("\t\t\t\t\tTukar point lagi?");
		            puts	("\t\t\t\t\t1.Ya");
					puts	("\t\t\t\t\t2.Tidak");
					printf	("\t\t\t\t\tPilihan >> ");scanf("%d",&pilihan);
    		}
    	} while(pilihan == 1 && point > 0);
	 		if(point == 0){
            puts("\n\t\t\t\tPoint Anda sudah habis. Silakan lakukan transaksi lain untuk menambah point.");
			}
	return point;
}

int Ppn(int total){
	total = total+(total*5/100);
	return total;
}

int persentase_diskon (int total){
    int diskon;
	    if(total >= 1000000){
	        diskon = 6;
	    return diskon;}
	return diskon;
}

int Diskon(int total){						// ====>  OPERASI PENGHITUNGAN DISKON  <==== //
	if (total >= 1000000){
		total=total-(total*6/100);
		puts("\n\t\t\t** Selamat Anda Mendapat Diskon sebesar 6 persen! Silakan Cek Total Belanja Anda. **");
        return total;}
    return total;
}

int tukar_point(){
	puts ("\n\t\t\t\t       =====================================================");
	puts ("\t\t\t\t       Apakah anda ingin menukar point?");
	puts ("\t\t\t\t       1.Ya");
	puts ("\t\t\t\t       2.Tidak");
}

int get_point(){							// ====>  OPERASI PEMANGGILAN POINT <- FILE  <==== //
    int temp;
    FILE *fpointer;
    	fpointer = fopen(path,"r");
    	fscanf(fpointer,"%d",&temp);
    fclose(fpointer);
    return temp;
}
