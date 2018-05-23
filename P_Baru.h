int pajak_baru()
{
	int bbnkb, pkb, swdkllj, tnkb, stnk, m, n, harga; //untuk n dan m adalah variable untuk memilih opsi, n untuk opsi motor atau mobil, m untuk CC kendaraan
 
 printf("Masukan jenis kendaraan : "); //memilih jenis kendaraan
 printf("\n1. Motor\n2. Mobil\n0. Menu Awal\n\n"); 
 printf("Pilihan : "); 
 scanf("%d", &n); 
  
 if(n==1){ 
  printf("\nPilih Jenis Motor\n"); //memilih CC kendaraan
   
  printf("\n1. Motor <=250cc\n2. Motor Gede(>250cc)\n\n"); 
  printf("pilihan : "); 
  scanf("%d", &m); 
   
   
  if(m==1){ 
   system("cls"); 
    printf("*******************************************************\n*"); 
    printf("            PERHITUNGAN PAJAK MOTOR BARU             *\n"); 
    printf("*******************************************************\n\n"); 
	//menghitung pajak motor baru <250CC
   printf("Harga Jual Kendaraan : Rp."); 
   scanf("%d", &harga); 
	
    
    bbnkb = harga/10;//rumus bbnkb
 	pkb = harga/50;//rumus PKB=harga jual*2%
    swdkllj = 35000;
    tnkb = 60000;
    stnk = 125000;
    
 	printf("\n\nBea Balik Nama Kendaraan Bermotor = Rp.%d\n", bbnkb); 
	printf("Pajak Kendaraan Bermotor\t  = Rp.%d\n", pkb);    
    printf("Administrasi TNKB \t\t  = Rp.%d\n", tnkb); 
    printf("Biaya STNK \t\t\t  = Rp.%d\n", stnk);
 	printf("Biaya SWDKLLJ\t\t\t  = Rp.%d\n", swdkllj);    
    printf("Biaya Total\t\t\t  = Rp.%d\n\n", bbnkb+pkb+swdkllj+tnkb+stnk);  
  } 
  if (m == 2){ 
   system("cls"); 
    printf("*******************************************************\n*"); 
    printf("            PERHITUNGAN PAJAK MOTOR GEDE             *\n"); 
    printf("*******************************************************\n\n"); 
   //menghitung pajak motor baru >250CC
    printf("Harga Jual Kendaraan : Rp."); 
  	scanf("%d", &harga); 
	
    
    bbnkb = harga/10;//rumus bbnkb
 	pkb = harga/50;//rumus PKB=harga jual*2%
    swdkllj = 83000;
    tnkb = 60000;
    stnk = 125000;
    
    printf("\n\nBea Balik Nama Kendaraan Bermotor = Rp.%d\n", bbnkb); 
	printf("Pajak Kendaraan Bermotor\t  = Rp.%d\n", pkb);    
    printf("Administrasi TNKB \t\t  = Rp.%d\n", tnkb); 
    printf("Biaya STNK \t\t\t  = Rp.%d\n", stnk);
 	printf("Biaya SWDKLLJ\t\t\t  = Rp.%d\n", swdkllj);    
    printf("Biaya Total\t\t\t  = Rp.%d\n\n", bbnkb+pkb+swdkllj+tnkb+stnk);  
  } 
  else if (m !=1 && m!= 2 ) 
  { 
   printf("pilihan salah tolong di ulang\n"); 
   system("pause"); 
   system("cls"); 
   return pajak_baru();
   
 } 
 if (n == 2){ 
  system("cls"); 
    printf("*******************************************************\n*"); 
    printf("            PERHITUNGAN PAJAK MOBIL                  *\n"); 
    printf("*******************************************************\n\n"); 
 //menghitung pajak baru mobil
  	printf("Harga Jual Kendaraan : Rp."); 
   	scanf("%d", &harga); 
	
    
    bbnkb = harga/10;//rumus bbnkb
 	pkb = harga/50;//rumus PKB=harga jual*2%
    swdkllj = 35000;
    tnkb = 100000;
    stnk = 250000;
    
 	printf("\n\nBea Balik Nama Kendaraan Bermotor \t= Rp.%d\n", bbnkb); 
	printf("Pajak Kendaraan Bermotor\t\t= Rp.%d\n", pkb);    
    printf("Administrasi TNKB\t\t\t= Rp.%d\n", tnkb); 
    printf("Biaya STNK\t\t\t\t= Rp.%d\n", stnk);
 	printf("Biaya SWDKLLJ\t\t\t\t= Rp.%d\n", swdkllj);    
    printf("Biaya Total\t\t\t\t= Rp.%d\n\n", bbnkb+pkb+swdkllj+tnkb+stnk);

 } //jika tidak dalam opsi
 if (n!=1 && n!=2 && n!= 0) 
 { 
  printf("pilihan salah silahkan di ulang\n"); 
  system("pause"); 
  system("cls"); 
  return pajak_baru();
 } 
 if (n == 0) //balik ke menu utama
 { 
  return 0; 
 } 
}
}
	
 
