#include"P_STNK.h"//memanggil header Pajak STNK
#include"P_5Tahun.h"//memanggil header Pajak STNK 5 tahunan
#include"P_Baru.h"//memanggil header Pajak Baru
#include"P_Balik.h"//memanggil pajak balik
#include"P_Telat.h"//memanggil header pajak telat
int Pajak_Kendaraan_Bermotor()
{
	int n;//int n ini berguna sebagai pemilih untuk list pajak kendaraan bermotor
	printf("*******************************************************\n*");
	printf("       PERHITUNGAN PAJAK KENDARAAN BERMOTOR          *\n");
	printf("*******************************************************\n\n");
	printf("List Pilihan : \n1. Perpanjangan STNK Tahunan\n2. Pajak Kendaraan Baru\n3. Perpanjangan Pajak 5 Tahunan\n4. Balik Nama\n5. Pajak Telat\n0. Menu Awal\n\nTentukan Pilihanmu : ");
	scanf("%d", &n);	
	
	switch(n){//pemilihan dari opsi menggunakan variable n
		case 1:
			system("cls");
			perpanjangan_STNK();//akan memanggil modular perpanjangan_STNK di P_STNK.h
			break;	
		case 2:
			system("cls");
			pajak_baru();//akan memanggil modular pajak_baru di P_Baru.h
			break;
		case 3:
			system("cls");
			perpanjangan_pajak_5_tahunan();//akan memanggil modular pajak 5 tahunan
			break;
		case 4:
			system("cls");
			balik_nama();//akan memanggil modular balik_nama di P_Balik.h
			break;
		case 5:
			system("cls");
			pajak_telat();//akan memanggil modular pajak_telat di P_Telat.h
			break;
		case 0:
			return 0;//akan kembali ke menu awal
			break;
		default:
			printf("inputan salah tolong di ulang!\n");
				system("pause");
				system("cls");
			return Pajak_Kendaraan_Bermotor();
			break;
	}
}
