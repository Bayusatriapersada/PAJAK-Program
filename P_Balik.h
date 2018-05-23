int balik_nama()
{
 	float bbnkb,pkb, swdkllj, tnkb, ppkb,stnk, harga, lain2;//dalam desimal
 	int m, n;//untuk n dan m adalah variable untuk memilih opsi, n untuk opsi motor atau mobil, m untuk CC kendaraan
 		
 	printf("Masukan jenis kendaraan : "); //memilih jenis kendaraan
 	printf("\n1. Motor\n2. Mobil\n0. Menu Awal\n\n"); 
 	printf("Pilihan : "); 
 	scanf("%d", &n); 
  
 	if(n==1){ //memilih jenis CC motor
  		printf("\nPilih Jenis Motor\n"); 
   
  		printf("\n1. Motor <=250cc\n2. Motor Gede(>250cc)\n\n"); 
  		printf("pilihan : "); 
  		scanf("%d", &m); 
   
   
  	if(m==1){ 
   		system("cls"); 
   		printf("*******************************************************\n*"); 
    	printf("            PERHITUNGAN PAJAK BAlIK NAMA MOTOR         *\n"); 
    	printf("*******************************************************\n\n"); 
		//perhitungan pajak balik nama motor <250CC
   		printf("Harga Jual Kendaraan : Rp."); 
   		scanf("%f", &harga); 
	
    	pkb = harga/50;//rumus PKB
    	bbnkb = (2*pkb)/3;//rumus bbnkb
    	swdkllj = 35000;
    	stnk = 125000;
		tnkb = 60000;
		lain2 = 285000;
    
		printf("\n\nPajak Kendaraan Bermotor\t  = Rp.%.2f\n", pkb);    
		printf("Bea Balik Nama Kendaraan Bermotor = Rp.%.2f\n", bbnkb);
   	 	printf("Administrasi TNKB \t\t  = Rp.%.2f\n", tnkb); 
    	printf("Biaya STNK \t\t\t  = Rp.%.2f\n", stnk);
 		printf("Biaya SWDKLLJ\t\t\t  = Rp.%.2f\n", swdkllj);  
		printf("Biaya BPKB \t\t\t  = Rp.225000\n"); 
		printf("Biaya lain-lain   \t\t  = Rp.%.2f\n", lain2);
    	printf("Biaya Total\t\t\t  = Rp.%.2f\n\n", bbnkb+pkb+swdkllj+tnkb+stnk+lain2);  
  	} 
  	if (m == 2){ 
   		system("cls"); 
    	printf("*******************************************************\n*"); 
    	printf("         PERHITUNGAN PAJAK BALIK NAMA MOTOR GEDE       *\n"); 
   		printf("*******************************************************\n\n"); 
		//perhitungan pajak balik nama motor>250CC
   		printf("Harga Jual Kendaraan : Rp.");   		
		scanf("%f", &harga); 
	
    	pkb = harga/50;///rumus PKB
    	bbnkb = (2*pkb)/3;//rumus bbnkb
   		swdkllj = 83000;
    	stnk = 125000;
		tnkb = 60000;		
		lain2 = 285000;
    
		printf("\n\nPajak Kendaraan Bermotor\t  = Rp.%.2f\n", pkb);    
		printf("Bea Balik Nama Kendaraan Bermotor = Rp.%.2f\n", bbnkb);
   		printf("Administrasi TNKB \t\t  = Rp.%.2f\n", tnkb); 
    	printf("Biaya STNK \t\t\t  = Rp.%.2f\n", stnk);
 		printf("Biaya SWDKLLJ\t\t\t  = Rp.%.2f\n", swdkllj);  
		printf("Biaya BPKB \t\t\t  = Rp.225000\n"); 
		printf("Biaya lain-lain   \t\t  = Rp.%.2f\n", lain2);
    	printf("Biaya Total\t\t\t  = Rp.%.2f\n\n", bbnkb+pkb+swdkllj+tnkb+stnk+lain2);  
    
  	} 
  	else if (m !=1 && m!= 2 ) //jika bukan motor,250CC/>250CC maka pilihan diulang
  	{ 
  		printf("pilihan salah tolong di ulang\n"); 
   		system("pause"); 
   		system("cls"); 
   		return balik_nama(); 
  	} 
	} 
 	if (n == 2){ 
  		system("cls"); 
    	printf("*******************************************************\n*"); 
   		printf("           PERHITUNGAN PAJAK BALIK NAMA MOBIL           *\n"); 
   		printf("*******************************************************\n\n"); 
 		//pajak balik nama mobil
  		printf("Harga Jual Kendaraan : Rp."); 
  		scanf("%f", &harga); 
	
    	pkb = harga/50;//rumus PKB
    	bbnkb = (2*pkb)/3;//rumus bbnkb
    	swdkllj = 143000;
    	stnk = 250000;
		tnkb = 100000;
		lain2 = 435000;
    
		printf("\n\nPajak Kendaraan Bermotor\t  = Rp.%.2f\n", pkb);    
		printf("Bea Balik Nama Kendaraan Bermotor = Rp.%.2f\n", bbnkb);
    	printf("Administrasi TNKB \t\t  = Rp.%.2f\n", tnkb); 
    	printf("Biaya STNK \t\t\t  = Rp.%.2f\n", stnk);
 		printf("Biaya SWDKLLJ\t\t\t  = Rp.%.2f\n", swdkllj);  
		printf("Biaya BPKB \t\t\t  = Rp.375000\n"); 
		printf("Biaya lain-lain   \t\t  = Rp.%.2f\n", lain2);
    	printf("Biaya Total\t\t\t  = Rp.%.2f\n\n", bbnkb+pkb+swdkllj+tnkb+stnk+lain2);

 	} 
 	if (n!=1 && n!=2 && n!= 0) //jika bukan motor/mobil/menu awal maka pilihan diulang
 	{ 
  	printf("pilihan salah silahkan di ulang\n"); 
  	system("pause"); 
  	system("cls"); 
  	return balik_nama(); 
 	} 
 	if (n == 0) //balik ke menu awal
 	{ 
  	return 0; 
 	} 
}

