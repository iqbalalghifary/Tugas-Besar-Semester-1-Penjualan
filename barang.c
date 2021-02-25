#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "barang.h"
#include "menu.h"

void menu_utama(struct list *daftar){			// ====>    DAFTAR MENU   <==== //
 	puts	("\n\t\t\t\t|===================== NOW YOUR CHOICE ! =====================|");
	puts	("\t\t\t\t|                 All You Can Eat Resto & Bar                 |");
    puts	("\t\t\t\t+=============================================================+");
    printf	("\t\t\t\t|\t\t  1\t%s\t\t      |\n",daftar[1].nama						  );
    puts	("\t\t\t\t|-------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t  2.\t     %s\t\t\t      |\n",daftar[2].nama				  );
    puts	("\t\t\t\t|-------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t  3.\t   %s \t  \t\t      |\n",daftar[3].nama			  );
    puts	("\t\t\t\t|-------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t  4.\t  %s \t  \t\t      |\n",daftar[4].nama				  );
    puts	("\t\t\t\t|-------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t  5.\t    %s \t  \t\t      |\n",daftar[5].nama			  );
    puts	("\t\t\t\t+-------------------------------------------------------------+");
    printf	("\t\t\t\t|\t\t  6.\t   %s \t  \t\t      |\n",daftar[6].nama		      );
    puts	("\t\t\t\t+-------------------------------------------------------------+");
}

void menu_ayce(struct list *ayce){			// ====>    DAFTAR MENU   <==== //
 	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
    puts	("\t\t\t\t+===============================================================+");
    printf	("\t\t\t\t|\t\t   1 \t   %s \t\t\t\t|\n",ayce[1].nama						  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   2. \t    %s \t\t\t\t|\n",ayce[2].nama				  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   3. \t    %s \t\t\t\t|\n",ayce[3].nama			  );
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   4. \t     %s \t\t\t\t|\n",ayce[4].nama				  );
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|  << Main Menu (0)|                                            |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}

void menu_paket(struct list *paket){			// ====>    DAFTAR PAKET   <==== //
 	puts	("\n\t\t     |================================= NOW YOUR CHOICE ! =================================|");
	puts	("\t\t     |                             All You Can Eat Resto & Bar                             |");
    puts	("\t\t     +=====================================================================================+");
    printf	("\t\t     |   1.%s |  2.%s   |  3.%s   |  4.%s  |\n",paket[1].nama,paket[2].nama,paket[3].nama,paket[4].nama);
    puts	("\t\t     |-------------------------------------------------------------------------------------|");
    puts	("\t\t     |       Karedok      | Nasu no Agebitashi  |  Vinaigrette Salad  |      Bibimbap      |");
    puts	("\t\t     |     Bubur Manado   |      Yakisobu       |   Tortellini Soup   |    Jjajangmyeon    |");
    puts	("\t\t     |    Ayam Taliwang   |    Beef Tandoori    |     Cordon Bleu     |      Bulgogi       |");
    puts	("\t\t     |    Coto Makassar   |     Sesame Tuna     |    Sirloin Steak    |     Tteokbokki     |");
    puts	("\t\t     |       Mie Aceh     |   Teriyaki Steak    |  Beef Escalloppini  |      Gogigui       |");
    puts	("\t\t     |  Dori Sambal Matah |     Gyudon Beef     |    Grilled Emince   |     Mul Kimchi     |");
    puts	("\t\t     |        Papeda      | Chicken Katsu Curry |  Chicken Bruschetta |     Samgyeopsal    |");
    puts	("\t\t     |-------------------------------------------------------------------------------------|");
    puts	("\t\t     |\t\t\t\t\t     With :\t\t\t\t\t   |");
    puts	("\t\t     |\t\t\t\t      Free To Choice Juice\t\t\t\t   |");
    puts	("\t\t     |\t\t\t\t\t      and\t\t\t\t\t   |");
    puts	("\t\t     |\t\t\t\t          Hot/Ice Tea\t\t\t\t\t   |");
    puts	("\t\t     +-------------------------------------------------------------------------------------+");
    puts	("\t\t     |  << Main Menu (0)|                                                                  |");
    puts	("\t\t     +-------------------------------------------------------------------------------------+");
}

void menu_appetizer(struct list *appetizer){			// ====>    DAFTAR APPETIZER   <==== //
	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
    puts	("\t\t\t\t+===============================================================+");
    puts	("\t\t\t\t|                     Indonesian Appetizer                      |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    printf	("\t\t\t\t|     1.%s\t\t2.%s\t  3.%s\t|\n",appetizer[1].nama,appetizer[2].nama,appetizer[3].nama);
    printf	("\t\t\t\t|     4.%s\t\t5.%s\t  6.%s\t        |\n",appetizer[4].nama,appetizer[5].nama,appetizer[6].nama);
    printf	("\t\t\t\t|     7.%s\t\t8.%s \t\t  9.%s\t        |\n",appetizer[7].nama,appetizer[8].nama,appetizer[9].nama);
    printf	("\t\t\t\t|    10.%s          11.%s \t 12.%s\t        |\n",appetizer[10].nama,appetizer[11].nama,appetizer[12].nama);
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|                      American Appetizer                       |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    printf	("\t\t\t\t|    13.%s     14.%s   15.%s\t|\n",appetizer[13].nama,appetizer[14].nama,appetizer[15].nama);
    printf	("\t\t\t\t|    16.%s         17.%s      18.%s\t|\n",appetizer[16].nama,appetizer[17].nama,appetizer[18].nama);
    printf	("\t\t\t\t|    19.%s         20.%s\t\t 21.%s\t|\n",appetizer[19].nama,appetizer[20].nama,appetizer[21].nama);
    printf	("\t\t\t\t|    22.%s   23.%s  24.%s   |\n",appetizer[22].nama,appetizer[23].nama,appetizer[24].nama);
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|                      Japanese Appetizer                       |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    printf	("\t\t\t\t|    25.%s      26.%s          27.%s   |\n",appetizer[25].nama,appetizer[26].nama,appetizer[27].nama);
    printf	("\t\t\t\t|    28.%s  29.%s\t 30.%s   |\n",appetizer[28].nama,appetizer[29].nama,appetizer[30].nama);
    printf	("\t\t\t\t|    31.%s   32.%s \t 33.%s     |\n",appetizer[31].nama,appetizer[32].nama,appetizer[33].nama);
    printf	("\t\t\t\t|    34.%s    35.%s    36.%s    |\n",appetizer[34].nama,appetizer[35].nama,appetizer[36].nama);
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|  << Main Menu (0)|                                            |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}

void menu_mcourse(struct list *mcourse){			// ====>    DAFTAR MENU   <==== //
	puts	("\n\t\t\t    |========================== NOW YOUR CHOICE ! ===========================|");
	puts	("\t\t\t    |                      All You Can Eat Resto & Bar                       |");
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    puts	("\t\t\t    |                           Indonesian Dish                              |");
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    printf	("\t\t\t    |    1.%s \t\t2.%s \t      3.%s \t     |\n",mcourse[1].nama,mcourse[2].nama,mcourse[3].nama);
    printf	("\t\t\t    |    4.%s \t5.%s \t      6.%s \t\t     |\n",mcourse[4].nama,mcourse[5].nama,mcourse[6].nama);
    printf	("\t\t\t    |    7.%s \t\t8.%s \t      9.%s \t     |\n",mcourse[7].nama,mcourse[8].nama,mcourse[9].nama);
    printf	("\t\t\t    |   10.%s \t       11.%s      12.%s \t     |\n",mcourse[10].nama,mcourse[11].nama,mcourse[12].nama);
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    puts	("\t\t\t    |                            American Dish                               |");
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    printf	("\t\t\t    |   13.%s      14.%s     15.%s    |\n",mcourse[13].nama,mcourse[14].nama,mcourse[15].nama);
    printf	("\t\t\t    |   16.%s      17.%s    18.%s   |\n",mcourse[16].nama,mcourse[17].nama,mcourse[18].nama);
    printf	("\t\t\t    |   19.%s   20.%s    21.%s     |\n",mcourse[19].nama,mcourse[20].nama,mcourse[21].nama);
    printf	("\t\t\t    |   22.%s      23.%s \t     24.%s   |\n",mcourse[22].nama,mcourse[23].nama,mcourse[24].nama);
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    puts	("\t\t\t    |                            Japanese Dish                               |");
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    printf	("\t\t\t    |   25.%s \t       26.%s \t     27.%s     |\n",mcourse[25].nama,mcourse[26].nama,mcourse[27].nama);
    printf	("\t\t\t    |   28.%s \t       29.%s  30.%s      |\n",mcourse[28].nama,mcourse[29].nama,mcourse[30].nama);
    printf	("\t\t\t    |   31.%s \t       32.%s \t     33.%s      |\n",mcourse[31].nama,mcourse[32].nama,mcourse[33].nama);
    printf	("\t\t\t    |   34.%s       35.%s \t     36.%s     |\n",mcourse[34].nama,mcourse[35].nama,mcourse[36].nama);
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    puts	("\t\t\t    |  << Main Menu (0)|                                                     |");
    puts	("\t\t\t    +------------------------------------------------------------------------+");
}

void menu_dessert(struct list *dessert){			// ====>    DAFTAR MENU   <==== //
	puts	("\n\t\t\t    |========================== NOW YOUR CHOICE ! ===========================|");
	puts	("\t\t\t    |                      All You Can Eat Resto & Bar                       |");
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    printf	("\t\t\t    |     1.%s      2.%s       3.%s      |\n",dessert[1].nama,dessert[2].nama,dessert[3].nama);
    printf	("\t\t\t    |     4.%s \t       5.%s \t      6.%s \t     |\n",dessert[4].nama,dessert[5].nama,dessert[6].nama);
    printf	("\t\t\t    |     7.%s \t       8.%s \t      9.%s \t     |\n",dessert[7].nama,dessert[8].nama,dessert[9].nama);
    printf	("\t\t\t    |    10.%s \t      11.%s \t     12.%s \t     |\n",dessert[10].nama,dessert[11].nama,dessert[12].nama);
    printf	("\t\t\t    |    13.%s      14.%s \t     15.%s \t     |\n",dessert[13].nama,dessert[14].nama,dessert[15].nama);
    printf	("\t\t\t    |    16.%s   17.%s     18.%s \t     |\n",dessert[16].nama,dessert[17].nama,dessert[18].nama);
    printf	("\t\t\t    |    19.%s       20.%s      21.%s   |\n",dessert[19].nama,dessert[20].nama,dessert[21].nama);
    printf	("\t\t\t    |    22.%s       23.%s      24.%s \t     |\n",dessert[22].nama,dessert[23].nama,dessert[24].nama);
    printf	("\t\t\t    |    25.%s     26.%s  27.%s \t     |\n",dessert[25].nama,dessert[26].nama,dessert[27].nama);
    printf	("\t\t\t    |    28.%s         29.%s \t     30.%s      |\n",dessert[28].nama,dessert[29].nama,dessert[30].nama);
    puts	("\t\t\t    +------------------------------------------------------------------------+");
    puts	("\t\t\t    |  << Main Menu (0)|                                                     |");
    puts	("\t\t\t    +------------------------------------------------------------------------+");
}

void menu_beverages(struct list *beverages){			// ====>    DAFTAR MENU   <==== //
	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|                            Juice                              |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    printf	("\t\t\t\t|     1.%s   2.%s      3.%s \t|\n",beverages[1].nama,beverages[2].nama,beverages[3].nama);
    printf	("\t\t\t\t|     4.%s \t   5.%s     6.%s \t|\n",beverages[4].nama,beverages[5].nama,beverages[6].nama);
    printf	("\t\t\t\t|     7.%s\t   8.%s       9.%s \t|\n",beverages[7].nama,beverages[8].nama,beverages[9].nama);
    printf	("\t\t\t\t|    10.%s \t  11.%s     12.%s \t|\n",beverages[10].nama,beverages[11].nama,beverages[12].nama);
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|                            Drink                              |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    printf	("\t\t\t\t|    13.%s   14.%s   15.%s \t|\n",beverages[13].nama,beverages[14].nama,beverages[15].nama);
	printf	("\t\t\t\t|    16.%s \t\t  17.%s      18.%s \t|\n",beverages[16].nama,beverages[17].nama,beverages[18].nama);
    printf	("\t\t\t\t|    19.%s \t  20.%s      21.%s \t|\n",beverages[19].nama,beverages[20].nama,beverages[21].nama);
    printf	("\t\t\t\t|    22.%s \t  23.%s     24.%s \t|\n",beverages[22].nama,beverages[23].nama,beverages[24].nama);
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|  << Main Menu (0)|                         |BAR Menu(99) >>   |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}

void menu_coffee(struct list *beverages){
	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|                            Coffee                             |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    printf	("\t\t\t\t|     1.%s \t   2.%s \t\t 3.%s \t|\n",beverages[43].nama,beverages[44].nama,beverages[45].nama);
    printf	("\t\t\t\t|     4.%s \t\t   5.%s \t\t 6.%s \t|\n",beverages[46].nama,beverages[47].nama,beverages[48].nama);
    printf	("\t\t\t\t|     7.%s\t   8.%s \t\t 9.%s \t|\n",beverages[49].nama,beverages[50].nama,beverages[51].nama);
    printf	("\t\t\t\t|    10.%s \t  11.%s \t12.%s \t|\n",beverages[52].nama,beverages[53].nama,beverages[54].nama);
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|   << Back (0)|                                                |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}

void menu_bar(struct list *beverages){
	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
	puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t| - - - - - - - - - - - - =  B A R  = - - - - - - - - - - - - - |");
    puts	("\t\t\t\t|                          Cocktails                            |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    printf	("\t\t\t\t|     1.%s \t 2.%s       3.%s \t|\n",beverages[25].nama,beverages[26].nama,beverages[27].nama);
    printf	("\t\t\t\t|     4.%s \t 5.%s         6.%s \t|\n",beverages[28].nama,beverages[29].nama,beverages[30].nama);
    printf	("\t\t\t\t|     7.%s \t 8.%s        9.%s \t|\n",beverages[31].nama,beverages[32].nama,beverages[33].nama);
    printf	("\t\t\t\t|    10.%s \t11.%s   12.%s \t|\n",beverages[34].nama,beverages[35].nama,beverages[36].nama);
    printf	("\t\t\t\t|    13.%s \t\t14.%s    15.%s \t|\n",beverages[37].nama,beverages[38].nama,beverages[39].nama);
    printf	("\t\t\t\t|    16.%s \t17.%s     18.%s \t|\n",beverages[40].nama,beverages[41].nama,beverages[42].nama);
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|                         Beer & Other                          |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
    puts	("\t\t\t\t|   << Back (0)|                                                |");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}

void daftar_belanjaan(){
	puts("\n\t\t\t\t=================================================================");
	puts("\t\t\t\t===================== NYC! Struk Pembelian ======================");
	puts("\t\t\t\t _______________________________________________________________");
	puts("\t\t\t\t||        Menu        ||  Jumlah Pembelian  ||      Total      ||");
	if(totalayce>=100000 && totalayce < 1000000){
		printf("\t\t\t\t||   All You Can Eat  ||\t %d \t    || \t   %d      ||\n",qtyayce,totalayce);}
	if(totalayce>=1000000){
		printf("\t\t\t\t||   All You Can Eat  ||\t %d \t    || \t   %d     ||\n",qtyayce,totalayce);}
	if(totalpaket>=100000 && totalpaket < 1000000){
		printf("\t\t\t\t||        Paket       ||\t %d \t    || \t   %d      ||\n",qtypaket,totalpaket);}
	if(totalpaket>=1000000){
		printf("\t\t\t\t||        Paket       ||\t %d \t    || \t   %d     ||\n",qtypaket,totalpaket);}
	if(totalappetizer>0){	
		printf("\t\t\t\t||      Appetizer     ||\t %d \t    || \t    %d      ||\n",qtyappetizer,totalappetizer);}
	if(totalappetizer>=100000 && totalappetizer < 1000000){
		printf("\t\t\t\t||      Appetizer     ||\t %d \t    || \t   %d      ||\n",qtyappetizer,totalappetizer);}
	if(totalappetizer>=1000000){
		printf("\t\t\t\t||      Appetizer     ||\t %d \t    || \t   %d     ||\n",qtyappetizer,totalappetizer);}
	if(totalmcourse>0){
		printf("\t\t\t\t||     Main Course    ||\t %d \t    || \t    %d      ||\n",qtymcourse,totalmcourse);}	
	if(totalmcourse>=100000 && totalmcourse < 1000000){
		printf("\t\t\t\t||     Main Course    ||\t %d \t    || \t   %d      ||\n",qtymcourse,totalmcourse);}
	if(totalmcourse>=1000000){
		printf("\t\t\t\t||     Main Course    ||\t %d \t    || \t   %d     ||\n",qtymcourse,totalmcourse);}
	if(totaldessert>0){
		printf("\t\t\t\t||       Dessert      ||\t %d \t    || \t    %d      ||\n",qtydessert,totaldessert);}
	if(totaldessert>=100000 && totaldessert < 1000000){
		printf("\t\t\t\t||       Dessert      ||\t %d \t    || \t   %d      ||\n",qtydessert,totaldessert);}
	if(totaldessert>=1000000){
		printf("\t\t\t\t||       Dessert      ||\t %d \t    || \t   %d     ||\n",qtydessert,totaldessert);}
	if(totalbeverages>0){	
		printf("\t\t\t\t||      Beverages     ||\t %d \t    || \t    %d      ||\n",qtybeverages,totalbeverages);}
	if(totalbeverages>=100000 && totalbeverages < 1000000){
		printf("\t\t\t\t||      Beverages     ||\t %d \t    || \t   %d      ||\n",qtybeverages,totalbeverages);}	
	if(totalbeverages>=1000000){
		printf("\t\t\t\t||      Beverages     ||\t %d \t    || \t   %d     ||\n",qtybeverages,totalbeverages);}
		printf	("\t\t\t\t----------------------------------------------------------------\n");
}
void Gulai(){
	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
    puts	("\t\t\t\t+===============================================================+");
    printf	("\t\t\t\t|\t\t   1\tDaging Sapi\t\t\t        |\n");
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   2.\tDaging Kambing\t\t\t        |\n");
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   3.\tDaging Kalkun\t\t\t        |\n");
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   4.\tDaging Ikan\t\t\t        |\n");
    puts	("\t\t\t\t+---------------------------------------------------------------+");
}
void Iga(){
	puts	("\n\t\t\t\t|====================== NOW YOUR CHOICE ! ======================|");
	puts	("\t\t\t\t|                  All You Can Eat Resto & Bar                  |");
    puts	("\t\t\t\t+===============================================================+");
    printf	("\t\t\t\t|\t\t   1\tDaging Sapi\t\t\t        |\n");
    puts	("\t\t\t\t|---------------------------------------------------------------|");
    printf	("\t\t\t\t|\t\t   2.\tDaging Kambing\t\t\t        |\n");
    puts	("\t\t\t\t|---------------------------------------------------------------|");
}
int data(){					//Memrogram bagian awal sampai selesai membeli belanjaan
	struct tm *waktu;
	time_t Tval;
	Tval=time(NULL);
	waktu=localtime(&Tval);
	waktu->tm_year+51;
	int flag=0;
	int totalppn=0, total=0;
    struct list daftar[6];		//------------------------====> LIST SEMUA daftar <==== //
	    daftar[1].nama = "All You Can Eat!";
		daftar[2].nama = "Paket";
		daftar[3].nama = "Appetizer";
	    daftar[4].nama = "Main Course";
	    daftar[5].nama = "Dessert";
	    daftar[6].nama = "Beverages";
    struct list ayce[5];		//------------------------====> LIST SEMUA ayce <==== //
	    ayce[1].nama = "Indonesian";
	    ayce[1].harga = 180000;
		ayce[2].nama = "Japanese";
		ayce[2].harga = 200000;
		ayce[3].nama = "American";
		ayce[3].harga = 300000;
	    ayce[4].nama = "Korean";
	    ayce[4].harga = 200000;
    struct list paket[5];		//------------------------====> LIST SEMUA paket <==== //
	    paket[1].nama = "Paket 1 (199k)";
	    paket[1].harga = 199000;
	    paket[2].nama = "Paket 2 (249k)";
	    paket[2].harga = 249000;
	    paket[3].nama = "Paket 3 (299k)";
	    paket[3].harga = 299000;
	    paket[4].nama = "Paket 4 (249k)";
	    paket[4].harga = 249000;
    struct list appetizer[37];		//------------------------====> LIST SEMUA appetizer <==== //
	    appetizer[1].nama = "Seblak";
	    appetizer[1].harga = 12000;
	    appetizer[2].nama = "Batagor";
	    appetizer[2].harga = 15000;
	    appetizer[3].nama = "Martabak Telor";
	    appetizer[3].harga = 18000;
	    appetizer[4].nama = "Cuanki";
	    appetizer[4].harga = 15000;
	    appetizer[5].nama = "Lumpia";
	    appetizer[5].harga = 12000;
	    appetizer[6].nama = "Pastel";
	    appetizer[6].harga = 12000;
	    appetizer[7].nama = "Risoles";
	    appetizer[7].harga = 12000;
	    appetizer[8].nama = "Gehu";
	    appetizer[8].harga = 12000;
	    appetizer[9].nama = "Surabi";
	    appetizer[9].harga = 12000;
	    appetizer[10].nama = "Pecel";
	    appetizer[10].harga = 14000;
	    appetizer[11].nama = "Bala-Bala";
	    appetizer[11].harga = 12000;
	    appetizer[12].nama = "Peuyeum";
	    appetizer[12].harga = 10000;
	    appetizer[13].nama = "Ballotines";
	    appetizer[13].harga = 20000;
	    appetizer[14].nama = "Porcini Soup";
	    appetizer[14].harga = 20000;
	    appetizer[15].nama = "Poach Salmon";
	    appetizer[15].harga = 38000;
	    appetizer[16].nama = "Hummus";
	    appetizer[16].harga = 38000;
	    appetizer[17].nama = "Galantine";
	    appetizer[17].harga = 38000;
	    appetizer[18].nama = "Nicoise Salad";
	    appetizer[18].harga = 20000;
	    appetizer[19].nama = "Burger";
	    appetizer[19].harga = 20000;
	    appetizer[20].nama = "Taco";
	    appetizer[20].harga = 20000;
	    appetizer[21].nama = "Waldorf Salad";
	    appetizer[21].harga = 20000;
	    appetizer[22].nama = "French Toast";
	    appetizer[22].harga = 20000;
	    appetizer[23].nama = "Tuna Sandwich";
	    appetizer[23].harga = 20000;
	    appetizer[24].nama = "Chicken mayonaise";
	    appetizer[24].harga = 20000;
	    appetizer[25].nama = "Negi Tako";
	    appetizer[25].harga = 20000;
	    appetizer[26].nama = "Sushi";
	    appetizer[26].harga = 20000;
	    appetizer[27].nama = "Lime Baked Shrimp";
	    appetizer[27].harga = 20000;
	    appetizer[28].nama = "Potato Gratin";
	    appetizer[28].harga = 20000;
	    appetizer[29].nama = "hiyashi Soba";
	    appetizer[29].harga = 20000;
	    appetizer[30].nama = "Beef Oroshi-Ponzu";
	    appetizer[30].harga = 20000;
	    appetizer[31].nama = "Albacore App";
	    appetizer[31].harga = 20000;
	    appetizer[32].nama = "Chasoba";
	    appetizer[32].harga = 20000;
	    appetizer[33].nama = "Dynamite Shrimp";
	    appetizer[33].harga = 20000;
	    appetizer[34].nama = "Seared Tuna";
	    appetizer[34].harga = 20000;
	    appetizer[35].nama = "Chawanmushi";
	    appetizer[35].harga = 20000;
	    appetizer[36].nama = "Cucuber Sunomono";
	    appetizer[36].harga = 20000;
    struct list mcourse[37];		//------------------------====> LIST SEMUA mcourse <==== //
	    mcourse[1].nama = "Nasi Goreng";
	    mcourse[1].harga = 22000;
	    mcourse[2].nama = "Bakso";
	    mcourse[2].harga = 20000;
	    mcourse[3].nama = "Iga Bakar";
	    mcourse[3].harga = 28000;
	    mcourse[4].nama = "Nasi Rendang";
	    mcourse[4].harga = 24000;
	    mcourse[5].nama = "Gulai";
	    mcourse[5].harga = 26000;
	    mcourse[6].nama = "Sate";
	    mcourse[6].harga = 24000;
	    mcourse[7].nama = "Nasi Gudeg";
	    mcourse[7].harga = 20000;
	    mcourse[8].nama = "Rawon";
	    mcourse[8].harga = 18000;
	    mcourse[9].nama = "Empal Gentong";
	    mcourse[9].harga = 24000;
	    mcourse[10].nama = "Gado-Gado";
	    mcourse[10].harga = 18000;
	    mcourse[11].nama = "Soto Lamongan";
	    mcourse[11].harga = 22000;
	    mcourse[12].nama = "Ayam Bekakak";
	    mcourse[12].harga = 28000;
	    mcourse[13].nama = "NY strip Roast";
	    mcourse[13].harga = 38000;
	    mcourse[14].nama = "Bourbon Salmon";
	    mcourse[14].harga = 38000;
	    mcourse[15].nama = "Crawfish Etouffee";
	    mcourse[15].harga = 38000;
	    mcourse[16].nama = "American Chili";
	    mcourse[16].harga = 38000;
	    mcourse[17].nama = "Vegan Jambalaya";
	    mcourse[17].harga = 38000;
	    mcourse[18].nama = "Southern Smothered";
	    mcourse[18].harga = 38000;
	    mcourse[19].nama = "Memphis Back Ribs";
	    mcourse[19].harga = 38000;
	    mcourse[20].nama = "Andouille Gumbo";
	    mcourse[20].harga = 38000;
	    mcourse[21].nama = "Pasta Puttanesca";
	    mcourse[21].harga = 38000;
	    mcourse[22].nama = "Dandelion Loin";
	    mcourse[22].harga = 38000;
	    mcourse[23].nama = "Meat Loaf";
	    mcourse[23].harga = 38000;
	    mcourse[24].nama = "Maine Lobster Bake";
	    mcourse[24].harga = 38000;
	    mcourse[25].nama = "Shigureni";
	    mcourse[25].harga = 38000;
	    mcourse[26].nama = "Karaage";
	    mcourse[26].harga = 38000;
	    mcourse[27].nama = "Chicken Katsudon";
	    mcourse[27].harga = 38000;
	    mcourse[28].nama = "Yakitori";
	    mcourse[28].harga = 38000;
	    mcourse[29].nama = "Butter Shoyu Beef";
	    mcourse[29].harga = 38000;
	    mcourse[30].nama = "Chicken Tempura";
	    mcourse[30].harga = 38000;
	    mcourse[31].nama = "Bulgogi";
	    mcourse[31].harga = 38000;
	    mcourse[32].nama = "Shogayaki";
	    mcourse[32].harga = 38000;
	    mcourse[33].nama = "Spring Yakiniku";
	    mcourse[33].harga = 38000;
	    mcourse[34].nama = "Saikoro Steak";
	    mcourse[34].harga = 38000;
	    mcourse[35].nama = "Shiozake";
	    mcourse[35].harga = 38000;
	    mcourse[36].nama = "Catfish Kabayaki";
	    mcourse[36].harga = 38000;
    struct list dessert[31];		//------------------------====> LIST SEMUA dessert <==== //
	    dessert[1].nama = "Brownies Cake";
	    dessert[1].harga = 12000;
	    dessert[2].nama = "Banana Caramel";
	    dessert[2].harga = 12000;
	    dessert[3].nama = "Marshmellow Ice";
	    dessert[3].harga = 12000;
	    dessert[4].nama = "Choco Lava";
	    dessert[4].harga = 12000;
	    dessert[5].nama = "Apple Crumbl";
	    dessert[5].harga = 12000;
	    dessert[6].nama = "Patbingsu";
	    dessert[6].harga = 12000;
	    dessert[7].nama = "Karabikang";
	    dessert[7].harga = 12000;
	    dessert[8].nama = "Lapis Legit";
	    dessert[8].harga = 12000;
	    dessert[9].nama = "Kolak Pisang";
	    dessert[9].harga = 13000;
	    dessert[10].nama = "Es Cincau";
	    dessert[10].harga = 12000;
	    dessert[11].nama = "Sagu Gula";
	    dessert[11].harga = 10000;
	    dessert[12].nama = "Es Campur";
	    dessert[12].harga = 12000;
	    dessert[13].nama = "Bubur Sumsum";
	    dessert[13].harga = 12000;
	    dessert[14].nama = "Mochi Ice";
	    dessert[14].harga = 10000;
	    dessert[15].nama = "Pancake";
	    dessert[15].harga = 17500;
	    dessert[16].nama = "Pudding Custard";
	    dessert[16].harga = 12000;
	    dessert[17].nama = "Avogato Crunchy";
	    dessert[17].harga = 12000;
	    dessert[18].nama = "Jipangyi";
	    dessert[18].harga = 10000;
	    dessert[19].nama = "Panna Cotta";
	    dessert[19].harga = 12000;
	    dessert[20].nama = "Frozen Yoghurt";
	    dessert[20].harga = 12000;
	    dessert[21].nama = "Caramel Cheesecake";
	    dessert[21].harga = 12000;
	    dessert[22].nama = "Pumpkin Pie";
	    dessert[22].harga = 10000;
	    dessert[23].nama = "Apple Meringue";
	    dessert[23].harga = 13500;
	    dessert[24].nama = "Silk Pie";
	    dessert[24].harga = 13000;
	    dessert[25].nama = "Raspberry Pie";
	    dessert[25].harga = 12000;
	    dessert[26].nama = "Blueberry Pavlovas";
	    dessert[26].harga = 12000;
	    dessert[27].nama = "English Toffee";
	    dessert[27].harga = 12000;
	    dessert[28].nama = "Lemon Pie";
	    dessert[28].harga = 12000;
	    dessert[29].nama = "Ice Cream Mix";
	    dessert[29].harga = 12000;
	    dessert[30].nama = "Red Velvet Cake";
	    dessert[30].harga = 17500;
    struct list beverages[54];		//------------------------====> LIST SEMUA beverages <==== //
	    beverages[1].nama = "Strawberry Juice";
	    beverages[1].harga = 18000;
	    beverages[2].nama = "Banana Juice";
	    beverages[2].harga = 18000;
	    beverages[3].nama = "Apple Juice";
	    beverages[3].harga = 18000;
	    beverages[4].nama = "Orange Juice";
	    beverages[4].harga = 18000;
	    beverages[5].nama = "Avocado Juice";
	    beverages[5].harga = 18000;
	    beverages[6].nama = "Melon Juice";
	    beverages[6].harga = 18000;
	    beverages[7].nama = "Red Guava Juice";
	    beverages[7].harga = 18000;
	    beverages[8].nama = "Mango Juice";
	    beverages[8].harga = 18000;
	    beverages[9].nama = "Lime Juice";
	    beverages[9].harga = 18000;
	    beverages[10].nama = "Soursop Juice";
	    beverages[10].harga = 18000;
	    beverages[11].nama = "Durian Juice";
	    beverages[11].harga = 18000;
	    beverages[12].nama = "Herbal Juice";
	    beverages[12].harga = 18000;
	    beverages[13].nama = "Ice Stone Fruit";
	    beverages[13].harga = 18000;
	    beverages[14].nama = "Ice Lemongrass";
	    beverages[14].harga = 18000;
	    beverages[15].nama = "Ice Lychee";
	    beverages[15].harga = 18000;
	    beverages[16].nama = "Coffee";
		beverages[17].nama = "Ice Coconot";
		beverages[17].harga = 10000;
		beverages[18].nama = "Ice Cucumber";
		beverages[18].harga = 10000;
		beverages[19].nama = "Mocktail";
		beverages[19].harga = 10000;
		beverages[20].nama = "Lime Squash";
		beverages[20].harga = 10000;
		beverages[21].nama = "Smoothies";
		beverages[21].harga = 10000;
		beverages[22].nama = "Milkshake";
		beverages[22].harga = 10000;
		beverages[23].nama = "Orange Mango";
		beverages[23].harga = 10000;
		beverages[24].nama = "Orange Kiwi";
		beverages[24].harga = 10000;
		beverages[25].nama = "Old Fashioned";
		beverages[25].harga = 10000;
		beverages[26].nama = "The Manhattan";
		beverages[26].harga = 10000;
		beverages[27].nama = "Negronis";
		beverages[27].harga = 10000;
		beverages[28].nama = "Dry Martini";
		beverages[28].harga = 10000;
		beverages[29].nama = "The Sazerac";
		beverages[29].harga = 10000;
		beverages[30].nama = "Pisco Sour";
		beverages[30].harga = 10000;
		beverages[31].nama = "Bloody Mary";
		beverages[31].harga = 10000;
		beverages[32].nama = "The Aviation";
		beverages[32].harga = 10000;
		beverages[33].nama = "Gimlets";
		beverages[33].harga = 10000;
		beverages[34].nama = "Gin Fizz";
		beverages[34].harga = 10000;
		beverages[35].nama = "The Boulevardier";
		beverages[35].harga = 10000;
		beverages[36].nama = "Daiquiri";
		beverages[36].harga = 10000;
		beverages[37].nama = "Mojito";
		beverages[37].harga = 10000;
		beverages[38].nama = "French 75 Dates";
		beverages[38].harga = 10000;
		beverages[39].nama = "Moskow Mule";
		beverages[39].harga = 10000;
		beverages[40].nama = "Margarita";
		beverages[40].harga = 10000;
		beverages[41].nama = "Dark n 'Stormy";
		beverages[41].harga = 10000;
		beverages[42].nama = "Whiskey Sour";
		beverages[42].harga = 10000;
		beverages[43].nama = "Americano";
		beverages[43].harga = 10000;
		beverages[44].nama = "Espresso";
		beverages[44].harga = 10000;
		beverages[45].nama = "Cappucinno";
		beverages[45].harga = 10000;
		beverages[46].nama = "Frappe";
		beverages[46].harga = 10000;
		beverages[47].nama = "Macchiato";
		beverages[47].harga = 10000;
		beverages[48].nama = "Latte";
		beverages[48].harga = 10000;
		beverages[49].nama = "Flat White";
		beverages[49].harga = 10000;
		beverages[50].nama = "Affogato";
		beverages[50].harga = 10000;
		beverages[51].nama = "Mocha";
		beverages[51].harga = 10000;
		beverages[52].nama = "Ristretto";
		beverages[52].harga = 10000;
		beverages[53].nama = "Piccolo Latte";
		beverages[53].harga = 10000;
		beverages[54].nama = "Cold Brew";
		beverages[54].harga = 10000;
    do{
	    awal:
	    system("cls");
	    header();
	    menu_utama(daftar);
		printf	("\t\t\t\tSilahkan pilih Menu yang Anda inginkan : "); scanf("%d",&pilmenu);
		do {
			if(pilmenu > 6 || pilmenu == 0){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
				null_number();
				goto awal;}
			} while (pilmenu > 6 || pilmenu == 0);
				loading();
		do {
			switch(pilmenu){
			case 1:
				ayce:
				system("cls");
				header();
				menu_ayce(ayce);
					printf("\t\t\t\tPilih Paket All You Can Eat yang Anda inginkan : ");scanf("%d",&pilayce);
				do{
					if(pilayce > 4){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
						null_number();
					    header();
					    menu_ayce(ayce);				//--------------------------------------------------------====> Maka, PENGULANGAN INPUT paket
						    printf("\t\t\t\tPilih Paket All You Can Eat yang Anda inginkan : ");
						    scanf("%d",&pilayce);}
					if(pilayce == 0){
					goto awal;}}
				while (pilayce > 4 || pilayce == 0);
					ayce->nama=ayce[pilayce].nama;
					ayce->harga=ayce[pilayce].harga;
						printf	("\n\t\t\t\tMenu\t\t : %s (Rp.%d)\n",ayce->nama,ayce->harga);
						printf	("\t\t\t\tJumlah\t\t : ");scanf("%d",&kuantitasayce);
				if(kuantitasayce == 0){
				goto ayce;}
					totayce = hitung_belanjaan(kuantitasayce,pilayce,ayce);
						printf	("\t\t\t\tHarga\t\t : Rp.%d\n",totayce);
					totalayce += totayce;
					qtyayce += kuantitasayce;
				break;
			case 2:
				paket:
				system("cls");
				header();
				menu_paket(paket);
				printf("\t\t\t\tSilahkan pilih Paket yang Anda inginkan : ");scanf("%d",&pilpaket);
				do{
					if(pilpaket > 4){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
						null_number();
					    header();
					    menu_paket(paket);				//--------------------------------------------------------====> Maka, PENGULANGAN INPUT paket
						    printf("\t\t\t\t Silahkan pilih Paket yang Anda inginkan : ");
						    scanf("%d",&pilpaket);}
						if(pilpaket == 0){
						goto awal;}}
				while (pilpaket > 4);
					paket->nama=paket[pilpaket].nama;
					printf	("\n\t\t\t\tMenu\t\t : %s \n",paket->nama);
					printf	("\t\t\t\tJumlah\t\t : ");scanf("%d",&kuantitaspaket);
					if(kuantitaspaket == 0){
					goto paket;}
					totpaket = hitung_belanjaan(kuantitaspaket,pilpaket,paket);
					printf	("\t\t\t\tHarga\t\t : Rp.%d\n",totpaket);
					totalpaket += totpaket;
					qtypaket += kuantitaspaket;
				break;
			case 3:
				appetizer:
				system("cls");
				header();
				menu_appetizer(appetizer);
				printf("\t\t\t\tSilahkan pilih Appetizer yang Anda inginkan : ");scanf("%d",&pilappetizer);
					do{
						if(pilappetizer > 36){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
							null_number();
						  	header();
							menu_appetizer(appetizer);//--------------------------------------------------------====> Maka, PENGULANGAN INPUT paket
							    printf("\t\t\t\tSilahkan pilih Appetizer yang Anda inginkan : ");
							    scanf("%d",&pilappetizer);}
							if(pilappetizer == 0){
							goto awal;}
					}
					while (pilappetizer > 36);
						appetizer->nama=appetizer[pilappetizer].nama;
						appetizer->harga=appetizer[pilappetizer].harga;
							printf	("\n\t\t\t\tMenu\t\t: %s (Rp.%d)\n",appetizer->nama,appetizer->harga);
							printf	("\t\t\t\tJumlah\t\t: ");scanf("%d",&kuantitasappetizer);
						if(kuantitasappetizer == 0){
						goto appetizer;}
							totappetizer = hitung_belanjaan(kuantitasappetizer,pilappetizer,appetizer);
							printf	("\t\t\t\tHarga\t\t: Rp.");printf("%d\n",totappetizer);
							totalappetizer += totappetizer;
							qtyappetizer += kuantitasappetizer;
						break;	
			case 4:
				mcourse:
				gule=0;
				system("cls");
				header();
				menu_mcourse(mcourse);
				printf("\t\t\t\tSilahkan pilih Main Course yang Anda inginkan : ");scanf("%d",&pilmcourse);
					do{
						if(pilmcourse > 36){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
							null_number();
						    goto mcourse;}
						if(pilmcourse == 3){
							do { 
								Iga:
								system("cls");
								header();
								Iga();
								printf("\t\t\t\tSilahkan pilih Daging untuk Iga Bakar yang Anda inginkan : ");
								scanf("%d",&pilIga);
									if(pilIga > 2){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
										null_number();
									    goto Iga;}
								} while (pilIga > 2);
								gule++;
							}
						if(pilmcourse == 5){
							do{ Gulai:
								system("cls");
								header();
								Gulai();
								printf("\t\t\t\tSilahkan pilih Daging untuk Gulai yang Anda inginkan : ");
								scanf("%d",&pilgulai);
									if(pilgulai > 4){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
										null_number();
								    	goto Gulai;}			    	
								} while (pilgulai > 4);
							}
						if(pilmcourse == 0){
						goto awal;}
					} while (pilmcourse > 36);
					mcourse->nama=mcourse[pilmcourse].nama;
					mcourse->harga=mcourse[pilmcourse].harga;
					printf	("\n\t\t\t\tMenu\t\t   : %s (Rp.%d)\n",mcourse->nama,mcourse->harga);
						if (pilIga == 1){
							puts ("\t\t\t\tDaging untuk Iga   : Daging Sapi");}
						else if (pilIga == 2){
							puts ("\t\t\t\tDaging untuk Iga   : Daging Kambing");}
						else if (pilgulai == 1){
							puts ("\t\t\t\tDaging untuk Gulai : Daging Sapi");}
						else if (pilgulai == 2){
							puts ("\t\t\t\tDaging untuk Gulai : Daging Kambing");}
						else if (pilgulai == 3){
							puts ("\t\t\t\tDaging untuk Gulai : Daging Kalkun");}
						else if (pilgulai == 4){
							puts ("\t\t\t\tDaging untuk Gulai : Daging Ikan");}
						printf	("\t\t\t\tJumlah\t\t   : ");scanf("%d",&kuantitasmcourse);
						if(kuantitasmcourse == 0){
							goto mcourse;}
						totmcourse = hitung_belanjaan(kuantitasmcourse,pilmcourse,mcourse);
						printf	("\t\t\t\tHarga\t\t   : Rp.");printf("%d\n",totmcourse);
						totalmcourse += totmcourse;
						qtymcourse += kuantitasmcourse;
					break;
			
			case 5:
				dessert:
				system("cls");
				header();
				menu_dessert(dessert);
				printf("\t\t\t\tSilahkan pilih Dessert yang Anda inginkan : ");scanf("%d",&pildessert);
					do{
						if(pildessert > 30){			//====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
							null_number();
						    goto dessert;}
						if(pildessert == 0){
							goto awal;}
					} while (pildessert > 30);
						dessert->nama=dessert[pildessert].nama;
						dessert->harga=dessert[pildessert].harga;
						printf	("\n\t\t\t\tMenu\t\t: %s (Rp.%d)\n",dessert->nama,dessert->harga);
						printf	("\t\t\t\tJumlah\t\t: ");scanf("%d",&kuantitasdessert);
					if(kuantitasdessert == 0){
						goto dessert;}
						totdessert = hitung_belanjaan(kuantitasdessert,pildessert,dessert);
						printf	("\t\t\t\tHarga\t\t: Rp.");printf("%d\n",totdessert);
						totaldessert += totdessert;
						qtydessert += kuantitasdessert;
					break;
			
			case 6:
				beverages:
				system("cls");
				header();
				menu_beverages(beverages);
				printf("\t\t\t\tSilahkan pilih Minuman yang Anda inginkan : ");scanf("%d",&pilbeverages);
					do{
						if(pilbeverages > 99){
							null_number();
						    goto beverages;}
						else if(pilbeverages > 24 && pilbeverages < 99){	
							null_number();
						    goto beverages;}
						else if(pilbeverages == 0){
							goto awal;}
						else if(pilbeverages == 99){
							do{	
								bar:
								system("cls");
								header();
								menu_bar(beverages);
								printf("\t\t\t\tSilahkan pilih Minuman yang Anda inginkan : ");
								scanf("%d",&pilcocktail);pilbeverages=pilcocktail+24;
								do{
									if(pilcocktail > 18){			//----------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
									    null_number();
						   				goto bar;}
									if(pilcocktail == 0){
										goto beverages;}
								} while (pilcocktail > 18);
									beverages->nama=beverages[pilbeverages].nama;
									beverages->harga=beverages[pilbeverages].harga;
									printf	("\n\t\t\t\tMenu\t\t: %s (Rp.%d)\n",beverages->nama,beverages->harga);
									printf	("\t\t\t\tJumlah\t\t: ");scanf("%d",&kuantitasbeverages);
								if(kuantitasbeverages == 0){
									goto bar;}
										totbeverages = hitung_belanjaan(kuantitasbeverages,pilbeverages,beverages);
										totalbeverages += totbeverages;
										qtybeverages += kuantitasbeverages;
										printf	("\t\t\t\tHarga\t\t: Rp.");printf("%d\n",totbeverages); 
										garis();
										puts	("\n\t\t\t\t\t\t    |  Ada tambahan lagi?  |");						//----------------====> PERTANYAAN "ADA TAMBAHAN LAGI? "
									    puts	("\t\t\t\t\t\t    |         Ya      =>1  |");
									    puts	("\t\t\t\t\t\t    |       Kembali   =>2  |");
									    puts	("\t\t\t\t\t\t    |      Main Menu  =>3  |");
									    puts	("\t\t\t\t\t\t    |----------------------|");
									    puts	("\t\t\t\t\t\t    |     Pembayaran  =>0  |");
									    puts	("\t\t\t\t\t\t    |----------------------|");
									    printf	("\t\t\t\t\t\t      Pilihan >> ");scanf("%d",&pil2);
							} while (pil2 == 1);
							switch(pil2){
								case 2: 
									goto beverages;
									break;
								case 3: 
									goto awal;
									break;
								case 0: 
									goto bayar;
									break;}
							}
					if(pilbeverages == 16){
						do{	
							coffee:
							system("cls");
							header();
							menu_coffee(beverages);
							printf("\t\t\t\tSilahkan pilih Kopi yang Anda inginkan : ");
							scanf("%d",&pilcoffee);pilbeverages=pilcoffee+42;
							do{
								if(pilcoffee > 12){			//--------------------------------------------------------====> JIKA NO YANG DIINPUT TIDAK ADA DI DAFTAR MENU
									null_number();
					   				goto coffee;}
								if(pilcoffee == 0){
									goto beverages;}
							} while (pilcoffee > 12);
								beverages->nama=beverages[pilbeverages].nama;
								beverages->harga=beverages[pilbeverages].harga;
								printf	("\n\t\t\t\tMenu\t\t: %s (Rp.%d)\n",beverages->nama,beverages->harga);
								printf	("\t\t\t\tJumlah\t\t: ");scanf("%d",&kuantitasbeverages);
							if(kuantitasbeverages == 0){
								goto coffee;}
									totbeverages = hitung_belanjaan(kuantitasbeverages,pilbeverages,beverages);
									totalbeverages += totbeverages;
									qtybeverages += kuantitasbeverages;
									printf	("\t\t\t\tHarga\t\t: Rp.");printf("%d\n",totbeverages); 
									garis();
									puts	("\n\t\t\t\t\t\t    |  Ada tambahan lagi?  |");						//----------------====> PERTANYAAN "ADA TAMBAHAN LAGI? "
								    puts	("\t\t\t\t\t\t    |         Ya      =>1  |");
								    puts	("\t\t\t\t\t\t    |       Kembali   =>2  |");
								    puts	("\t\t\t\t\t\t    |      Main Menu  =>3  |");
								    puts	("\t\t\t\t\t\t    |----------------------|");
								    puts	("\t\t\t\t\t\t    |     Pembayaran  =>0  |");
								    puts	("\t\t\t\t\t\t    |----------------------|");
								    printf	("\t\t\t\t\t\t      Pilihan >> ");scanf("%d",&pil2);
						} while (pil2 == 1);
						switch(pil2){
							case 2: 
								goto beverages;
								break;
							case 3: 
								goto awal;
								break;
							case 0: 
								goto bayar;
								break;
							}
						}
					}	
				while (pilbeverages > 24 && pilbeverages < 99);
					beverages->nama=beverages[pilbeverages].nama;
					beverages->harga=beverages[pilbeverages].harga;
					printf	("\n\t\t\t\tMenu\t\t: %s (Rp.%d)\n",beverages->nama,beverages->harga);
					printf	("\t\t\t\tJumlah\t\t: ");scanf("%d",&kuantitasbeverages);
				if(kuantitasbeverages == 0){
					totalbeverages += totbeverages;
					goto beverages;}
						totbeverages = hitung_belanjaan(kuantitasbeverages,pilbeverages,beverages);
						printf	("\t\t\t\tHarga\t\t: Rp.");printf("%d\n",totbeverages);
						totalbeverages += totbeverages;
						qtybeverages += kuantitasbeverages;
						break;
		} do {
				if(qtybeverages > 0){
			        fprintf(fpointer,"   %s \t",beverages->nama);
			        fprintf(fpointer,"\t\t   %d \t",kuantitasbeverages);
				    	if (totbeverages >=100000 && totbeverages < 1000000){
				        	fprintf(fpointer,"\t     %d\n",totbeverages);}
				   		else if(totbeverages < 100000 ){
							fprintf(fpointer,"\t     %d\n",totbeverages);}
						else if(totbeverages >= 1000000){
							fprintf(fpointer,"\t    %d\n",totbeverages);}
							fclose(fpointer);
							update_to_file_appetizer(beverages[pilbeverages].nama,kuantitasbeverages,totbeverages);
				       	break;
					}
					
				if(qtydessert > 0){
			        fprintf(fpointer,"   %s \t",dessert->nama);
			        fprintf(fpointer,"\t\t   %d \t",kuantitasdessert);
				        if (totdessert >=100000 && totdessert < 1000000){
				        	fprintf(fpointer,"\t     %d\n",totdessert);}
				        else if(totdessert < 100000 ){
							fprintf(fpointer,"\t     %d\n",totdessert);}
						else if(totdessert >= 1000000){
							fprintf(fpointer,"\t    %d\n",totdessert);}
					        fclose(fpointer);
					        update_to_file_appetizer(dessert[pildessert].nama,kuantitasdessert,totdessert);
				        break;
					}
					
				if(qtymcourse > 0){
			        fprintf(fpointer,"  %s \t",mcourse->nama);
					fprintf(fpointer,"\t\t  %d \t",kuantitasmcourse);
					fprintf(fpointer,"\t  %d \t",kuantitasmcourse);
				        if (totmcourse >=100000 && totmcourse < 1000000){
				        	fprintf(fpointer,"\t      %d\n",totmcourse);}
				        else if(totmcourse < 100000 ){
							fprintf(fpointer,"\t     %d\n",totmcourse);}
						else if(totmcourse >= 1000000){
							fprintf(fpointer,"\t    %d\n",totmcourse);}  
					        fclose(fpointer);
					    	update_to_file_appetizer(mcourse[pilmcourse].nama,kuantitasmcourse,totmcourse);
						break;
					}
					
				if(qtyappetizer > 0){
			        fprintf(fpointer,"   %s \t",appetizer->nama);
			        fprintf(fpointer,"\t   %d\t",kuantitasappetizer);
				        if(totappetizer < 100000 ){
							fprintf(fpointer,"\t      %d\n",totappetizer);}
						else if (totappetizer >=100000 && totappetizer < 1000000){
				        	fprintf(fpointer,"\t\t   %d\n",totappetizer);}
						else if(totappetizer >= 1000000){
							fprintf(fpointer,"\t\t  %d\n",totappetizer);}   
							fclose(fpointer); 
							update_to_file_appetizer(appetizer[pilappetizer].nama,kuantitasappetizer,totappetizer);
						break;
					}
			        
				if(qtypaket > 0){
			        fprintf(fpointer,"   %s \t",paket->nama);
			        fprintf(fpointer,"\t   %d \t",kuantitaspaket);
					    if (totpaket >=100000 && totpaket < 1000000){
					        fprintf(fpointer,"\t    %d\n",totpaket);}
						else if(totpaket >= 1000000){
							fprintf(fpointer,"\t   %d\n",totpaket);}
							fclose(fpointer);
							update_to_file_paket(paket[pilpaket].nama,kuantitaspaket,totpaket);
						break;
			        }
			        
			    if(qtyayce > 0){	
			        fprintf(fpointer,"   %s \t",ayce->nama);
			        fprintf(fpointer,"\t   %d \t",kuantitasayce);
				        if (totayce >=100000 && totayce < 1000000){
				        	fprintf(fpointer,"\t     %d\n",totayce);}
						else if(totayce >= 1000000){
							fprintf(fpointer,"\t    %d\n",totayce);}
							fclose(fpointer);
							update_to_file_ayce(ayce[pilayce].nama,kuantitasayce,totayce);
						break;
			        }
			    
			    } while (pil5 == 1);
				    garis();
					puts	("\n\t\t\t\t\t\t     | Ada tambahan lagi? |");						//----------------====> PERTANYAAN "ADA TAMBAHAN LAGI? "
				    puts	("\t\t\t\t\t\t     |      Ya        =>1 |");
				    puts	("\t\t\t\t\t\t     |   Main Menu    =>2 |");
				    puts	("\t\t\t\t\t\t     |--------------------|");
				    puts	("\t\t\t\t\t\t     |  Pembayaran    =>0 |");
				    puts	("\t\t\t\t\t\t     |--------------------|");
				    printf	("\t\t\t\t\t\t      Pilihan >> ");scanf("%d",&pil5);
				} while (pil5 == 1);
				} while (pil5 == 2);
					bayar:
					loading();
					system("cls");
				    header();
				    subtotal = totalayce+totalpaket+totalappetizer+totalmcourse+totaldessert+totalbeverages;
				    if(subtotal == 0){
				    	puts("\n\t\t\t\t\tMohon maaf, Anda belum memesan apapun di daftar Menu.");
					    puts("\t\t\t\t\t ==> Silahkan pesan kembali pesanan Anda <==\n");
						system("pause");
						system("cls");
						loading();
						goto awal;}
				    	daftar_belanjaan();
					if (subtotal < 99000){
						printf	("\t\t\t\tSubtotal\t\t\t\t       : Rp.%d\n",subtotal);}
					if (subtotal >= 100000 && subtotal < 1000000){
						printf	("\t\t\t\tSubtotal\t\t\t\t      : Rp.%d\n",subtotal);}
					if (subtotal >= 1000000){
						printf	("\t\t\t\tSubtotal\t\t\t\t      : Rp.%d\n",subtotal);}
					    	point = hitung_poin(subtotal);			//-----------------------------------====> BAGIAN PEMBAYARAN (mulai)
						    totalppn = Ppn(subtotal);
						    diskonpersen = persentase_diskon (totalppn);
							total = Diskon(totalppn);
							hemat = totalppn-total;
						    printf	("\n\t\t\t\tTotal\t\t\t\t: Rp. %d",total);
						    printf	(" (Ppn 5 persen)\n");
							printf 	("\t\t\t\tMasukan jumlah uang pembayaran \t: Rp. ");scanf("%d",&pembayaran);
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
							puts	("\t\t\t\t|                                                                |\n\n");
							printf	("\n\t\t\t\t\t\t ** Anda mendapatkan %d point. **\n",point);		//----------------====> PENUKARAN POINT (mulai)
							fpointer = fopen("struk_belanja.txt","a");
				    if (diskonpersen == 0){	
					    fprintf	(fpointer,"===================================================================\n");
					    fprintf(fpointer,"                     %s",asctime(waktu));
					    fprintf	(fpointer,"===================================================================\n");
					    fprintf(fpointer,"                                         Diskon :    --\n");}
			    	else {
					    fprintf	(fpointer,"===================================================================\n");
					    fprintf(fpointer,"                      %s",asctime(waktu));
					    fprintf	(fpointer,"===================================================================\n");
				    	fprintf(fpointer,"                                         Diskon :   %d persen\n",diskonpersen);}	
					    fprintf(fpointer,"                           Total (Ppn 5 persen) : Rp.%d\n",total);
					    fprintf(fpointer,"--------------------------------------------------------------------\n");
					    fprintf(fpointer,"                                     Pembayaran : Rp.%d\n",pembayaran);
					    fprintf(fpointer,"                                      Kembalian : Rp. %d\n",Pembayaran_Kembalian(total,pembayaran));
					    fprintf(fpointer,"                                     Anda hemat : Rp. %d\n",hemat);
					    fprintf(fpointer,"====================================================================\n");
					    fprintf(fpointer,"              ** TERIMA KASIH TELAH MAKAN DISINI ! **      \n");
					    fprintf(fpointer,"====================================================================\n");
					    fclose(fpointer);
					if (point == 0){
						printf	("\n\n\t\t\t\t\t\t  ");
						system	("pause");
						goto akhir;}
						tukar_point();
						printf	("\t\t\t\t       Pilihan >> ");scanf("%d",&pil1);
					    system("cls");
					    header();
				    if (pil1 == 1){				
				    	point = tukar_poin(point);}
					    update_point(point);		//--------------------------------------------------------====> PENUKARAN POINT (selesai)
					    akhir:
					    system("cls");
						ucapan_akhir();
					    qtyayce=0,qtypaket=0,qtyappetizer=0,qtymcourse=0,qtydessert=0,qtybeverages=0;
						totalayce=0,totalpaket=0,totalappetizer=0,totalmcourse=0,totaldessert=0,totalbeverages=0;
						subtotal=0,total=0;
		return 0;
}

