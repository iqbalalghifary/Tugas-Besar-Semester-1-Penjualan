#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
int main(){
 	int menu,pil2,pil3,pil4,pil5,kuantitas,pembayaran,point,diskonpersen;
	char Lanjut;
	start:
	system("color F0");
	loading();
	data();					//Menjalankan program dari pemunculan menu makanan sampai selesai dibeli
	loading();
	    new_line();			//PENDAFTARAN MEMBER(Mulai)
		puts	("\t\t\t\t\t\tApakah Anda terdaftar sebagai Member?");
		puts	("\t\t\t\t\t\t1.Ya");
		puts	("\t\t\t\t\t\t2.Tidak");
		printf	("\t\t\t\t\t\tPilihan >> ");scanf("%d",&pil2);
    	if(pil2 == 1)
        	cek_member();
    	if (a == 0 || pil2 == 2){
	   		new_line();
			puts	("\t\t\t\t\t\tApakah Anda ingin menjadi Member?");
			puts	("\t\t\t\t\t\t1.Ya");
			puts	("\t\t\t\t\t\t2.Tidak");
			printf	("\t\t\t\t\t\tPilihan >> ");scanf("%d",&pil3);
	   	if  (pil3 == 1){
	    	new_line();
		    printf	("\t\t\t\t\tMasukan Nama Depan Anda : ");scanf("%s",&nama);
	        strcpy	(path,nama);
		    strcat	(path,".txt");
			jadi_member();
		    a=0;}
	    else if (pil3 == 1 && pil2 == 1){
	     	jadi_member();
			} else {
		    	system("cls");
				terima_kasih();}}
		else if (a == 1){
	        strcpy(path,nama);
	        strcat(path,".txt");}	//--------------------------------------------------------====> PENDAFTARAN MEMBER(selesai)							
			ulangi:
			mendaftar_member();
			printf	("\n\t\t\t\t\tApakah anda ingin melanjutkan? (y/t): "); scanf("%c",&Lanjut);
	switch (Lanjut){
		case 'Y':
			goto ulangi;
				break;
		case 'y':
			goto ulangi;
			break;
		case 'T':
			goto start;
			break;
		case 't':
			goto start;
			break;
		}
}
