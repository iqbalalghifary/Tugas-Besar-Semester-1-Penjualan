#ifndef barang_H
#define barang_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
    char *nama;
    int harga;
};

int data();
int hemat,menu,subtotal,pembayaran,point,diskonpersen;
int gule,pil1,pil2,pil5,pilcocktail,pilcoffee,pilgulai,pilIga,pilmenu,pilayce,pilpaket,pilappetizer,pilmcourse,pildessert,pilbeverages;
int totayce,totpaket,totappetizer,totmcourse,totdessert,totbeverages;
int totalayce,totalpaket,totalappetizer,totalmcourse,totaldessert,totalbeverages;
int kuantitasayce,kuantitaspaket,kuantitasappetizer,kuantitasmcourse,kuantitasdessert,kuantitasdessert,kuantitasbeverages;
int qtyayce,qtypaket,qtyappetizer,qtymcourse,qtydessert,qtybeverages;
int fileqtyayce,fileqtypaket,fileqtyappetizer,fileqtymcourse,fileqtydessert,fileqtybeverages;

#endif
