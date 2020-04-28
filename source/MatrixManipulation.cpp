
/***************************************************************************/
/*			 PROGRAM TO PERFORM MATRIX MANIPULATION            */
/***************************************************************************/
#include<stdio.h>
#include<conio.h>
 void main()
 /*------------------------------------------------------------------------*/
 /*                ***** START OF MAIN FUNCTION *****                      */
 /*------------------------------------------------------------------------*/
 {
  int mat1[10][10],mat2[10][10],i,j,m,n,o,p; /* DECLARATION OF VARIABLES */

 /*-------------------  DECLARATION OF FUNCTIONS  -------------------------*/

  void add(int mat1[10][10],int m,int n,int mat2[10][10],int o,int p);
  void sub(int mat1[10][10],int m,int n,int mat2[10][10],int o,int p);
  void mul(int mat1[10][10],int m,int n,int mat2[10][10],int o,int p);
  char an;
 do                              /* START OF DO-WHILE LOOP */
 {
  clrscr();                        /* CLEARING THE SCREEN */
  flushall();
  printf("**********************************************************");
  printf("\n\n\n\n    PROGRAM TO PERFORM MATRIX MANIPULATION  !!");
  printf("\n\n\n\n");
  printf("**********************************************************");
  printf("\n\n\n\n   ENTER THE TWO MATRICES AS FOLLOWS !!");
  printf("\n\n\n\n   ENTER THE NUMBER OF ROWS OF MATRIX 1 :");
  scanf("%d",&m);
  printf("\n\n\n\n   ENTER THE NUMBER OF COLUMNS OF MATRIX 1 :");
  scanf("%d",&n);
  printf("\n\n\n\n   ENTER THE ELEMENTS OF MATRIX A :");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
	 scanf("%d",&mat1[i][j]);        /*  ACCEPTING MATRIX 1 */
   }
  }

  printf("\n\n\n\n   MATRIX A =");
  for(i=0;i<m;i++)
  {
   printf("\n\n\t");
   for(j=0;j<n;j++)
   {
	 printf("\t%d",mat1[i][j]);      /*  DISPLAYING MATRIX 1 */
   }
  }
  printf("\n\n\n\n   ENTER THE NUMBER OF ROWS OF MATRIX 2 :");
  scanf("%d",&o);
  printf("\n\n\n\n   ENTER THE NUMBER OF COLUMNS OF MATRIX 2 :");
  scanf("%d",&p);
  printf("\n\n\n\n   ENTER THE ELEMENTS OF MATRIX B :");
  for(i=0;i<o;i++)
  {
   for(j=0;j<p;j++)
   {
	scanf("%d",&mat2[i][j]);        /*  ACCEPTING MATRIX 2 */
   }
  }
  printf("\n\n\n\n   MATRIX B =");
  for(i=0;i<o;i++)
  {
   printf("\n\n\t");
   for(j=0;j<p;j++)
   {
	printf("\t%d",mat2[i][j]);      /*  DISPLAYING MATRIX 2 */
   }
  }
  printf("\n\n\n\t");
  getch();
  clrscr();
  printf("\n\n\n");
  int no;
  /*------------------------------------------------------------------------*/
  /*              **** DISPLAYING THE MENU ****                             */
  /*------------------------------------------------------------------------*/
  printf("                ****   MENU   ****                      \n\n");
  printf("\n\n\t        1:ADDITION               ");
  printf("\n\n\t        2:SUBTRACTION                   ");
  printf("\n\n\t        3:MULTIPLICATION                ");
  printf("\n\n\t        4:EXIT       ");
  printf("\n\n\t        ENTER YOUR CHOICE :  ");
  scanf("%d",&no);                /* ACCEPTING YOUR CHOICE */
  switch(no)
  {
	  case 1:
			   clrscr();
			   add(mat1,m,n,mat2,o,p);  /* CALLING FUNCTION  add() */
			   break;
	  case 2:
			   clrscr();
			   sub(mat1,m,n,mat2,o,p);  /* CALLING FUNCTION  sub() */
			   break;
	  case 3:
			   clrscr();
			   mul(mat1,m,n,mat2,o,p);  /* CALLING FUNCTION  mul() */
			   break;
	  case 4:
			   printf("\n\n\n\t EXIT FROM THE LOOP !!");
			   break;
	default :
			   printf("\n\n\n\t ERROR IN THE INPUT !!");
			   break;
  }
  printf("\n\n\n\n\t\t DO YOU WANT TO CONTINUE !!");
  printf("\n\n\n\n\t\t TYPE Y FOR YES OR N FOR NO :");
  scanf("%s",&an);
 }while( an=='Y' || an=='y');    /* END OF DO-WHILE LOOP */
  printf("\n\n\n\n\n\t\t*****  END OF THE PROGRAM !!  *****");
  getch();
 /* -----------------------------------------------------------------------*/
 /*                  ****  END OF MAIN FUNCTION  ****                      */
 /*------------------------------------------------------------------------*/
 }
 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION add() ********               */
 /*------------------------------------------------------------------------*/
 void add(int a[10][10],int m,int n,int b[10][10],int o,int p)
 {
	  void display(int a[10][10],int m,int n,int b[10][10],int o,int p);
	  printf("\n========================================================");
	  printf("\n\n\t ADDITION OPERATION !! \n");
	  printf("\n========================================================");
	  display(a,m,n,b,o,p);
	  printf("\n\n\n");
	  if(m==o && n==p)             /* CHECKING CONDITION */
	  {
		int i,j,c[10][10];
		printf("\n\n   ADDITION OF MATRIX A AND MATRIX B IS = ");
		for(i=0;i<m;i++)
		{
		  for(j=0;j<n;j++)
		  {
		c[i][j]=a[i][j]+b[i][j];    /* ADDITION OF MATRICES */
		  }
		}
		for(i=0;i<m;i++)
		{
		  printf("\n\n\t\t\t\t\t\t");
		  for(j=0;j<n;j++)
		  {
		printf("\t%d",c[i][j]);        /* DISPLAYING RESULT MATRIX */
		  }
		}
	  }
	  else
	  printf("\n\n\n\t\tERROR IN THE INPUT !!");
 }
 /*========================END OF FUNCTION add()===========================*/

 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION sub() ********               */
 /*------------------------------------------------------------------------*/

 void sub(int a[10][10],int m,int n,int b[10][10],int o,int p)
 {
	  void display(int a[10][10],int m,int n,int b[10][10],int o,int p);
	  printf("\n========================================================");
	  printf("\n\n\t SUBTRACTION OPERATION !! \n");
	  printf("\n========================================================");
	  display(a,m,n,b,o,p);
	  printf("\n\n\n");
	  if(m==o && n==p)                /* CHECKING CONDITION */
	  {
		int i,j,c[10][10];
		printf("\n\n   SUBTRACTION OF MATRIX A AND MATRIX B IS = ");
		for(i=0;i<m;i++)
			{
		  for(j=0;j<n;j++)
		  {
		c[i][j]=a[i][j]-b[i][j];       /* SUBTRACTION OF MATRICES */
		  }
		}
		for(i=0;i<m;i++)
		{
		  printf("\n\n\t\t\t\t\t\t");
		  for(j=0;j<n;j++)
		  {
		    printf("\t%d",c[i][j]);    /* DISPLAYING RESULT MATRIX */
		  }
		}
	  }
	  else
	  printf("\n\n\n\t\tERROR IN THE INPUT !!");
 }
 /*========================END OF FUNCTION sub()===========================*/

 /*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION mul() ********               */
 /*------------------------------------------------------------------------*/
 void mul(int a[10][10],int m,int n,int b[10][10],int o,int p)
 {
	  void display(int a[10][10],int m,int n,int b[10][10],int o,int p);
	  printf("\n========================================================");
	  printf("\n\n\t MULTIPLICATION OPERATION !! \n");
	  printf("\n========================================================");
	  display(a,m,n,b,o,p);
	  printf("\n\n\n");
	  if(n==o)                          /* CHECKING CONDITION */
	  {
		int i,j,k,c[10][10];
		printf("\n\n\n   MULTIPLICATION OF MATRIX A AND MATRIX B IS =");
		for(i=0;i<m;i++)
		{
		 printf("\n\n");
		 for(j=0;j<m;j++)
		 {
		   c[i][j]=0;              /* INITIALISATION OF RESULT MATRIX TO ZERO */
		   for(k=0;k<n;k++)
		   {
		     c[i][j]=c[i][j]+a[i][k]*b[k][j]; /* MULTIPLICATION OF MATRICES */
		   }
		   printf("\t%d",c[i][j]);     /* DISPLAYING RESULT MATRIX */
		 }
		}
	  }
	  else
	  printf("\n\n\n\t\tERROR IN THE INPUT !!");
 }
/*==========================END OF FUNCTION sub()===========================*/
/*------------------------------------------------------------------------*/
 /*                ******** START OF FUNCTION display() ********               */
 /*------------------------------------------------------------------------*/
 void display(int mat1[10][10],int m,int n,int mat2[10][10],int o,int p)
 {
   int i,j;
   printf("\n\n\n\n   MATRIX A =");
   for(i=0;i<m;i++)
   {
     printf("\n\n\t");
     for(j=0;j<n;j++)
     {
	 printf("\t%d",mat1[i][j]);      /*  DISPLAYING MATRIX 1 */
     }
   }
   printf("\n\n\n\n   MATRIX B =");
   for(i=0;i<o;i++)
   {
     printf("\n\n\t");
     for(j=0;j<p;j++)
     {
	printf("\t%d",mat2[i][j]);      /*  DISPLAYING MATRIX 2 */
     }
   }
 }
 /*==========================END OF FUNCTION display()===========================*/
/*--------------------------------------------------------------------------*/
/*          *+*+*+*+*+*+*+*+  END OF THE PROGRAM  *+*+*++*+*+*+*+*+         */
/*--------------------------------------------------------------------------*/
