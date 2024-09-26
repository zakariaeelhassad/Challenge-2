int main()
{

	int ax , ay , bx , by , zx , zy ;
	 printf("Entrez les coordonnées du point ax :");
	 scanf("%d ",&ax);
	 printf ("Entrez les coordonnées du point ay :");
	 scanf("%d",&ay);
	 printf ("Entrez les coordonnées du point bx :");
	 scanf("%d",&bx);
     printf ("Entrez les coordonnées du point by :");
	 scanf("%d",&by);
	 scanf("Entrez les coordonnées du point zy :");
	 scanf("%d",&zx);
	 printf ("Entrez les coordonnées du point zy :");
	 scanf("%d  ",&zy);

	float a = (by-ay)/(bx-ax) ;
	float b = ay - (a*ax );
    if (zy == (a*zx)+b){
		printf("z est sur le segment");
    }
    else {
		printf("z n'est pas sur le segment");
    }

	return 0;
}