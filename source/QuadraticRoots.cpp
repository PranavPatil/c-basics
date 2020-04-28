/**************************************************************************/
/*	     PROGRAM TO FIND ROOTS OF QUADRATIC EQUATION !!               */
/**************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
 /*------------------------------------------------------------------------*/
 /*                ***** START OF MAIN FUNCTION *****                      */
 /*------------------------------------------------------------------------*/
 {
  float discriminant,root1,root2;    /* DECLARING FUNCTION VARIABLES */
  int a,b,c;
  char an;
 do                                  /* START OF DO-WHILE LOOP */
 {
   clrscr();                        /* CLEARING THE SCREEN */
   flushall();
   printf("**********************************************************");
   printf("\n\n\n\n PROGRAM TO FIND ROOTS OF QUADRATIC EQUATION !!");
   printf("\n\n\n\n");
   printf("**********************************************************");
   printf("\n\n\n\n\t  ENTER THE VALUES OF AS FOLLOWS !!");
   printf("\n\n\n A = ");
   scanf("%d",&a);                 /* ACCEPTING VALUE OF A */
   printf("\n\n\n B = ");
   scanf("%d",&b);                 /* ACCEPTING VALUE OF B */
   printf("\n\n\n C = ");
   scanf("%d",&c);                 /* ACCEPTING VALUE OF C */
   int p,q,r,w,v;
   p=a;
   q=b;
   r=c;
   printf("\n\n\n\t   QUADRATIC EQUATION => %dX�+ %dX + %d = 0",p,q,r);
   discriminant = b*b - 4*a*c;
   if(discriminant<0)             /* CHECKING FOR IMAGINARY ROOTS */
   {
     printf("\n\n\n\n\t ROOTS ARE IMAGINARY !! ");
     w=(-((b)/(2*a)));
     v=sqrt(-discriminant);
     printf("\n\n\n\tROOT 1 = %d + %di",w,v);
     printf("\n\n\n\tROOT 2 = %d - %di",w,v);
   }
   if(discriminant==0)            /* CHECKING FOR EQUAL ROOTS */
   {
     printf("\n\n\n\n\t ROOTS ARE REAL AND EQUAL !! ");
     root1= (-(-b + sqrt(discriminant))/(2.0*a));
     root2= (-(-b - sqrt(discriminant))/(2.0*a));
     printf("\n\n\n\t ROOT 1 = %f",root1);
     printf("\n\n\n\t ROOT 2 = %f",root2);
   }
   if(discriminant>0)             /* CHECKING FOR UNEQUAL ROOTS */
   {
     printf("\n\n\n\n\t ROOTS ARE REAL BUT UNEQUAL !! ");
     root1= (-(-b + sqrt(discriminant))/(2.0*a));
     root2= (-(-b - sqrt(discriminant))/(2.0*a));
     printf("\n\n\n\n\n\t ROOT 1 = %f",root1);
     printf("\n\n\n\t ROOT 2 = %f",root2);
   }
   printf("\n\n\n\n\n\t DO YOU WANT TO CONTINUE !!");
   printf("\n\n\n\n\t TYPE Y FOR YES OR N FOR NO :");
   scanf("%s",&an);
 }while( an=='Y' || an=='y');       /* END OF DO-WHILE LOOP */
  printf("\n\n\n\n\n\t\t*****  END OF THE PROGRAM !!  *****");
  getch();
/* -------------------------------------------------------------------------*/
/*                    ****  END OF MAIN FUNCTION  ****                      */
/*--------------------------------------------------------------------------*/
 }
