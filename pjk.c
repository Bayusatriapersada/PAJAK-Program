//perhitungan pajak

#include<stdio.h>//memanggil fungsi biasa
#include<stdlib.h>//fungsi untuk system("pause") dan ("cls")
#include"P_KB.h"//untuk memanggil header pajak kendaraan bermotor
#include"PPH.h"//untuk memanggil header pajak penghasilan
#include"PBB.h"//untuk memanggil header pajak bumi bangunan

pilihanp()//fungsi untuk pilihan pada MULAI
{
	int pilihan_2;
		printf("List Pajak yang dapat di perhitungkan :\n");
				printf("\n1.Pajak Bumi dan Bangunan\n2.Pajak Kendaraan Bermotor\n3.Pajak Penghasilan\n0.Menu Awal\n\nTentukan Pilihanmu : ");
				scanf("%d",  &pilihan_2);
				
				
				switch (pilihan_2){
					case 1 ://apabila memilih pajak bumi bangunan
							system("cls");
							PBB();//memanggil modular PBB di file PBB.h
							printf("\n");
							system("pause");
							system("cls");
							return main();//kembali ke menu awal
					case 2 :	//apabila memilih pajak kendaraan bermotor
							system("cls");
							Pajak_Kendaraan_Bermotor();//memanggil modular pajak kendaraan bermotor di P_KB.h
							system("pause");
							system("cls");
							return main();//kembali ke menu awal
							break;
					case 3 ://apabila memilih pajak Penghasilan
						system("cls");
						PPH();//memanggil modular Pajak Penghasilan di PPH.h
						system("pause");
						system("cls");
						return main();
						break;
					case 0 ://apabila memilih opsi kembali
							system("cls");
							return main();//kembali ke awal
							break;
					default ://apabila salah masukan, namun tidak bisa huruf
							printf("Inputan salah, tolong di ulang\n");
							system("pause");
							system("cls");
						return pilihanp();
					}
}

int main()
{
	int pilihan,pilihan_2;
	//ini judul program :)
	printf("*******************************************************\n*");
	printf("                  PERHITUNGAN PAJAK                  *\n");
	printf("*******************************************************\n\n");
	
	printf("Selamat Datang di Program Penghitung pajak\nHal yang dapat dilakukan :\n1.Mulai\n2.Help\n3.Credit\n4.Exit\n");
	printf("PILIH ANGKA \t: ");
	scanf("%d", & pilihan);//variable untuk pilihan
	system("cls");
	switch(pilihan){
		case 1 ://pemanggilan opsi Mulai dan menunjukan list selanjutnya
			{
				pilihanp();
				break;
			}
		case 2 ://apabila di menu awal memilih opsi HELP
			{
					printf("*******************************************************\n*");
					printf("                         HELP                        *\n");
					printf("*******************************************************\n\n");
	
				printf("Selamat datang di program Penghitung Pajak\napabila ingin memulai penghitungan pada menu awal masukan pilihan 1\nApabila malkukan kesalahan pemasukan input maka masukan input 0 untuk kembali ke menu awal\n");
				printf("Program akan terus mengulang selama user tidak memasukan input 4 pada menu awal\nApabila dalam program ditanyakan hal yang tidak anda miliki maka silahkan isi dengan nilai 0\n");
				system("pause");
				system("cls");
				return main();
			}
		case 3 ://apabila memilih opsi Credit
			{
				printf("*******************************************************\n*");
				printf("                 CREATED BY BAYU DAN ARUL            *\n");
				printf("*******************************************************\n\n");
				
				printf("Program terbaik di seluruh jagat raya\n\n");
				system("pause");
				system("cls");
				return main();
		}
		case 4 ://apabila memilih EXIT
			{
				printf("TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI\n");
				system("pause");
				return 0;
			}
		default ://apabila memilih opsi selain yang diminta , pemberitahuan kesalahan
			{
				printf("masukannya salah,tolong di ulang\n");
				system("pause");
				system("cls");
				return main();				
			}
	}
	
	return 0;
}
