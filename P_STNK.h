#include<stdio.h>
int perpanjangan_STNK()
{
	int pkb, swdkllj, adm, harga, n, m;//untuk n dan m adalah variable untuk memilih opsi, n untuk opsi motor atau mobil, m untuk CC kendaraan
	printf("Masukan jenis kendaraan : ");
	printf("\n1. Motor\n2. Mobil\n0. Menu Awal\n\n");
	printf("Pilihan : ");
	scanf("%d", &n);
	
	if(n==1){
		printf("\nPilih Jenis Motor\n");
		
		printf("\n1. Motor <=250cc\n2. Motor Gede(>250cc)\n\n");
		printf("pilihan : ");
		scanf("%d", &m);
		
		
		if(m==1){
			system("cls");
				printf("*******************************************************\n*");
				printf("            PERHITUNGAN PAJAK MOTOR                  *\n");
				printf("*******************************************************\n\n");
			printf("Harga Jual Kendaraan : Rp.");
			scanf("%d", &harga);
		//ini untuk penghitungan pajak STNK motor CC <= 250 CC
			pkb=harga/50;//ini adalah rumus penghitungan Pajak STNK
			swdkllj=35000;//ini adalah rumus penghitungan Pajak STNK
			adm=25000;//ini adalah rumus penghitungan Pajak STNK
			printf("\n\nPajak Kendaraan Bermotor \t= Rp.%d\n", pkb);
			printf("SWDKLLJ \t\t\t= Rp.%d\n", swdkllj);
			printf("Biaya Administrasi\t\t= Rp.%d\n", adm);
			printf("Biaya Total\t\t\t= Rp.%d\n\n", pkb+swdkllj+adm);
		}
		if (m == 2){
			system("cls");
				printf("*******************************************************\n*");
				printf("            PERHITUNGAN PAJAK MOTOR GEDE             *\n");
				printf("*******************************************************\n\n");
			printf("Harga Jual Kendaraan : Rp.");
			scanf("%d", &harga);
		//ini untuk penghitungan pajak STNK motor CC > 250 CC	
			pkb=harga/50;//rumus penghitungan pajak STNK
			swdkllj=83000;//rumus penghitungan pajak STNK
			adm=25000;//rumus penghitungan pajak STNK
			printf("\n\nPajak Kendaraan Bermotor \t= Rp.%d\n", pkb);
			printf("SWDKLLJ \t\t\t= Rp.%d\n", swdkllj);
			printf("Biaya Administrasi\t\t= Rp.%d\n", adm);
			printf("Biaya Total\t\t\t= Rp.%d\n\n", pkb+swdkllj+adm);
		}
		else if (m !=1 && m!= 2 )//apabila tidak didalam opsi maka akan mengulang dari awal
		{
			printf("pilihan salah tolong di ulang\n");
			system("pause");
			system("cls");
			return perpanjangan_STNK();
		}
	}
	if (n == 2){//apabila yang di minta mobil
		system("cls");
				printf("*******************************************************\n*");
				printf("             PERHITUNGAN PAJAK MOBIL                 *\n");
				printf("*******************************************************\n\n");
		printf("Harga Jual Kendaraan : Rp.");
		scanf("%d", &harga);
		//penghitungan pajak STNK untuk mobil
		pkb=harga/50;//rumus penghitungan pajak STNK untuk mobil
		swdkllj=143000;//rumus penghitungan pajak STNK untuk mobil
		adm=50000;//rumus penghitungan pajak STNK untuk mobil
			
		printf("\n\nPajak Kendaraan Bermotor \t= Rp.%d\n", pkb);
		printf("SWDKLLJ \t\t\t= Rp.%d\n", swdkllj);
		printf("Biaya Administrasi\t\t= Rp.%d\n", adm);
		printf("Biaya Total\t\t\t= Rp.%d\n\n", pkb+swdkllj+adm);

	}
	if (n!=1 && n!=2 && n!= 0)
	{//apabila tidak dalam opsi maka
		printf("pilihan salah silahkan di ulang\n");
		system("pause");
		system("cls");
		return perpanjangan_STNK();
	}
	if (n == 0)
	{//jika memilih kembali maka akan kembali ke menu awal
		return 0;
	}
}

