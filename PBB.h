int PBB()
{
	float lb, hb, lt, ht, njop ;//variable untuk penghitungan
	printf("*******************************************************\n*");
	printf("            PERHITUNGAN PAJAK BUMI BANGUNAN          *\n");
	printf("*******************************************************\n\n");
	printf("silahkan masukan hal hal berikut\n");
	printf("LUAS BANGUNAN(m^2) \t: ");
	scanf("%f", &lb);
	printf("HARGA BANGUNAN \t\t: Rp.");
	scanf("%f", &hb);
	printf("LUAS TANAH(m^2) \t: ");
	scanf("%f", &lt);
	printf("HARGA TANAH \t\t: Rp.");
	scanf("%f",&ht);
	
	njop=(lb*hb)+(lt*ht);//rumus penghitungan njop 
	//njop adalah nilai jual objek pajak
	printf("\nNJOP \t= Rp.%.2f\n", njop);
	printf("NJKP \t= Rp.%.2f\n", njop/5);//NJKP adalah nilai jual kena pajak
	printf("PBB \t= Rp.%.2f\n", (0.005*njop)/5);//nilai pajak PBB yang dikenakan
	
	return 0;
	
}

