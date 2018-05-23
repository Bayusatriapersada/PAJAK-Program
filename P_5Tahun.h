int perpanjangan_pajak_5_tahunan()
{
	int STNK, adm, harga, n, m, lain2; //untuk n dan m adalah variable untuk memilih opsi, n untuk opsi motor atau mobil, m untuk CC kendaraan
 	printf("Masukan jenis kendaraan : "); 
 	printf("\n1. Motor\n2. Mobil\n\n"); 
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
				printf("          PERHITUNGAN PAJAK 5 TAHUNAN MOTOR          *\n");
				printf("*******************************************************\n\n");
  			printf("Biaya PKB+SWDKLLJ : Rp."); //harga pajak yang tertera di STNK(PKB dan SWDKLLJ)
   			scanf("%d", &harga); 
   			printf("Biaya lain-lain(biaya legalisir, biaya pengesahan, foto copy) = Rp.");
   			scanf("%d", &lain2);
   			adm = 60000;
		   	STNK = 100000;
		   	//ini untuk penghitungan pajak STNK motor CC <= 250 CC
		   	printf("\n\nBiaya PKB+SWDKLLJ \t= Rp.%d\n", harga); //harga pajak yang tertera di STNK(PKB dan SWDKLLJ)
   			printf("Administrasi TNKB \t= Rp.%d\n", adm); 
   			printf("Biaya Penerbitan STNK \t= Rp.%d\n", STNK);
			printf("Biaya lain-lain\t\t= Rp.%d\n", lain2);    
   			printf("Biaya Total\t\t= Rp.%d\n\n", harga+adm+STNK+lain2); 
  		} 
  		if (m == 2){ 
   				system("cls");
				printf("*******************************************************\n*");
				printf("        PERHITUNGAN PAJAK 5 TAHUNAN MOTOR GEDE       *\n");
				printf("*******************************************************\n\n");
  	 		printf("Biaya PKB+SWDKLLJ : Rp."); //harga pajak yang tertera di STNK(PKB dan SWDKLLJ)
   			scanf("%d", &harga); 
  			printf("Biaya lain-lain(biaya legalisr, biaya pengesahan, foto copy) = Rp.");
  			scanf("%d", &lain2);
   			adm = 60000;
	   		STNK = 100000;
		   	//ini untuk penghitungan pajak STNK motor CC > 250 CC	
	   	   	printf("\n\nBiaya PKB+SWDKLLJ \t= Rp.%d\n", harga); //harga pajak yang tertera di STNK(PKB dan SWDKLLJ)
   			printf("Administrasi TNKB \t= Rp.%d\n", adm); 
   			printf("Biaya Penerbitan STNK \t= Rp.%d\n", STNK);
			printf("Biaya lain-lain\t\t= Rp.%d\n", lain2);    
   			printf("Biaya Total\t\t= Rp.%d\n\n", harga+adm+STNK+lain2); 
  	} 
 	 if (m!=1 && m!= 2)
 	 { 
  	 printf("pilihan salah tolong di ulang\n"); 
  	 system("pause"); 
 	  system("cls"); 
 	  return perpanjangan_pajak_5_tahunan(); 
 	 } 
 } 
 if (n == 2){ 
 	system("cls");
				printf("*******************************************************\n*");
				printf("            PERHITUNGAN PAJAK 5 TAHUNAN MOBIL        *\n");
				printf("*******************************************************\n\n");
 	printf("Biaya PKB+SWDKLLJ : Rp."); //harga pajak yang tertera di STNK(PKB dan SWDKLLJ)
   	scanf("%d", &harga); 

	STNK = 350000;
	//penghitungan pajak STNK untuk mobil	   	
	printf("\n\nBiaya PKB+SWDKLLJ\t\t\t= Rp.%d\n", harga); //harga pajak yang tertera di STNK(PKB dan SWDKLLJ)
   	printf("Biaya Penerbitan STNK dan administrasi  = Rp.%d\n", STNK);   
   	printf("Biaya Total\t\t\t\t= Rp.%d\n\n", harga+STNK); 
 } 
 if (n!=1 && n!=2)//apabila tidak dalam opsi maka
 { 
  printf("pilihan salah silahkan di ulang\n"); 
  system("pause"); 
  system("cls"); 
  return perpanjangan_pajak_5_tahunan(); 
 }
}
