
/*
Codifica esercizio scontrini - Andrea Tiralongo 4BINF
ITIS VOLTA - 17 Novembre 2014 - Laboratorio di Informatica

Realizzare un programma in linguaggio C che consenta di:

1) inserire dati degli scontrini sul vettore A.

2) Riepilogare tutti gli scontrini nel vettore B.

Vettore A con i dati degli scontrini

Genere

Data

Importo

Qtà

Vettore B con i dati riepilogativi

Genere

Data

Importo

Qtà

Valore medio Scontrino
*/
main()
{
    
    struct scont{
	   char genere[20];
	      struct datascontrino{
		  int giorni;
		  char mese[20];
		  int anno;
	      }datasco;
	float importo;
	int quantita;
    };
     int n,i,j,k,conta;

    printf("Inserisci il numero dei scontrini:");
    scanf("%d", &n);
    scont veta[n], vetb[n];
    for (i=0;i<n;i++)
    {
           printf("Per favore metti genere prodotto:");
           scanf("%s",&veta[i].genere);
           printf("Metti la data acquisto:");
           scanf("%d %s %d",&veta[i].datasco.giorni, veta[i].datasco.mese, &veta[i].datasco.anno);
           printf("Metti importo speso:");
           scanf("%f",&veta[i].importo);
           printf("Metti la quantita' presa:");
           scanf("%d",&veta[i].quantita);
    }
    
    for(i=0;i<n-1;i++)
    {
    conta=0;
    j=0;
    strcpy(vetb[j].genere,veta[i].genere);
    printf("%s", vetb[j].genere);
    vetb[j].datasco=veta[i].datasco;
    vetb[j].importo=0;
    vetb[j].quantita=0;
    
    for(k=0;k<n;k++);
    {
	    if(strcmp(veta[i].genere,"null")!=0)
	    {
		       if(veta[i].datasco.giorni==veta[k].datasco.giorni&& strcmp(veta[i].datasco.mese,veta[k].datasco.mese)==0 && veta[i].datasco.anno==veta[k].datasco.anno)
		       {
			            vetb[j].importo=vetb[j].importo+vetb[k].importo;
			            vetb[j].quantita==vetb[j].importo+vetb[k].quantita;
			            strcpy(veta[i].genere,"null");
			            conta=conta+1;
		       }
	    }
	}
    j++;
    }
    
    for(i=0;i<j;i++)
    {
     printf("genere prodotto: %s",vetb[i].genere);
		printf("\n\n");
		printf("giorno data prodotto: %d",vetb[i].datasco.giorni);
		printf("\n\n");
		printf("mese data prodotto: %s",vetb[i].datasco.mese);
		printf("\n\n");
		printf("anno data prodotto: %d",vetb[i].datasco.anno);
		printf("\n\n");
		printf("quantita prodotto: %d",vetb[i].quantita);
		printf("\n\n");
		printf("importo tot prodotto: %f",vetb[i].importo);
    }
    
printf("\n\n");

}

