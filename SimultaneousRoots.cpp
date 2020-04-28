/**************************************************************************/
/*	     PROGRAM TO FIND ROOTS OF SIMULTANEOUS EQUATION !!            */
/*                        # BY CRAMERS RULE #                             */
/**************************************************************************/
 #include<stdio.h>
 #include<conio.h>
 #include<process.h>
 void main()
 /*------------------------------------------------------------------------*/
 /*                ***** START OF MAIN FUNCTION *****                      */
 /*------------------------------------------------------------------------*/
{
 /*-------------------  DECLARATION OF FUNCTIONS  -------------------------*/
  void two();
  void three();
  int ch;                            /* DECLARATION OF VARIABLES */
  do                                 /* START OF DO-WHILE LOOP */
  {
    clrscr();                        /* CLEARING THE SCREEN */
    flushall();
    printf("\t\b\b\b\b");
    printf("****************************************************************");
    printf("\n\n\t      PROGRAM TO SOLVE SIMULTANOUS EQUATION  !!");
    printf("\n\n\n\t\b\b\b\b");
    printf("****************************************************************");
  /*------------------------------------------------------------------------*/
  /*                     **** DISPLAYING THE MENU ****                             */
  /*------------------------------------------------------------------------*/
    printf("\n\n\n\n\t\b\b\b\b");
    printf("===============================================================");
    printf("\n\n\n\t\b\b\b\b");
    printf("********************** MENU*************************************");
    printf("\n\n\n\t\b\b\b\b");
    printf("===============================================================");
    printf("\n\n\n\n\n\n\t     [1] : SOLVE 2 EQUATIONS  [CHOICE 1]     \n\n");
    printf("\t     [2] : SOLVE 3 EQUATIONS  [CHOICE 2]        \n\n");
    printf(    "\t     [3] : EXIT               [CHOICE 3]        \n\n");
    printf("\n\n\n\t       ENTER YOUR CHOICE : ");
    scanf("%d",&ch);                 /* ACCEPTING YOUR CHOICE */
 /*-------------------------------------------------------------------------*/
 /*               **** START OF SWITCH CASE ****                            */
 /*-------------------------------------------------------------------------*/
   switch(ch)
   {
     case 1:
	    clrscr();                /* CLEARING THE SCREEN */
	    two();                   /* CALLING FUNCTION  two() */
	    break;
     case 2:
	    clrscr();                /* CLEARING THE SCREEN */
	    three();                 /* CALLING FUNCTION  three() */
	    break;
     case 3:
	    printf("\n\n\n\t");
	    printf("++++++++++++++++++++++++++++++++++++++++++++++++");
	    printf("\n\n\t     *****  END OF THE PROGRAM !!  *****\n");
	    printf("\n\t++++++++++++++++++++++++++++++++++++++++++++++++");
	    getch();
	    exit(0);
	    break;
   }
  }while(ch<3 || ch>3);                /* END OF DO-WHILE LOOP */
  getch();
 /* -----------------------------------------------------------------------*/
 /*                  ****  END OF MAIN FUNCTION  ****                      */
 /*------------------------------------------------------------------------*/
}
/*------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION two() ********               */
/*------------------------------------------------------------------------*/
void two()
{
  void delta2(int d4[10][10][10]);    /* DECLARATION OF LOCAL FUNCTIONS */
  int b2[20][20],d4[10][10][10];      /* DECLARATION OF LOCAL VARIABLES */
  int i9,i10,i11,j5,z,z1,mk;
  printf("\n\n\n\n\t\b\b\b\b");
  printf("===============================================================");
  printf("\n\n\t   ENTER THE TWO EQUATIONS AS FOLLOWS !!\n\n\t\b\b\b\b");
  printf("===============================================================\n\n");
  z1=0;
  for(i10=0;i10<2;i10++)
  {
    printf("\n\t\b\b\b\b");
    printf("--------------------------------------------------------------");
    printf("\n\n\t");
    printf("\n\t **** ENTER THE VALUES FOR EQUATION %d ****\n\n\t\b\b\b",i10+1);
    printf("\b--------------------------------------------------------------");
    for(i11=0;i11<3;i11++)
    {
      printf("\n\n\n\t\t A%d = ",z1+i10+i11+1);
      scanf("%d",&b2[i10][i11]);         /* ACCEPTING VALUES OF EQUATIONS */
    }
    z1=2;
  }
  printf("\n\n\t\b\b\b\b");
  printf("--------------------------------------------------------------\n\n");
  z=0,i9=1,j5=2;
  for(i10=0;i10<2;i10++)
  {
    printf("\n\t\tEQUATION %d ",i10+1);   /* DISPLAYING THE EQUATIONS */
    printf("=> %dX + %dY = %d  \n\n\n",b2[i10][z],b2[i10][i9],b2[i10][j5]);
  }
  printf("\t\b\b\b\b");
  printf("--------------------------------------------------------------");
  z=0,i9=0,j5=0;                  /* INITIALISING VARIABLES TO ZERO */
  do
  {
    do
    {
	if(z==0)
	{
	  z=0,j5=0;
	  for(i11=0;i11<2;i11++)
	  {
	    i9=0;
	    for(i10=0;i10<2;i10++)
	    {
	       if(i9<2)
	       d4[i9][j5][z]=b2[i10][i11];
	       i9++;
	    }
	    j5++;
	  }
	  break;
	}
	if(z==1)
	{
	  z=1,i9=0;
	  j5=0,i11=2,mk=0;
	  do
	  {
	    do
	    {
	      i9=0;
	      for(i10=0;i10<2;i10++)
	      {
		 if(i9<2)
		 d4[i9][j5][z]=b2[i10][i11];
		 i9++;
	      }
	      i11++,j5++;
	    }while(i11<2 && j5<2);
	    i11=1;
	    mk++;
	  }while(mk<2);
	}
	if(z==2)
	{
	  z=2,i9=0;
	  j5=0,i11=0,mk=0;
	  do
	  {
	    do
	    {
	      i9=0;
	      for(i10=0;i10<3;i10++)
	      {
		 if(i9<2)
		 d4[i9][j5][z]=b2[i10][i11];
		 i9++;
	      }
	      i11++;
	      j5++;
	    }while(i11<3 && j5<1);
	    i11=2;
	    j5=1;
	    mk++;
	  }while(mk<2);
	  break;
	}
    }while(i9<2 );
    z++;
  }while(z<3);
  delta2(d4);
  getch();
}
void delta2(int d4[10][10][10])
{
  int z,hgt[10],i9,j5,h1,u1,g5,gt[10][10],flag1,wx,vx,e11,w11,w12,w13,f11,f12;
  z=0;
  do
  {
    h1=0;
  for(i9=0;i9<2;i9++)
  {
    if(h1<2)
    {
      g5=0;
      for(j5=0;j5<2;j5++)
      {
	if(g5<2)
	gt[h1][g5]=d4[i9][j5][z];
	g5++;
      }
      h1++;
    }
  }
  u1=0;
  for(h1=0;h1<2;h1++)
  {
    for(g5=0;g5<2;g5++)
    {
      if(u1<4)
      hgt[u1]=gt[h1][g5];
      u1++;
    }
  }
  flag1=0,i9=0,j5=0,wx=0,vx=0;
  for(u1=0;u1<4;u1++)
  {
     if(flag1==0)
     { i9=hgt[u1]; }
     if(flag1==1)
     {  j5=hgt[u1];}
     if(flag1==2)
     { wx=hgt[u1]; }
     if(flag1==3)
     {  vx=hgt[u1];}
     flag1++;
  }
  e11=((i9*vx)-(j5*wx));
  if(z==0)
  { w11=e11;}
  if(z==1)
  { w12=e11;}
  if(z==2)
  { w13=e11;}
    z++;
  }while(z<3);
  if(w11>0 || w11<0)
  {
    f11=0,f12=0;
    f11=w12/w11;
    f12=w13/w11;
    printf("\n\n\n\t\b\b\b\b");
    printf("---------------------------------------------------------------");
    printf("\n\n\t\t\b\b\b**** ROOTS OF BOTH THE EQUATIONS ****");
    printf("\n\n\n\t\b\b\b\b");
    printf("---------------------------------------------------------------");
    printf("\n\n\n\t\tROOT 1 = %d\n\n\n\t\tROOT 2 = %d\n\n\n\t",f11,f12);
    printf("\b\b\b\b");
    printf("---------------------------------------------------------------");
  }
 if(w11==0)
 {
  printf("\n\n\t\b\b");
  printf("\b\bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
  printf("\n\n\t   EQUATIONS ARE NOT SIMULTANEOUS EQUATION !!\n\n\t\b\b");
  printf("\b\bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
 }
  getch();
 /*========================END OF FUNCTION two()===========================*/
}
/*------------------------------------------------------------------------*/
/*                ******** START OF FUNCTION three() ********               */
/*------------------------------------------------------------------------*/
void three()
{
  int a[20][20],d[10][10][10],i,j,k,z3,z4,z5;
  int i1,i2,m;
  void delta(int d[10][10][10]);
  printf("\n\n\n\n\t\b\b\b\b");
  printf("===============================================================");
  printf("\n\n\t   ENTER THE TWO EQUATIONS AS FOLLOWS !!\n\n\t\b\b\b\b");
  printf("===============================================================\n\n");
  z3=0,z4=0;
  for(i1=0;i1<3;i1++)
  {
    printf("\n\t\b\b\b\b");
    printf("--------------------------------------------------------------\n");
    printf("\n\t **** ENTER THE VALUES FOR EQUATION %d ****\n\n\t\b\b\b",i1+1);
    printf("\b--------------------------------------------------------------");
    for(i2=0;i2<4;i2++)
    {
      printf("\n\n\n\t\t A%d = ",i1+i2+z3+z4+1);
      scanf("%d",&a[i1][i2]);
    }
    z3=3;
    if(i1==1)
    z4=3;
  }
  printf("\n\n\t\b\b\b\b");
  printf("--------------------------------------------------------------\n\n");
  z3=0,z4=1,z5=2,m=3;
  for(i1=0;i1<3;i1++)
  {
   printf("\n\t\tEQUATION %d ",i1+1);
   printf("=> %dX + %dY + %dZ = %d ",a[i1][z3],a[i1][z4],a[i1][z5],a[i1][m]);
   printf("\n\n\n");
  }
  printf("\t\b\b\b\b");
  printf("--------------------------------------------------------------");
  k=0;
  i=0;
  j=0;
  do
  {
    do
    {
	if(k==0)
	{
	  k=0,j=0;
	  for(i2=0;i2<3;i2++)
	  {
	    i=0;
	    for(i1=0;i1<3;i1++)
	    {
	       if(i<3)
	       d[i][j][k]=a[i1][i2];
	       i++;
	    }
	    j++;
	  }
	  break;
	}
	if(k==1)
	{
	  k=1,i=0;
	  j=0,i2=3,m=0;
	  do
	  {
	    do
	    {
	      i=0;
	      for(i1=0;i1<3;i1++)
	      {
		 if(i<3)
		 d[i][j][k]=a[i1][i2];
		 i++;
	      }
	      i2++,j++;
	    }while(i2<3 && j<3);
	    i2=1;
	    m++;
	  }while(m<3);
	}
	if(k==2)
	{
	  k=2,i=0;
	  j=0,i2=0,m=0;
	  do
	  {
	    do
	    {
	      i=0;
	      for(i1=0;i1<3;i1++)
	      {
		 if(i<3)
		 d[i][j][k]=a[i1][i2];
		 i++;
	      }
	      i2=i2+3;
	      j++;
	    }while(i2<4 && j<3);
	    i2=2;
	    m++;
	  }while(m<3);
	  break;
	}
	if(k==3)
	{
	  k=3,i=0;
	  j=0,i2=0,m=0;
	  do
	  {
	    do
	    {
	      i=0;
	      for(i1=0;i1<3;i1++)
	      {
		 if(i<3)
		 d[i][j][k]=a[i1][i2];
		 i++;
	      }
	      i2++;
	      j++;
	    }while(i2<4 && j<2);
	    i2=3;
	    j=2;
	    m++;
	  }while(m<3);
	  break;
	}
    }while(i<3 );
    k++;
  }while(k<4);
  delta(d);
  getch();
}
void delta(int d[10][10][10])
{
  int h,s1,g1,hg[10],g[10][10],i,j,u,flag,n,o,m,w,v,p2,e1,e2,e3,f1,f2,f3,k;
  int w1,w2,w3,w4;
  h=0,g1=0,k=0;
do
{
  h=0;
  for(i=0;i<3;i++)
  {
    if(h<3)
    {
      g1=0;
      for(j=0;j<3;j++)
      {
	if(g1<3)
	g[h][g1]=d[i][j][k];
	g1++;
      }
      h++;
    }
  }
  u=0;
  for(h=0;h<3;h++)
  {
    for(g1=0;g1<3;g1++)
    {
      if(u<9)
      hg[u]=g[h][g1];
      u++;
    }
  }
  flag=0,i=0,j=0,n=0,o=0,m=0,g1=0,p2=0,w=0,v=0;
  for(u=0;u<9;u++)
  {
     if(flag==0)
     { i=hg[u]; }
     if(flag==1)
     {  j=hg[u];}
     if(flag==2)
     { w=hg[u]; }
     if(flag==3)
     {  v=hg[u];}
     if(flag==4)
     {  n=hg[u]; }
     if(flag==5)
     {  o=hg[u]; }
     if(flag==6)
     {  m=hg[u]; }
     if(flag==7)
     {  g1=hg[u];}
     if(flag==8)
     {  p2=hg[u];}
     flag++;
  }
  e1=i*((n*p2)-(o*g1));
  e2=j*((v*p2)-(m*o));
  e3=w*((v*g1)-(n*m));
  s1=e1-e2+e3;
  if(k==0)
  { w1=s1;}
  if(k==1)
  { w2=s1;}
  if(k==2)
  { w3=s1;}
  if(k==3)
  { w4=s1;}
  k++;
}while(k<4);
 if(w1>0 || w1<0)
 {
  f1=0,f2=0,f3=0;
  f1=w2/w1;
  f2=w3/w1;
  f3=w4/w1;
  printf("\n\n\n\t\b\b\b\b");
  printf("---------------------------------------------------------------");
  printf("\n\n\t\t\b\b\b**** ROOTS OF THE THREE EQUATIONS ****");
  printf("\n\n\n\t\b\b\b\b");
  printf("---------------------------------------------------------------");
  printf("\n\n\n\t\t");
  printf("ROOT 1 = %d\n\n\n\t\tROOT 2 = %d\n\n\n\t\tROOT 3 = %d",f1,f2,f3);
  printf("\n\n\n\t\b\b\b\b");
  printf("---------------------------------------------------------------");
 }
 if(w1==0)
 {
  printf("\n\n\t\b\b");
  printf("\b\bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
  printf("\n\n\t   EQUATIONS ARE NOT SIMULTANEOUS EQUATION !!\n\n\t\b\b");
  printf("\b\bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
 }
 /*========================END OF FUNCTION two()===========================*/
  getch();
}
