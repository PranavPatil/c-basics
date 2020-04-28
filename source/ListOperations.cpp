/*=========================================================================*/
/*   PROGRAM STATEMENT :: WRITE A PROGRAM IN C++ FOR ACCEPTING TWO LISTS &
			 CHECK WHETHER THE LISTS ARE SIMILAR. ALSO PERFORM
			 ADDITION OF TWO LISTS AND STORE THE RESULT IN
			 ANOTHER LIST                                      */
/*=========================================================================*/

/*================== IMPORTING REQUIRED HEADER FILES ======================*/

#include<iostream.h>              /* INCLUDING PREPROCESSOR DIRECTIVES */
#include<conio.h>
#include<string.h>

 class list                          /* DECLARING CLASS */
{
 private:                         /* DECLARATION OF PRIVATE MEMBERS */
	 int *a;
	 int n;
 public:                          /* DECLARATION OF PUBLIC MEMBERS */

	list(int k);              /* CONSTRUCTOR DECLARATION */

	operator +(list l)        /* OPERATOR OVERLOADING */
	{
	 int i;
	 for(i=0;i<l.n;i++)
	 {
	  a[i]=a[i]+l.a[i];
	  return l.a[i];
	 }
	 return(0);
	}
		 /* DECLARING FRIEND FUNCTION */
	friend int compare(list l1,list l2);

	friend ostream & operator <<(ostream &,list &);

	friend istream & operator >>(istream &,list &);
};

list::list(int k)                 /* CONSTRUCTOR DEFINITION */
{
  n=k;
  a=new[n];                       /* DYNAMIC MEMORY ALLOCATION */
}


/* **************************************************************************/
/*                FUNCTION DEFINITION TO COMPARE TWO LISTS                  */
/*                       PROTOTYPE :: INTEGER                               */
/*               PARAMETERS PASSED :: TWO LISTS                             */
/*                     RETURN TYPE :: INTEGER                               */
/*                 TIME COMPLAXITY :: n                                     */
/* **************************************************************************/

int compare(list l1,list l2)
{
 int sum=0;
 for(int i=0;i<l1.n;i++)
 {
  sum=sum+(l1.a[i]-l2.a[i]);
 }
 return sum;
}
/*====================== END OF FUNCTION COMPARE =========================*/

/* -----------------------------------------------------------------------*/
/*                  ****  START OF FUNCTION  ****                      */
/*------------------------------------------------------------------------*/
ostream & operator <<(ostream & out,list &l)    /* OPERATOR OVERLOADING */
{
 for(int i=0;i<l.n;i++)
 {
  cout<<"   "<<l.a[i];
 }
 return out;
}
/*======================== END OF FUNCTION =============================*/
/* -----------------------------------------------------------------------*/
/*                  ****  START OF FUNCTION  ****                      */
/*------------------------------------------------------------------------*/
istream & operator >>(istream & in,list &l)     /* OPERATOR OVERLOADING */
{
 for(int i=0;i<l.n;i++)
 {
  cin>>l.a[i];
 }
 return in;
}
/*======================== END OF FUNCTION ===============================*/
/*------------------------------------------------------------------------*/
/*                ***** START OF MAIN FUNCTION *****                      */
/*------------------------------------------------------------------------*/

void main()                        /* STARTING MAIN FUNCTION */
{
 int o,p,q;                        /* LOCAL VARIABLE DECLARATION */
 char choice;
 do                                /* START OF DO-WHILE LOOP */
 {
   clrscr();                      /* CLEARING THE SCREEN */

   cout<<endl<<"  ==========================================================";
   cout<<endl<<"\n\n            PROGRAM TO PERFORM LIST OPERATIONS";
   cout<<endl<<"\n\n\t";
   cout<<endl<<"  ==========================================================";

   cout<<endl<<"\n\n\n\n            ENTER THE SIZE OF LIST 1 :: ";
   cin>>o;

   cout<<endl<<"\n\n            ENTER THE SIZE OF LIST 2 :: ";
   cin>>p;

   if(o<p)                           /* CHECKING SIZE OF LIST */
   {
     q=p;
   }
   else
   {
      q=o;
   }

   list l1(o),l2(p),l3(q);

   cout<<endl<<endl<<"\n\n            INSERT THE ELEMENTS OF LIST 1 :: ";
   cin>>l1;
   cout<<endl<<"\n\n             LIST 1 :: ";
   cout<<"   "<<l1;

   cout<<endl<<endl<<"\n\n            INSERT THE  ELEMENTS OF LIST 2 :: ";
   cin>>l2;
   cout<<endl<<"\n\n             LIST 2 :: ";
   cout<<"   "<<l2;

   if(o!=p)                       /* CHECK FOR SIMILARITY OF LISTS */
   {
     cout<<endl<<endl<<"\n\n            THE LISTS ARE DISSIMILAR ";
     cout<<endl<<endl<<"\n\n            ADDITION NOT POSSIBLE !! ";
   }
   else
   {
      l3=l1+l2;                      /* OPERATOR OVERLOADING CALL */

      cout<<endl<<endl<<"\n\n            ADDED LIST :: ";
      cout<<"   "<<l3;

      int sum;
      sum=compare(l1,l2);             /* FUNCTION CALL TO COMPARE TWO LISTS */

      if(sum==0)
      {
       cout<<endl<<endl<<"\n\n           THE LISTS ARE SIMILAR ";
      }
      else
      {
       cout<<endl<<endl<<"\n\n            THE LISTS ARE DISSIMILAR";
      }
   }
   cout<<endl<<"\n\n\n\t";
   cout<<endl<<"  ============================================================";
   cout<<endl<<"\n\n            DO YOU WANT TO CONTINUE ? ";
   cout<<endl<<"\n\n            ENTER YOUR CHOICE (Y \ N) :";
   cin>>choice;
 }while(choice=='y' || choice=='Y');    /* END OF DO-WHILE LOOP */
 cout<<endl<<"\n\n      +++++++++++++++ END OF THE PROGRAM +++++++++++++++++++";
 getch();
 /* -----------------------------------------------------------------------*/
 /*                  ****  END OF MAIN FUNCTION  ****                      */
 /*------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
/*          *+*+*+*+*+*+*+*+  END OF THE PROGRAM  *+*+*++*+*+*+*+*+         */
/*--------------------------------------------------------------------------*/
