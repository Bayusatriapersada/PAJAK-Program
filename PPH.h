#include<stdio.h>

int limapuluh(float wajibpajak)//modular untuk melakukan penghitungan wajib pajak dibawah 50 juta dan membalikan nilai PPH Akumulasi
{
	float kena;
	if (wajibpajak <50000000)//jika dibawah 50 juta
	{
		kena = wajibpajak * 0.05;
		wajibpajak = wajibpajak -50000000;
		if (wajibpajak <0)
		{
			wajibpajak = 0;
		}
		printf("PPh AKUMULASI : Rp.%.2f\n",kena);
		return wajibpajak;
	}
	else//jika lebih dari 50 juta
	{
		kena = 50000000 * 0.05;
		wajibpajak = wajibpajak - 50000000;
		printf("PPh AKUMULASI : Rp.%.2f\n",kena);
		return wajibpajak;
	}
}
int plimapuluh(float wajibpajak)//modular untuk melakukan penghitungan wajib pajak di bawah 50juta dan membalikan nilai untuk dilakukan penghitungan PPH total
{
	float kena;
	if (wajibpajak <50000000)
	{
		kena = wajibpajak * 0.05;
		wajibpajak = wajibpajak -50000000;
		if (wajibpajak <0)
		{
			wajibpajak = 0;
		}
		return kena;
	}
	else
	{
		kena = 50000000 * 0.05;
		wajibpajak = wajibpajak - 50000000;
		return kena;
	}
}
int dualimapuluh(float kenapajak)//modular untuk melakukan penghitungan wajib pajak di antara 50 juta hingga 250 juta dan membalikan nilai PPH Akumulasi
{
	float kena;
	if (kenapajak >200000000)
	{
		kena = 200000000 * 0.15;
		kenapajak = kenapajak -200000000;
		if(kenapajak <0)
		{
			kenapajak =0;
		}
	}
	else
	{
	kena = kenapajak * 0.15;
	kenapajak = kenapajak - 200000000;
		if(kenapajak <0)
		{
			kenapajak =0;
		}
}
printf("PPH AKUMULASI : Rp.%.2f\n", kena);
return kenapajak;
}
int pdualimapuluh(float kenapajak)//modular untuk melakukan penghitungan wajib pajak di antara 50juta hingga 250 juta dan membalikan nilai untuk dilakukan penghitungan PPH total
{
	float kena;
	if (kenapajak >200000000)
	{
		kena = 200000000 * 0.15;
		kenapajak = kenapajak -200000000;
		if(kenapajak <0)
		{
			kenapajak =0;
		}
	}
	else
	{
	kena = kenapajak * 0.15;
	kenapajak = kenapajak - 200000000;
		if(kenapajak <0)
		{
			kenapajak =0;
		}
}
return kena;
}
int limaratus(float kenapajak2)//modular untuk melakukan penghitungan wajib pajak di antara 251 juta hingga 500 juta dan membalikan nilai PPH Akumulasi
{
	float kena;
	if (kenapajak2 > 250000000)
	{
		kena = 250000000 * 0.25;
		kenapajak2 = kenapajak2 -250000000;
		if (kenapajak2 <0)
		{
			kenapajak2 = 0;
		}
		printf("PPh AKUMULASI : Rp.%.2f\n",kena);
		return kenapajak2;
	}
	else
	{
		kena = kenapajak2 * 0.25;
		kenapajak2 = kenapajak2 -250000000;
		if (kenapajak2 <0)
		{
			kenapajak2 = 0;
		}
		printf("PPh AKUMULASI : Rp.%.2f\n",kena);
		return kenapajak2;
	}
}
int plimaratus(float kenapajak2)//untuk membalikan nilai PPH yang nantinya dilakukan untuk penghitungan
{
	float kena;
	if (kenapajak2 > 250000000)
	{
		kena = 250000000 * 0.25;
		kenapajak2 = kenapajak2 -250000000;
		if (kenapajak2 <0)
		{
			kenapajak2 = 0;
		}
		return kena;
	}
	else
	{
		kena = kenapajak2 * 0.25;
		kenapajak2 = kenapajak2 -250000000;
		if (kenapajak2 <0)
		{
			kenapajak2 = 0;
		}
		return kena;
	}
}
int lebih(float kenapajak3)//untuk melakukan penghitungan wajib pajak lebih dari 500 juta dan membalikan nilai PPH Akumulasi
{
	float kena;
	kena = kenapajak3 * 0.3;
	kenapajak3 = kenapajak3 -50000000;
	if (kenapajak3 <0)
	{
			kenapajak3 = 0;
	}
printf("PPH AKUMULASI : Rp.%.2f\n", kena);
return kenapajak3;
}
int plebih(float kenapajak3)//untuk membalikan Nilai PPH yang nantinya dilakukan untuk penghitungan
{
	float kena;

		kena = kenapajak3 * 0.3;
		kenapajak3 = kenapajak3 -50000000;
		if (kenapajak3 <0)
		{
			kenapajak3 = 0;
		}
return kena;
}

int PPH()
{
	long penghasilan_perbulan,tunjangan,pensiun,pilihan,istri = 58500000,takberistri = 54000000,anak;//memakai long karena nilai bisa hingga milyaran
	float penghasilan_bruto,neto_sebulan,neto_setahun,wajibpajak,kenapajak=1,penghitung,penghitung2,kenapajak2,kenapajak3,penghitung3,kenapajak4,penghitung4;
	//menggunakan float agar lebih rinci;
	//penghitung merupakan PPH akumulasi yang nantinya akan dijumlahkan untuk mendapatkan PPH TOTAL
	printf("*******************************************************\n*");
	printf("            PERHITUNGAN PAJAK PENGHASILAN            *\n");
	printf("*******************************************************\n\n");
	printf("Gaji Perbulan : Rp.");
	scanf("%d", &penghasilan_perbulan);//meminta nilai gaji
	printf("\nTunjangan Lainnya(bila ada) : Rp.");
	scanf("%d", &tunjangan);//meminta apakah mendapat gaji selain gaji wajib
	printf("\nBesar Jaminan Pensiun(Persen): ");
	scanf("%d",&pensiun);//apakah perusahaan memberikan jaminan pensiun, pasti ada minimal 1 %
	penghasilan_bruto = penghasilan_perbulan + tunjangan + (penghasilan_perbulan * 0.0024);
	printf("\nPenghasilan Bruto (kotor) : Rp.%.2f",penghasilan_bruto);
	pensiun = pensiun /100;	//persenan dijadikan nilai nyata yaitu desimal
	neto_sebulan = penghasilan_bruto - (penghasilan_perbulan * pensiun)- (penghasilan_perbulan*0.05);
	printf("\nPenghasilan  Neto perbulan (Bersih): Rp.%.2f",neto_sebulan);
	neto_setahun = neto_sebulan * 12;//menjaikan neto sebulan menjadi neto setahun
	printf("\npenghasilan Neto Pertahun (Bersih) : Rp.%.2f\n", neto_setahun);
	printf("Apakah Memiliki Istri (1 untuk iya, 0 untuk tidak) ? :  ");//memberikan opsi apakah memili istri atau tidak
	scanf("%d",&pilihan);
	if (pilihan ==1)//jika memiliki istri
	{
		printf("\nmemiliki berapa anak ? : ");
		scanf("%d",&anak);//meminta user memasukan jumlah berapa anak
		switch (anak)//pilihan untuk berapa anak yang dimiliki
		{//hal ini dilakukan untuk menghitung wajib pajak dengan mengurang neto setahun dengan TKP
		case 0 :
				wajibpajak = neto_setahun - istri;
				break;
		case 1 :
				wajibpajak = neto_setahun - istri-4500000;
				break;
		case 2 :
					wajibpajak = neto_setahun - istri - 9000000;
					break;
		case 3 :
					wajibpajak = neto_setahun - istri - 13500000;
					break;
		default ://selain dari 3 anak akan diberlakukan sama seperti 3 anak
					wajibpajak = neto_setahun - istri - 13500000;
					break;
	}
		if (wajibpajak<1)//apabila hasil negatif selalu menghasilkan nilai wajib pajak 0 atau tidak perlu membayar pajak
		{
			wajibpajak = 0;
		}
		printf("Penghasilan Kena Pajak mu adalah : Rp.%.2f\n", wajibpajak);
		
			if (wajibpajak > 0 && wajibpajak <= 50000000)
			{
			kenapajak = limapuluh(wajibpajak);//membuat variable kenapajak hasil return dari limapuluh(wajibpajak), didalamnya akan di beri tahu PPH AKumulasi
			penghitung = plimapuluh(wajibpajak);//membuat variable penghitung sebagai PPH akumulasi
			printf("\nTotal PPH mu adalah Rp.%.2f\n", penghitung);//menunjukan total PPH
			}
	if (wajibpajak > 50000000.00 && wajibpajak<=250000000)
	{
	kenapajak = limapuluh(wajibpajak);//nantinya akan menunjukan nilai PPH akumulasi dari 50 juta
	penghitung = plimapuluh(wajibpajak);///membuat variable penghitung untuk menjumlah PPH AKUMULASI
	kenapajak2 = dualimapuluh(kenapajak);//membuat variable kenapajak2 hasil return dari dualimapuluh(kenapajak)
	penghitung2 = pdualimapuluh(kenapajak);//membuat variable penghitung untuk menjumlah PPH Akumulasi
	printf("\nTotal PPH mu adalah Rp.%.2f\n", penghitung + penghitung2);
		}
	if (wajibpajak > 250000000 && wajibpajak <=500000000)
	{//penghitung untuk wajib pajak diantara 250 juta hingga 500 juta
	kenapajak = limapuluh(wajibpajak);
	penghitung = plimapuluh(wajibpajak);
	kenapajak2 = dualimapuluh(kenapajak);
	penghitung2 = pdualimapuluh(kenapajak);
	kenapajak3 = limaratus(kenapajak2);
	penghitung3 = plimaratus(kenapajak2);
	printf("\nTotal PPH mu adalah Rp.%.2f\n", penghitung + penghitung2+penghitung3);
	}
	if (wajibpajak >500000000)
	{//untuk lebih dari 500 juta
	kenapajak = limapuluh(wajibpajak);//untuk menunjukan PPH akumuasi
	penghitung = plimapuluh(wajibpajak);//untuk menghitung PPH TOTAL
	kenapajak2 = dualimapuluh(kenapajak);//untuk menunjukan PPH akumuasi
	penghitung2 = pdualimapuluh(kenapajak);//untuk menghitung PPH TOTAL
	kenapajak3 = limaratus(kenapajak2);//untuk menunjukan PPH akumuasi
	penghitung3 = plimaratus(kenapajak2);//untuk menghitung PPH TOTAL
	kenapajak4 = lebih(kenapajak3);//untuk menunjukan PPH akumuasi
	penghitung4 = plebih(kenapajak3);//untuk menghitung PPH TOTAL
	printf("\nTotal PPH mu adalah Rp.%.2f\n", penghitung + penghitung2+penghitung3+penghitung4);//penghitung penghitung dijadikan penjumlahan untuk mencari nilai TOTAL
	}
	}
	if (pilihan == 0)
	{//jika tidak beristri
		printf("\nmemiliki berapa anak ? : ");//apabila memiliki anak
		scanf("%d",&anak);
		switch (anak)
		{
		case 0 :
				wajibpajak = neto_setahun - takberistri;
				break;
		case 1 :
				wajibpajak = neto_setahun - takberistri-4500000;
				break;
		case 2 :
					wajibpajak = neto_setahun - takberistri - 9000000;
					break;
		case 3 :
					wajibpajak = neto_setahun - takberistri - 13500000;
					break;
		default :
					wajibpajak = neto_setahun - takberistri - 13500000;
					break;
				}
		if (wajibpajak < 1)
		{
			wajibpajak = 0;
		}
		
		printf("Penghasilan Kena Pajak mu adalah : Rp.%.2f\n",wajibpajak);
		
		if (wajibpajak > 0 && wajibpajak<= 50000000)
		{
		kenapajak = limapuluh(wajibpajak);
		penghitung = plimapuluh(wajibpajak);
		printf("\nTotal PPH mu adalah Rp.%.2f\n", penghitung);
		}
	if (wajibpajak > 50000000.00 && wajibpajak<=250000000)
	{
	kenapajak = limapuluh(wajibpajak);
	penghitung = plimapuluh(wajibpajak);
	dualimapuluh(kenapajak);
	penghitung2 = pdualimapuluh(kenapajak);
	printf("\nTotal PPH mu adalah Rp.%.2f\n", penghitung + penghitung2);
		}
	if (wajibpajak > 250000000 && wajibpajak <=500000000)
	{
	kenapajak = limapuluh(wajibpajak);
	penghitung = plimapuluh(wajibpajak);
	kenapajak2 = dualimapuluh(kenapajak);
	penghitung2 = pdualimapuluh(kenapajak);
	kenapajak3 = limaratus(kenapajak2);
	penghitung3 = plimaratus(kenapajak2);
		printf("\nTotal PPH mu adalah Rp.%.2f\n", penghitung + penghitung2+penghitung3);
	}
		if (wajibpajak >500000000)
	{
	kenapajak = limapuluh(wajibpajak);
	penghitung = plimapuluh(wajibpajak);
	kenapajak2 = dualimapuluh(kenapajak);
	penghitung2 = pdualimapuluh(kenapajak);
	kenapajak3 = limaratus(kenapajak2);
	penghitung3 = plimaratus(kenapajak2);
	kenapajak4 = lebih(kenapajak3);
	penghitung4 = plebih(kenapajak3);
	printf("\nTotal PPH mu adalah Rp.%.2f\n", penghitung + penghitung2+penghitung3+penghitung4);
	}
	}
	if (pilihan != 1 && pilihan!=0)//apabila selain pilihan yang ditentukan
	{
		printf("salah pilihan\n");
		system("cls");
		return PPH();
}

}
