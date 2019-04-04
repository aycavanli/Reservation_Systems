#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 15
int i,j,m,k=1,n;
int N;
int n;
int last;
int LAST[100];
struct fly
{
int flight_number;
char departure_city[MAX];
char arrival_city[MAX];
char departure_day[100];
char departure_time[100];
char arrival_day[100];
char arrival_time[100];
}A[100],*Ap=A;
struct passenger
{
char First_name[MAX];
char Last_name[MAX];
char departure_city[MAX];
char arrival_city[MAX];
char departure_day[100];
int flight_number;
int seat_number;
}B[100],*Bp=B;

void add_Flight()
{
for(m=0;m<n;m++)
{
	for(i=0;i<N;i++)
	{
		if(!strcmp((Bp+m)->departure_city,(Ap+i)->departure_city) && !strcmp((Bp+m)->arrival_city,(Ap+i)->arrival_city) && !strcmp((Bp+m)->departure_day,(Ap+i)->departure_day))
		{
		(Bp+m)->flight_number=(Ap+i)->flight_number;break;	
		}

	}
}

for(m=0;m<n;m++)
{
	if(!(Bp+m)->flight_number)
	{
	printf("%s",(Bp+m)->First_name);
	printf(" %s",(Bp+m)->Last_name);
	printf(" %s",(Bp+m)->departure_city);
	printf(" %s",(Bp+m)->arrival_city);
	printf(" %s No reservation\n",(Bp+m)->departure_day);
	}
}
for(j=0;j<n;j++)
{int seat=1;
	for(m=0;m<n;m++)
	{
		if(!(Bp+j)->flight_number) break;
		if(((Bp+j)->flight_number)==((Bp+m)->flight_number))
		{
			(Bp+j)->seat_number=seat;
			if(m!=j)
			LAST[m]=seat;
			{
			seat++;		
			}
		
		}	
	}
}

}

void search_Flight(int a)
{
for(i=0;i<N;i++)
{
	if(a==((Ap+i)->flight_number))
	{
	printf("%d",(Ap+i)->flight_number);
	printf(" %s",(Ap+i)->departure_city);
	printf(" %s",(Ap+i)->arrival_city);
	printf(" %s",(Ap+i)->departure_day);
	printf(" %s",(Ap+i)->departure_time);
	printf(" %s",(Ap+i)->arrival_day);
	printf(" %s\n",(Ap+i)->arrival_time);
	}
}
int sum=0;
for(i=0;i<N;i++)
{
if(a!=((Ap+i)->flight_number)) sum++;
}
if(sum==N)printf("No flight with number %d\n",a);
}
void search_Departure(char T[MAX])
{
for(i=0;i<N;i++)
{
	if(!strcmp(T,((Ap+i)->departure_city)))
	{
	printf("%d",(Ap+i)->flight_number);
	printf(" %s",(Ap+i)->departure_city);
	printf(" %s",(Ap+i)->arrival_city);
	printf(" %s",(Ap+i)->departure_day);
	printf(" %s",(Ap+i)->departure_time);
	printf(" %s",(Ap+i)->arrival_day);
	printf(" %s\n",(Ap+i)->arrival_time);
	}
}
int sum=0;
for(i=0;i<N;i++)
{
if(strcmp(T,((Ap+i)->departure_city))) sum++;
}
if(sum==N)printf("No departure city %s\n",T);
}
void search_Arrival(char T[MAX])
{
for(i=0;i<N;i++)
{
	if(!strcmp(T,((Ap+i)->arrival_city)))
	{
	printf("%d",(Ap+i)->flight_number);
	printf(" %s",(Ap+i)->departure_city);
	printf(" %s",(Ap+i)->arrival_city);
	printf(" %s",(Ap+i)->departure_day);
	printf(" %s",(Ap+i)->departure_time);
	printf(" %s",(Ap+i)->arrival_day);
	printf(" %s\n",(Ap+i)->arrival_time);
	}
}
int sum=0;
for(i=0;i<N;i++)
{
if(strcmp(T,((Ap+i)->arrival_city))) sum++;
}
if(sum==N)printf("No arrival city %s\n",T);
}

void print_Flight(int a)
{
for(i=0;i<N;i++)
{
	if(a==((Ap+i)->flight_number))
	{
		printf("%d",(Ap+i)->flight_number);
		printf(" %s",(Ap+i)->departure_city);
		printf(" %s",(Ap+i)->arrival_city);
		printf(" %s",(Ap+i)->departure_day);
		printf(" %s",(Ap+i)->departure_time);
		printf(" %s",(Ap+i)->arrival_day);
		printf(" %s",(Ap+i)->arrival_time);
	
	}

}

for(m=0;m<n;m++)
{
	if(a==((Bp+m)->flight_number))
	{
		last=m;
		
	}
}
printf(" %d\n", LAST[last]);

int sum=0;
for(i=0;i<N;i++)
{
if(a!=((Ap+i)->flight_number)) sum++;
}

if(sum==N)printf("No flight with number %d\n",a);
}



void print_FlightwPassenger(int a)
{
print_Flight(a);

for(m=0;m<n;m++)
{
	if(a==((Bp+m)->flight_number))
	{
	printf("%s",(Bp+m)->First_name);
	printf(" %s\n",(Bp+m)->Last_name);
	}


}
}

void print_R(char T[MAX],char Y[MAX])
{
for(m=0;m<n;m++)
{
	if(!strcmp(T,((Bp+m)->First_name)) && !strcmp(Y,((Bp+m)->Last_name)))
	{
	printf("%s %s ",T,Y);
	search_Flight((Bp+m)->flight_number);
	
	}
}

int sum=0;
for(m=0;m<n;m++)
{
	if(!(!strcmp(T,((Bp+m)->First_name)) && !strcmp(Y,((Bp+m)->Last_name)))) sum++;
}
if(sum==n)printf("No person %s %s\n",T,Y);
}



int main()
{
char K[100],L[100],M[100];
scanf("%d\n",&N);
Ap=(struct fly*) malloc(sizeof(struct fly)*N);
if (Ap)
{
	for(i=0;i<N;i++)
	{
	scanf("%d",&(Ap+i)->flight_number);
	scanf("%s",(Ap+i)->departure_city);
	scanf("%s",(Ap+i)->arrival_city);
	scanf("%s",(Ap+i)->departure_day);
	scanf("%s",(Ap+i)->departure_time);
	scanf("%s",(Ap+i)->arrival_day);
	scanf("%s\n",(Ap+i)->arrival_time);
	}
}

scanf("%d",&n);
Bp=(struct passenger*)malloc(sizeof(struct passenger)*n);
if(Bp)
{
	for(m=0;m<n;m++)
	{
	scanf("%s",(Bp+m)->First_name);
	scanf("%s",(Bp+m)->Last_name);
	scanf("%s",(Bp+m)->departure_city);
	scanf("%s",(Bp+m)->arrival_city);
	scanf("%s\n",(Bp+m)->departure_day);
	}
}
add_Flight();
printf("\n");


while(1)
{
scanf("%s",K);
if(!strcmp(K,"END") || !strcmp(L,"END") || !strcmp(M,"END")) break;


	if(!strcmp(K,"search"))
	{
	scanf(" %s %s\n",L,M);
		if(!strcmp(L,"flightNumber"))
		{
		search_Flight(atoi(M));
		printf("\n");
		}
		if(!strcmp(L,"departure"))
		{
		search_Departure(M);
		printf("\n");		
		}
		if(!strcmp(L,"arrival"))
		{
		search_Arrival(M);
		printf("\n");		
		}



	}

	if(!strcmp(K,"print"))
	{
	scanf(" %s",L);
	print_Flight(atoi(L));
	printf("\n");	
	}

	if(!strcmp(K,"printwP"))
	{
	scanf(" %s",L);
	print_FlightwPassenger(atoi(L));
	printf("\n");	
	}
	
	if(!strcmp(K,"printR"))
	{
	scanf(" %s %s\n",L,M);
	print_R(L,M);
	printf("\n");
	}

}

free(Ap);
free(Bp);



}
