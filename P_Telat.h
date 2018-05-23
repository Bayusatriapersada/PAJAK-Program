int pajak_telat()
{
	float pkb, swdkllj, stnk, harga, denda, total;
 	int m, n, i, t, u;//m dan n unutk pilihan, i untuk for, t untuk lama telat
 	char tb;
 		
 	printf("Masukan jenis kendaraan : "); // memilih jenis kendaraan
 	printf("\n1. Motor\n2. Mobil\n0. Menu Awal\n\n"); 
	printf("Pilihan : "); 
 	scanf("%d", &n); 
  	
  	
 	if(n==1){ 
 		printf("\nPilih Jenis Motor\n"); 
   // memilih jenis motor
  		printf("\n1. Motor <=250cc\n2. Motor Gede(>250cc)\n\n"); 
  		printf("pilihan : "); 
  		scanf("%d", &m); 
   
   
  	if(m==1){ 
   		system("cls"); 
    	printf("*******************************************************\n*"); 
    	printf("              PERHITUNGAN PAJAK TELAT MOTOR          *\n"); 
    	printf("*******************************************************\n\n"); 
//pajak telat motor
		printf("Harga Jual Kendaraan : Rp."); 
   		scanf("%f", &harga); 
   		printf("Telat(bulan) : "); 
   		scanf("%d", &t); 
   		
   		//jika telat dibawah 13 bulan
		if(t<13){
			pkb = harga/50;
    		swdkllj = 35000.00;
    		stnk = 25000.00;
		//loop denda
			for(i=0; i<=t; i+=2){
				denda=25+i;
			}
			
    		denda = (denda*pkb)/100;//rumus denda
    		total=pkb+stnk+swdkllj+denda+32000.00;
		}
		
		else{
			pkb = harga/50;
    		swdkllj = 35000.00;
    		stnk = 25000.00;
    		denda = (48*pkb)/100;//jika lebih dari 13 bulan maka denda 48%
    		
    	 	t=t/12;
    	 	u=t;
    	 	
    		if(t>=5){	
    			
    			total=(t*(pkb+stnk+swdkllj+denda+32000.00))+200000.00;
			}
			else{
				total=t*(pkb+stnk+swdkllj+denda+32000.00);			
			}
    	
		}
    	
    	
		printf("\n\nPajak Kendaraan Bermotor\t  = Rp.%.2f\n", pkb);    
    	printf("Biaya STNK \t\t\t  = Rp.%.2f\n", stnk);
 		printf("Biaya SWDKLLJ\t\t\t  = Rp.%.2f\n", swdkllj); 
		printf("Biaya Denda SWDKLLJ\t\t  = Rp.32000.00\n"); 
		printf("Biaya Denda \t\t\t  = Rp.%.2f\n", denda); 
    	printf("Biaya Total\t\t\t  = Rp.%.2f\n\n", total);  
  	} 
  	if (m == 2){ 
   		system("cls"); 
    	printf("*******************************************************\n*"); 
    	printf("         PERHITUNGAN PAJAK TELAT NAMA MOTOR GEDE     *\n"); 
    	printf("*******************************************************\n\n"); 
   //pajak motor gede
    	printf("Harga Jual Kendaraan : Rp."); 
   		scanf("%f", &harga); 
		printf("Telat(bulan) : ");
		scanf("%d", &t);
		
    	if(t<13){
			pkb = harga/50;
    		swdkllj = 83000.00;
    		stnk = 25000.00;
		
			for(i=0; i<=t; i+=2){
				denda=25+i;
			}
			
    		denda = (denda*pkb)/100;
    		total=pkb+stnk+swdkllj+denda+32000.00;
		}
		
		else{
			pkb = harga/50;
    		swdkllj = 83000.00;
    		stnk = 25000.00;
    		denda = (48*pkb)/100;//jika lebih dari 13 bulan maka denda 48%
    		
    	 	t=t/12;
    		
    		if(t>=5){		
    		total=(t*(pkb+stnk+swdkllj+denda+32000.00))+200000.00;
			}
			
			else{
				total=t*(pkb+stnk+swdkllj+denda+32000.00);			
			}
		}
    	
    	
		printf("\n\nPajak Kendaraan Bermotor\t  = Rp.%.2f\n", pkb);    
    	printf("Biaya STNK \t\t\t  = Rp.%.2f\n", stnk);
 		printf("Biaya SWDKLLJ\t\t\t  = Rp.%.2f\n", swdkllj); 
		printf("Biaya Denda SWDKLLJ\t\t  = Rp.100000.00\n"); 
		printf("Biaya Denda \t\t\t  = Rp.%.2f\n", denda); 
    	printf("Biaya Total\t\t\t  = Rp.%.2f\n\n", total);  
    	
		
  	} 
  	else if (m !=1 && m!= 2 ) 
  	{ 
  		 printf("pilihan salah tolong di ulang\n"); 
   		system("pause"); 
   		system("cls"); 
   		return pajak_telat(); 
  	} 
 	} 
 	if (n == 2){ 
 		system("cls"); 
  		printf("*******************************************************\n*"); 
    	printf("             PERHITUNGAN PAJAK TELAT MOBIL           *\n"); 
    	printf("*******************************************************\n\n"); 
 
   		printf("Harga Jual Kendaraan : Rp."); 
   		scanf("%f", &harga); 
		printf("Telat(bulan) : ");
		scanf("%d", &t);
		//pajak telat mobil
    	if(t<13){
			pkb = harga/50;
    		swdkllj = 143000.00;
    		stnk = 50000.00;
		
			for(i=0; i<=t; i+=2){
				denda=25+i;
			}
			
    		denda = (denda*pkb)/100;
    		total=pkb+stnk+swdkllj+denda+100000.00;
		}
		
		else{
			pkb = harga/50;
    		swdkllj = 143000.00;
    		stnk = 50000.00;
    		denda = (48*pkb)/100;//jika lebih dari 13 bulan maka denda 48%
    		
    	 	t=t/12;
    		
    		if(t>=5){	
    			
    		total=(t*(pkb+stnk+swdkllj+denda+100000.00))+350000.00;
			}
			else{
				total=t*(pkb+stnk+swdkllj+denda+100000.00);			
			}
		}
    	
    	
		printf("\n\nPajak Kendaraan Bermotor\t  = Rp.%.2f\n", pkb);    
    	printf("Biaya STNK \t\t\t  = Rp.%.2f\n", stnk);
 		printf("Biaya SWDKLLJ\t\t\t  = Rp.%.2f\n", swdkllj); 
		printf("Biaya Denda SWDKLLJ\t\t  = Rp.32000.00\n"); 
		printf("Biaya Denda \t\t\t  = Rp.%.2f\n", denda); 
    	printf("Biaya Total\t\t\t  = Rp.%.2f\n\n", total);  
    	
		
	} 
 	if (n!=1 && n!=2 && n!= 0) 
 	{ 
  		printf("pilihan salah silahkan di ulang\n"); 
  		system("pause"); 
  		system("cls"); 
  		return pajak_telat(); 
 	} 
 	if (n == 0) 
 	{ 
  		return 0; 
 	} 
}

