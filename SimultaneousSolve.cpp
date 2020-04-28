/*=========================================================================*/
/*  PROBLEM STATEMENT: WRITE A 'C' PROGRAM TO SOLVE SIMULTANEOUS EQUATIONS */
/*  BY ============>   1> CRAMERS RULE                                     */
/*                     2> GAUSS SEIDAL RULE                                */
/*                     3> GAUSS ELIMINATION METHOD                         */
/*=========================================================================*/

/*================== IMPORTING REQUIRED HEADER FILES ======================*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#define SIZE 11   /*DEFINING MACRO*/
#define ERROR 0.001

int ch;
/*------------------------------------------------------------------------*/
/*                ***** START OF MAIN FUNCTION *****                      */
/*------------------------------------------------------------------------*/
void main()
{
	 int n,flag=0;     /* LOCAL VARIABLE DECLARATION */
	 float equ[SIZE][SIZE];
/*-------------------  DECLARATION OF FUNCTIONS  -------------------------*/
	 int menu();
	 void accepteq(float equ[SIZE][SIZE],int *n);
	 void displayeq(float equ[SIZE][SIZE],int n);
	 void cramer(float equ[SIZE][SIZE],int n);
	 void gausssiedel(float equ[SIZE][SIZE],int n);
	 void gausselim(float equ[SIZE][SIZE],int n);
	 clrscr();                   /* CLEARING THE SCREEN */
	 do                          /* START OF DO-WHILE LOOP */
	 {
	   do                        /* START OF DO-WHILE LOOP */
	   {
	     ch=menu();           /* CALLING FUNCTION FOR DISPLAY MENU */
	     if(flag==0	&&	ch!=1)
	     printf("\n\n\t\tYOU NEED TO INPUT POLYNOMIAL FIRST !!");
	   }while(flag==0 && ch!=1);
	   flag=1;

	   switch(ch)              /* START OF SWITCH CASE */
	   {
	     case 1:
		     printf("\n\n\t\t****** ACCEPTING EQUATIONS ******");
		     accepteq(equ,&n); /* FUNCTION CALL TO ACCEPT EQUATIONS */
		     displayeq(equ,n); /* FUNCTION CALL TO DISPLAY EQUATIONS */
		     break;
	     case 2:

		     printf("\n\n\t\t ****** CRAMER'S RULE ******");
		     printf("\n ORIGINAL EQUATIONS :: ");
		     displayeq(equ,n); /* FUNCTION CALL TO ACCEPT EQUATIONS  */
		     cramer(equ,n);
		     break;

	     case 3:
		     printf("\n\n\t\t ****** GAUSS ELIMATION ******");
		     printf("\n\n\t ORIGINAL EQUATIONS::");
		     displayeq(equ,n); /*FUNCTION CALL TO ACCEPT EQUATIONS */
		     gausselim(equ,n); /*FUNCTION CALL FOR GAUSS ELIMINATION METHOD*/
		     break;


	     case 4:
		     printf("\n\n\t\t****** GAUSS SIEDAL ******");
		     printf("\n\n\t ORIGINAL EQUATIONS::");
		     displayeq(equ,n); /* FUNCTION CALL TO ACCEPT EQUATIONS */
		     gausssiedel(equ,n); /*FUNCTION CALL FOR GAUSS SIEDEL METHOD*/
	   }
	   getch();                          /* END OF THE SWITCH CASE */
	 }while(ch!=5);                  /* END OF DO-WHILE LOOP */
}
/* -----------------------------------------------------------------------*/
/*                  ****  END OF MAIN FUNCTION  ****                      */
/*------------------------------------------------------------------------*/

/* *************************************************************************
	   FUNCTION DEFINITION FOR DISPLAYING MENU
	   PARAMETERS PASSED :: NONE
	   RETURN TYPE :: INTEGER

****************************************************************************/

int menu()
 {
   do
   {
    clrscr();
    /*========================= DISPLAY MENU ==============================*/
    printf("\n\n\t\b\b\b\b");
    printf("**************************************************************");
    printf("\n\n\n    PROGRAM ON TO SOLVE SIMULTANEOUS EQUATIONS !!");
    printf("\n\n\n\t\b\b\b\b");
    printf("**************************************************************");
    printf("\n\n\n\t\b\b\b\b");
    printf("==============================================================");
    printf("\n\n             ++++++++++ MENU ++++++++++     \n\n\t\b\b\b\b");
    printf("==============================================================");
    printf("\n\n\n\t1 : ACCEPT EQUATIONS		      [CHOICE 1]      ");
    printf("\n\n\t2 : CRAMER'S RULE                     [CHOICE 2]      ");
    printf("\n\n\t3 : GAUSS ELIMINATION	              [CHOICE 3]      ");
    printf("\n\n\t4 : GAUSS SIEDEL	              [CHOICE 4]      ");
    printf("\n\n\t5 : EXIT                              [CHOICE 5]      ");
    printf("\n\n\n\n\t  ENTER YOUR CHOICE : ");
    fflush(stdin);
    scanf("%d",&ch);                /* Accepting Choice */
    if(ch==5)
    {
     clrscr();
     printf("\n\n\n\n\t\b\b\b\b");
     printf("===============================================================");
     printf("\n\n\n\tTHANK YOU !!.");
     printf("\n\n\tITS A PRODUCT BY ABC SOFTWARE CO-OPERATION PVT LTD..");
     printf("\n\n\t@  ALL RIGHTS RESERVED BY ABC.NEWYORK (U.S.A)..");
     printf("\n\n\n\n\t\b\b\b\b");
     printf("===============================================================");
     getch();
     exit(0);
    }
   }while(ch<1||ch>5);
   return(ch);                 /* RETURNING THE VALUE OF THE CHOICE */
}
/*------------------------------------------------------------------------*/
/*                    END OF FUNCTION MENU                                */
/*------------------------------------------------------------------------*/
/* **************************************************************************
	      FUNCTION DEFINITION FOR ACCEPTING EQUATIONS
	      PARAMETER PASSED :: ADDRESS OF VARIABLE n &
	      ARRAY CONTAINING EQUATIONS
	      RETURN TYPE :: VOID
/* **************************************************************************/

void accepteq(float equ[SIZE][SIZE],int *n)
 {
	 int i,j;                  /* LOCAL VARIABLE DECLARATION */
	 do
	 {
	   clrscr();
	   printf("\n\n\n\n\t\b\b\b\b");
	   printf("===============================================================");
	   printf("\n\n\t TO USE CRAMER'S RULE ");
	   printf("\n\n\t PUT NO OF EQUATIONS EQUAL TO 3.");
	   printf("\n\n\t\b\b\b\b");
	   printf("===============================================================");
	   printf("\n\n\n\t ENTER THE NO OF CO-EFFICENTS OF EQUATIONS :: ");
	   scanf("%d",n);     /* ACCEPING NO OF INPUTS */
	   printf("\n\n\t\b\b\b\b");
	   printf("===============================================================");
	 }while(*n<2||*n>SIZE-1);
    printf("\n\n\n\n\t\b\b\b\b");
    printf("===============================================================");
    printf("\n\n\t   ENTER THE TWO EQUATIONS AS FOLLOWS !!\n\n\t\b\b\b\b");
    printf("===============================================================\n\n");
    for(i=0;i<*n;i++)
 {
	printf("\n\n\tENTER THE CO-EFFICIENTS OF X1 AND X2 :: ",i+1);
	for(j=0;j<*n;j++)
	scanf("%f",&equ[i][j]);     /* Accepting Coefficients*/
 }

 printf("\n\n\tENTER THE CONSTANT VALUE OF EACH EQUATION :: ");
 for(i=0;i<*n;i++)
 scanf("%f",&equ[i][*n]);      /* Accepting Constants*/
}

/*------------------------------------------------------------------------*/
/*            ******** START OF FUNCTION accepteq() ********              */
/*------------------------------------------------------------------------*/

/****************************************************************************
	       FUCTION DEFINITION TO  DISPLAY EQUATIONS
	       PARAMETERS PASSED :: NO OF EQUATIONS AND ARRAY
	       CONTAINING EQUATIONS
	       RETURN TYPE :: VOID
*****************************************************************************/

 void displayeq(float equ[SIZE][SIZE],int n)
 {
   int i,j;                   /* LOCAL VARIABLE DECLARATION */
   for(i=0;i<n;i++)
   {
     printf("\n\n\tEQUATION %d:: ",i+1);
     for(j=0;j<=n;j++)
     {
       if(j<n)
       printf("  %2.0fX%d",equ[i][j],j+1);     /* DISPLAY EQUAION */
       if(j<n-1&&equ[i][j+1]>=0)
       printf(" +");
       if(j==n)
       {
	 printf(" =");
	 printf("  %2.0f",equ[i][n]);
       }
     }
   }
 }
/*========================END OF FUNCTION displayeq()===========================*/

/* **************************************************************************
	      FUNCTION DEFINITION FOR CRAMER'S RULE
	      PARAMETERS PASSED :: NO OF EQUATIONS AND ARRAY
	      CONTAINING EQUATIONS
	      RETURN TYPE :: VOID Return type :: void
***************************************************************************/

void cramer(float equ[SIZE][SIZE],int n)
 {
    int i;                           /* LOCAL VARIABLE DECLARATION */
    float a,b,c,d,e,f,g,result[3];
    void displayeq(float equ[SIZE][SIZE],int n);

    clrscr();
    printf("\n\n\n\n\t\b\b\b\b");
    printf("===============================================================");
    printf("\n\n\t   ROOTS BY CRAMER'S RULE !!\n\n\t\b\b\b\b");
    printf("===============================================================\n\n");
    printf("\n\n\t    ###### ORIGINAL EQUATIONS ######\n\n\n");
    displayeq(equ,n);
	 /* CALCULATING DELTA */

    a=(equ[0][0]*((equ[1][1]*equ[2][2]) - (equ[2][1]*equ[1][2])));
    b=(equ[0][1]*((equ[1][0]*equ[2][2]) - (equ[2][0]*equ[1][2])));
    c=(equ[0][2]*((equ[1][0]*equ[2][1]) - (equ[2][0]*equ[1][1])));
    d=(a - b + c);

    /* CALCULATING DELTA X1 */

    a=(equ[0][3]*((equ[1][1]*equ[2][2]) - (equ[2][1]*equ[1][2])));
    b=(equ[0][1]*((equ[1][3]*equ[2][2]) - (equ[2][3]*equ[1][2])));
    c=(equ[0][2]*((equ[1][3]*equ[2][1]) - (equ[2][3]*equ[1][1])));
    e=(a - b + c);

    /* CALCULATING DELTA X2 */

    a=(equ[0][0]*((equ[1][3]*equ[2][2]) - (equ[2][3]*equ[1][2])));
    b=(equ[0][3]*((equ[1][0]*equ[2][2]) - (equ[2][0]*equ[1][2])));
    c=(equ[0][2]*((equ[1][0]*equ[2][3]) - (equ[2][0]*equ[1][3])));
    f=(a - b + c);

	 /* CALCULATING DELTA X3 */

    a=(equ[0][0]*((equ[1][1]*equ[2][3]) - (equ[2][1]*equ[1][3])));
    b=(equ[0][1]*((equ[1][0]*equ[2][3]) - (equ[2][0]*equ[1][3])));
    c=(equ[0][3]*((equ[1][0]*equ[2][1]) - (equ[2][0]*equ[1][1])));
    g=(a - b + c);

    if(d<0 || d>0)
    {
      result[0]=(e/d);           /* CALCULATING X1 */
      result[1]=(f/d);           /* CALCULATING X2 */
      result[2]=(g/d);           /* CALCULATING X3 */

	  /* PRINTING THE REULTS */
      printf("\n\n\n\n\t RESULTS :: ");
      for(i=0;i<n;i++)
      {
	printf("\n\n\n\t\t    X%d= %2.0f \t",i+1,result[i]);
      }
      printf("\n\n\n\n\t\b\b\b\b");
      printf("===============================================================");
    }
    if(d==0)
    {
     printf("\n\n\t\b\b");
     printf("\b\bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
     printf("\n\n\t   EQUATIONS ARE NOT SIMULTANEOUS EQUATION !!\n\n\t\b\b");
     printf("\b\bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    }
 }
 /*------------------------------------------------------------------------*/
 /*                ******** END OF FUNCTION  cramer() ********             */
 /*------------------------------------------------------------------------*/

/****************************************************************************/
/*	      FUNCTION DEFINITION FOR GAUSS ELIMINATION METHOD
	      PARAMETERS PASSED :: NO OF EQUATIONS AND ARRAY
	      CONTAINING EQUATIONS
	      RETURN TYPE :: VOID                                           */
/****************************************************************************/

void gausselim(float equ[SIZE][SIZE],int n)
{
   int i,j,k,l,elim,maxpos;       /* LOCAL VARIABLE DECLARATION */
   float c,max,temp,a[SIZE],b[SIZE],tempeq[SIZE][SIZE],sum,result[SIZE];
   void displayeq(float equ[SIZE][SIZE],int n);

 /* STORING THE EQUATION IN ANOTHER WAY SO THAT THE ORIGINAL  */
 /*  EQUATION REMAINS UNAFFECTED AND CAN BE USED FOR ANOTHER PURPOSE */

  clrscr();
  printf("\n\n\n\n\t\b\b\b\b");
  printf("===============================================================");
  printf("\n\n\t   ROOTS BY GAUSS ELIMINATION METHOD !!\n\n\t\b\b\b\b");
  printf("===============================================================\n\n");
  printf("\n\n\t    ###### ORIGINAL EQUATIONS ######\n\n\n");
  displayeq(equ,n);
  getch();
 for(i=0;i<n;i++)
 {
   for(j=0;j<=n;j++)
   tempeq[i][j]=equ[i][j];
 }
 for(elim=0;elim<n-1;elim++)    /* FOR CARRYINF OUT N-1 ELIMINATIONS */
 {
				/* USED FOR PIVOTING */

  maxpos=elim;
  max=tempeq[elim][elim];

  for(i=elim;i<n;i++)
  {
   if(fabs(tempeq[i][elim])>fabs(max))
   maxpos=i;
  }
	/* SWAPPING THE EQUATIONS IF THE PIVOTING ELEMENTS IS NOT MAXIMUM */

  for(i=elim;i<=n;i++)
  {
    temp=tempeq[elim][i];
    tempeq[elim][i]=tempeq[maxpos][i];
    tempeq[maxpos][i]=temp;
  }

  /* TO MAKE UPPER IN TRIANGULAR FORM */

  for(k=elim;k<=n;k++)
  {
    a[k]=tempeq[elim][k]/tempeq[elim][elim];
  }
  for(k=elim+1;k<n;k++)
  {
    c=tempeq[k][elim];
    for(l=elim;l<=n;l++)
    {
      b[l]=c*a[l];
      tempeq[k][l]=tempeq[k][l]-b[l];
    }
  }
  printf("\n\n\n\n\tSTAGE : %d\n\n",elim+1);
  displayeq(tempeq,n);
  getch();
  printf("\n\n\n");
 }
 result[n]=tempeq[n-1][n]/tempeq[n-1][n-1];

 /* BACKWARD SUBSTITUTION */
 for(i=n-1;i>=1;i--)
 {
   sum=0;
   for(j=i+1;j<=n;j++)
   {
     sum=sum+tempeq[i-1][j-1]*result[j];
     result[i]=(tempeq[i-1][n]-sum)/tempeq[i-1][i-1];
   }
 }

 /* PRINTING THE RESULTS */
 printf("\n\n\n\n\tRESULTS ::");
 for(i=1;i<=n;i++)
 {
   printf("\n\n\n\t\t    X%d= %.3f\t",i,result[i]);
 }
 printf("\n\n\n\n\t\b\b\b\b");
 printf("===============================================================");
}
/*-------------------------------------------------------------------------*/
 /*            ******** END OF FUNCTION  gausselim() ********              */
 /*------------------------------------------------------------------------*/
/***************************************************************************/
/*	  FUNCTION DEFINITION FOR GAUSS SIEDEL METHOD                      */
/*	  PARAMETERS PASSED :: NO OF EQUATIONS AND ARRAY                   */
/*	  CONTAINING EQUATIONS                                             */
/*	  RETURN TYPE :: VOID                                              */
/***************************************************************************/

void gausssiedel(float equ[SIZE][SIZE],int n)
{
  static float a[SIZE],tempeq[SIZE][SIZE];
  float max,temp,sum;
  int i,j,maxpos,iter=0,flag=0,cnt;
  int eval(float tempeq[SIZE][SIZE],float a[SIZE],int n);
  void displayeq(float equ[SIZE][SIZE],int n);

  /* STORING THE EQUATION IN ANOTHER WAY SO THAT THE ORIGINAL  */
 /*  EQUATION REMAINS UNAFFECTED AND CAN BE USED FOR ANOTHER METHODS */

  clrscr();
  printf("\n\n\n\n\t\b\b\b\b");
  printf("===============================================================");
  printf("\n\n\t   ROOTS BY GAUSS SIEDEL METHOD !!\n\n\t\b\b\b\b");
  printf("===============================================================\n\n");
  printf("\n\n\t    ###### ORIGINAL EQUATIONS ######\n\n");
  displayeq(equ,n);
  for(i=0;i<n;i++)
  {
   for(j=0;j<=n;j++)
   tempeq[i][j]=equ[i][j];
  }

 /* TO MAKE DIAGONAL ELEMENTS MAXIMUM AMONG THEIR RESPECTIVE ROWS */

 for(j=0;j<n;j++)
 {
   max=tempeq[j][j];
   maxpos=j;
   flag=0;
   for(i=0;i<n;i++)
   {
     if(fabs(tempeq[i][j])>fabs(max))
     {
       maxpos=i;
       flag=1;
     }
   }
   /* SWAPPING THE EQUATIONS IF THE DIAGONAL ELEMENT IS NOT MAXIMUM */

   if(flag==1)
   {
     for(i=0;i<=n;i++)
     {
       temp=tempeq[j][i];
       tempeq[j][i]=tempeq[maxpos][i];
       tempeq[maxpos][i]=temp;
     }
   }
 }

  /* CARRYING OUT SUCCESSIVE ITERATIONS TO FIND THE SOLUTIONS */
 while(1)
 {
   for(i=0;i<n;i++)
   {
     sum=0;
     for(j=0;j<=n;j++)
     {
       if(i==j)
       continue;
       sum=sum+(tempeq[i][j]*a[j]);
     }
     sum=tempeq[i][n]-sum;
     a[i]=sum/tempeq[i][i];
   }
   iter++;                       /* INCREMENTING THE NO OF ITERATIONS */
   cnt=eval(tempeq,a,n);           /* CALL FUNCTION FOR EVALUATION */
   if(cnt==0)
   break;
 }

 /* PRINTING THE RESULTS */

 printf("\n\n\n\n\t NO OF ITERATIONS PERFORMED ::  %d ",iter);
 printf("\n\n\n\n\t RESULTS :: ");
 for(i=0;i<n;i++)
 printf("\n\n\n\t\t    X%d =  %.3f\t",i+1,a[i]);
 printf("\n\n\n\n\t\b\b\b\b");
 printf("===============================================================");
}
/*-------------------------------------------------------------------------*/
/*            ******** END OF FUNCTION gausssiedel() ********              */
/*-------------------------------------------------------------------------*/

/****************************************************************************
		 FUNCTION DEFINITION TO EVALUTE RESULT
		 PARAMETERS PASSED :: NO OF EQUATIONS AND ARRAY
		 CONTAINING EQUATIONS AND ARRAYS
		 CONTAINING THE VALUE OF X1 AND X2
		 RETURN TYPE :: INTEGER
***************************************************************************/

int eval(float tempeq[SIZE][SIZE],float a[SIZE],int n)
 {
   float sum=0;                /* LOCAL VARIABLE DECLARATION */
   int i;

   for(i=0;i<n;i++)              /* LOOP TO CHECK ACCURACY */
   {
     sum=sum+tempeq[0][i]*a[i];
   }
   if(fabs(sum-tempeq[0][n])<ERROR)
   {
     return(0);
   }
   else
   {
     return(1);
   }

 }
/*-------------------------------------------------------------------------*/
/*            ******** END OF FUNCTION eval() ********              */
/*-------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
/*          *+*+*+*+*+*+*+*+  END OF THE PROGRAM  *+*+*++*+*+*+*+*+         */
/*--------------------------------------------------------------------------*/														 /* End Of Function */

															/* End Of Program */
