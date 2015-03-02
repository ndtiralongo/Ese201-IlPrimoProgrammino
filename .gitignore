
/*Codifica Verifica Fila B - Andrea Tiralongo 4°BINF 10/11/14

Data una matrice quadrata di ordine N di interi
1)Calcolare e comunicare il valore medio degli elementi che la compongono.
2)Calcolare e comuicare la somma degli elementi della diagonale principale.
3)Dato un numero, comunicare se esso è presente all'interno della matrice comunicandone anche la posizione rispetto alle righe
e alle colonne.
4)Comunicare se gli elementi nulli della matrice sono superiori all'80% del totale degli elementi ed in tal caso comunicare anche se 
la matrice è unitaria.
5)Comunicare il valore massimo e minimo tra gli elementi della matrice e la loro poszione rispetto alla righe e alle colonne.
6)Individuare una procedura da utilizzare nel punto 5.
7)Memorizzare i totali per riga e per colonna in delle variabili strutturate.
*/

main()
{

	int n;

	printf("Inserire dimensione matrice: ");
	scanf("%d",&n);
	printf("\n\n");

	int mat[n][n],i,j,somma,num,cnulli,vmax,vmin,totrighe[n],totcolonne[n];
	float media;
	bool b;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Inserire l'elemento della matrice di posizione %d,%d: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	media=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			media=media+mat[i][j];
		}
	
	}

	media=media/(n*n);

	printf("La media della matrice e': %f",media);
	printf("\n\n");

	somma=0;

	for(i=0;i<n;i++)
	{
		somma=somma+mat[i][i];
	}

	printf("Somma elementi della diagonale principale: %d",somma);
	printf("\n\n");

	b=false;

	printf("Inserire un numero da ricercare: ");
	scanf("%d",&num);
	printf("\n\n");

	i=0;
	while(i<n && b==false)
	{
		j=0;
		while(j<n && b==false)
		{
			if(mat[i][j]==num)
			{
				b=true;
			}
			j++;
		}
		i++;
	}

	if(b==true)
	{
		printf("Il numero e' presente nella matrice nella posizione %d,%d",i,j);
	}
	else
	{
		printf("Il numero non c'e'");
	}
	printf("\n\n");

	cnulli=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]==0)
			{
				cnulli=cnulli+1;
			}
		}
	}

	if(((cnulli*100)/(n*n))>=80)
	{
		printf("Gli elementi sono maggiori all'80 percento");
		printf("\n\n");

		b=false;
		i=0;
		while(i<n && b==false)
		{
			j=0;
			while(j<n && b==false)
			{
				if(i==j)
				{
					if(mat[i][j]!=1)
					{
						b=true;
					}
					
				}
				else
				{
					if(mat[i][j]!=0)
					{
						b=true;
					}
				}
				j++;
			}
			i++;
		}

		if(b==false)
		{
			printf("matrice unitaria");
		}
		else
		{
			printf("matrice non unitaria");
		}
	}

	else
	{
		printf("Gli 0 della matrice sono minori dell'80 percento");
	}
	printf("\n\n");

vmax=0;
vmin=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]>vmax)
			{
                              vmax=mat[i][j];
			}
			if(mat[i][j]<vmin)
			{
                              vmin=mat[i][j];
            }
		}
	}

	printf("Valore massimo : %d",vmax);
	printf("\n\n");
	printf("Valore minimo: %d",vmin);
	printf("\n\n");

	for(i=0;i<n;i++)
	{
		totrighe[i]=0;
		for(j=0;j<n;j++)
		{
			totrighe[i]=totrighe[i]+mat[i][j];
		}
	}


	for(i=0;i<n;i++)
	{
		printf("totale riga %d: %d",i+1,totrighe[i]);
		printf("\n");
	}
	printf("\n");

	for(j=0;j<n;j++)
	{
		totcolonne[j]=0;
		for(i=0;i<n;i++)
		{
			totcolonne[j]=totcolonne[j]+mat[i][j];
		}
	}


	for(j=0;j<n;j++)
	{
		printf("totale colonna %d : %d",j+1,totcolonne[j]);
		printf("\n");
	}
	printf("\n\n");

}
