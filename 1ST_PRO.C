//C PROJECT.
//each strep for 300rs fix rate
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<dos.h>
 int B[30];
 int FINALBILL;
 char MOBNO[10];
 time_t tm;

 void main()

{

  int choice[5];
  int a[5];
  int A[5];
  int P[5];
  int C[5];
  int S[5];
  int An[5];
  int i;
  int j=1;
  char Name[100];
  char EM[100];
  clrscr();
  time(&tm);


  printf("\t\t\t*********************************\n\t\t\t*\tSKY MEDICAL AGENCY\t*\n\t\t\t*********************************");
  printf("\nE-mail:skymedicaal1334@gmail.com\n");
  printf("Mobile_No:8967987658\n");
  printf("Address:New Develop street,SKY AGENCY,pune 400431\n");
  printf("\n##---------------------------------------------------------------------------##");

  printf("\n##----------------------------------------------------------------------------##");

  printf("\n\nEnter your name:");
  scanf("%s",&Name);
  printf("Mobile NO:");
  scanf("%s",&MOBNO);
  printf("Email_Id:");
  scanf("%s",&EM);
  printf("\n##---------------------------------------------------------------------------##");

  for(i=1;i<3;i++)
  {
    printf("\t\t\t\t**********************************\n\t\t\t*\tLIST OF MEDICINES\t*\n\t\t\t**********************************");
    printf("\n\nWhich medicines you looking for...!(Press Nnumber)");
    printf("\n1.Antiseptic \n2.Antibiotic \n3.Painkiller \n4.Cuf Serif \n5.Antimallarial\n....[");
    scanf("%d",&choice[0]);

    do


    {


    switch(choice[0])

    {

     case 1:

     printf("\n##---------------------------------------------------------------------------##");
     printf("\n1.Arthace Plus(100+500mg) \n2.Zicon(500mg) \n3.Cipocin(400mg) \n4.cipoxin(300mg) \n5.Scabrid(200mg)\n(For those which amtiseptics strips you want to purches enter number)....[ ");
     scanf("%d",&choice[1]);

     if(choice[1]==1)
     {
      printf("\n*How Many Strips Of Arthace:=>");
      scanf("%d",&a[0]);
      B[0]=300*a[0];
     }


     if(choice[1]==2)
     {
      printf("\n*How Many Strips Of Zicon:=>");
      scanf("%d",&a[1]);
      B[1]=300*a[1];
     }


     if(choice[1]==3)
     {
      printf("\n*How Many Strips Of Cipocin:=>");
      scanf("%d",&a[2]);
      B[2]=300*a[2];
     }


     if(choice[1]==4)
     {
      printf("\n*How Many Strips Of Cipoxin:=>");
      scanf("%d",&a[3]);
      B[3]=300*a[3];
     }


     if(choice[1]==5)
     {
      printf("\n*How Many Strips Of Scabrid:=>");
      scanf("%d",&a[4]);
      B[4]=300*a[4];
     }


   printf("\nDO YOU WANNA BUY MORE ANTISEPTICS: \n1.YES \n2.NO\n...[");
   scanf("%d",&j);

   break;

   case 2:

   printf("\n##---------------------------------------------------------------------------##");
   printf("\n1.Penicillins(100+500mg) \n2.Tepracyclines(500mg) \n3.Cephalosporins(400mg) \n4.Qinolones(300mg) \n5.Lincomysins(200mg)\n(For those which amtiboitic strips you want to purches enter number)....[ ");
   scanf("%d",&choice[2]);


    if(choice[2]==1)
    {
     printf("\n*How Many Strips Of Penicillins:=>");
     scanf("%d",&A[0]);
     B[5]=300*A[0];
    }


    if(choice[2]==2)
    {
     printf("\n*How Many Strips Of Tepracyclines:=>");
     scanf("%d",&A[1]);
     B[6]=300*A[1];
    }


    if(choice[2]==3)
    {
     printf("\n*How Many Strips Of Cephalosporins:=>");
     scanf("%d",&A[2]);
     B[7]=300*A[2];
    }


    if(choice[2]==4)
    {
     printf("\n*How Many Strips Of Quinolones:=>");
     scanf("%d",&A[3]);
     B[8]=300*A[3];
    }


    if(choice[2]==5)
    {
     printf("\n*How Many Strips Of Lincomysins:=>");
     scanf("%d",&A[4]);
     B[9]=300*A[4];
    }

    printf("\nDO YOU WANNA BUY MORE ANTIBIOTIC: \n1.YES \n2.NO\n...[");
    scanf("%d",&j);

    break;

   case 3:

    printf("\n##---------------------------------------------------------------------------##");
    printf("\n1.Paracetamol(100+500mg) \n2.Aspirin(500mg) \n3.Ibuprofen(400mg) \n4.Morphin(300mg) \n5.Dolo(600mg)\n(For those which painkillers strips you want to purches enter number)....[ ");
    scanf("%d",&choice[2]);


    if(choice[2]==1)
    {
     printf("\n*How Many Strips Of Paracetamol:=>");
     scanf("%d",&P[0]);
     B[10]=300*P[0];
    }


    if(choice[2]==2)
    {
     printf("\n*How Many Strips Of Aspirin:=>");
     scanf("%d",&P[1]);
     B[11]=300*P[1];
    }


    if(choice[2]==3)
    {
     printf("\n*How Many Strips Of Ibuprofen:=>");
     scanf("%d",&P[2]);
     B[12]=300*P[2];
    }


    if(choice[2]==4)
    {
     printf("\n*How Many Strips OfMorphin :=>");
     scanf("%d",&P[3]);
     B[13]=300*P[3];
    }


    if(choice[2]==5)
    {
     printf("\n*How Many Strips Of Dola:=>");
     scanf("%d",&P[4]);
     B[14]=300*P[4];
    }

    printf("\nDO YOU WANNA BUY MORE PAINKILLERS: \n1.YES \n2.NO\n...[");
    scanf("%d",&j);

    break;

    case 4:

     printf("\n##---------------------------------------------------------------------------##");
     printf("\n1.Cufril-b(siraf) \n2.Ricakuf \n3.Notus \n4.Tussalyt-LS \n5.Cozicof-LS\n(For those which cuf-siruf strips you want to purches enter number)....[ ");
     scanf("%d",&choice[3]);


    if(choice[3]==1)
    {
     printf("\n*How Many Bottels Of Cufril-b(siraf) :=>");
     scanf("%d",&C[0]);
     B[15]=300*C[0];
    }


    if(choice[3]==2)
    {
     printf("\n*How Many Bottels Of Ricakuf:=>");
     scanf("%d",&C[1]);
     B[16]=300*C[1];
    }


    if(choice[3]==3)
    {
     printf("\n*How Many Bottels Of Notus:=>");
     scanf("%d",&C[2]);
     B[17]=300*C[2];
    }


    if(choice[3]==4)
    {
     printf("\n*How Many Bottels Of Tussalyt-LS:=>");
     scanf("%d",&C[3]);
     B[18]=300*C[3];
    }


    if(choice[3]==5)
    {
     printf("\n*How Many Bottels Of Cozicof-LS :=>");
     scanf("%d",&C[4]);
     B[19]=300*C[4];
    }

    printf("\nDO YOU WANNA BUY MORE CUDF-SERIF: \n1.YES \n2.NO\n...[");
    scanf("%d",&j);

    break;

    case 5:

    printf("\n##---------------------------------------------------------------------------##");
    printf("\n1.Atolvaquone \n2.Chloroquine \n3.Doxycycline \n4.Menfloquinm \n5.Primaqunie\n(For those which amtimalarial strips you want to purches enter number)....[ ");
    scanf("%d",&choice[4]);


    if(choice[4]==1)
    {
     printf("\n*How Many Strips Of Atolvaquone:=>");
     scanf("%d",&An[0]);
     B[20]=300*An[0];
    }


    if(choice[4]==2)
    {
     printf("\n*How Many Strips Of Chloroquine:=>");
     scanf("%d",&An[1]);
     B[21]=300*An[1];
    }


    if(choice[4]==3)
    {
     printf("\n*How Many Strips Of Doxycycline:=>");
     scanf("%d",&An[2]);
     B[22]=300*An[2];
    }


    if(choice[4]==4)
    {
     printf("\n*How Many Strips Of Menfloquinm:=>");
     scanf("%d",&An[3]);
     B[23]=300*An[3];
    }


    if(choice[4]==5)
    {
     printf("\n*How Many Strips Of Primaqunie :=>");
     scanf("%d",&An[4]);
     B[24]=300*An[4];
    }

    printf("\nDO YOU WANNA BUY MORE ANTIMALARIAL: \n1.YES \n2.NO\n...[");
    scanf("%d",&j);

    break;

    default:

    break;

    }

   }
    while(j<2);

    printf("\nWant To Check Another Medicine List: \n1.YES \n2.NO\n....[");
    scanf("%d",&i);
    printf("\n##---------------------------------------------------------------------------##");

 }
   clrscr();
   delay(5000);
   printf("\n\t\t\t\t*DETAILS*");
   printf("\n##---------------------------------------------------------------------------##");
   printf("\nGOOD NAME:%s",Name);
   printf("\nEMAIL_ID:%s",EM);
   printf("\nMOBILE.NO:%s",MOBNO);
   printf("\n##---------------------------------------------------------------------------##");

   printf("\n\t\t\t\t*BILLS*");
   printf("\n##---------------------------------------------------------------------------##");


  if(B[0]>0)
  {

   printf("\n Total of Arthace Plus:%d",B[0]);

  };


  if(B[1]>0)
  {

   printf("\n Total of Zicon:%d",B[1]);

  };

  if(B[2]>0)
  {

   printf("\n Total of Cipocin:%d",B[2]);

  };


 if(B[3]>0)
  {

   printf("\n Total of Cipoxin:%d",B[3]);

  };

  if(B[4]>0)
  {

   printf("\n Total of Scabrid:%d",B[4]);

  };

  if(B[5]>0)
  {

   printf("\n Total of Penicillins=:%d",B[5]);

  };


  if(B[6]>0)
  {

   printf("\n Total of Tepracyclines:%d",B[6]);

  };

  if(B[7]>0)
  {

   printf("\n Total of Cephalosporins:=%d",B[7]);

  };


 if(B[8]>0)
  {

   printf("\n Total of Qinolones:=%d",B[8]);

  };

  if(B[9]>0)
  {

   printf("\n Total of Lilsconysion:=%d",B[9]);

  };

  if(B[10]>0)
  {

   printf("\n Total of Paractamol:=%d",B[10]);

  };


  if(B[11]>0)
  {

   printf("\n Total of Aspirin:=%d",B[11]);

  };

  if(B[12]>0)
  {

   printf("\n Total of Lbuprofen:=%d",B[12]);

  };


 if(B[13]>0)
  {

   printf("\n Total of Morphin:=%d",B[13]);

  };

  if(B[14]>0)
  {

   printf("\n Total of Dolo:=%d",B[14]);

  };

  if(B[15]>0)
  {

   printf("\n Total of Cufril-b(siraf):=%d",B[0]);

  };


  if(B[16]>0)
  {

   printf("\n Total of Ricakuf:=%d",B[16]);

  };

  if(B[17]>0)
  {

   printf("\n Total of Notus:=%d",B[17]);

  };


 if(B[18]>0)
  {

   printf("\n Total of Tussalyt:=%d",B[18]);

  };

  if(B[19]>0)
  {

   printf("\n Total of Cozicof-LS:%d",B[19]);

  };

  if(B[20]>0)
  {

   printf("\n Total of Atolvaquone:=%d",B[20]);

  };


  if(B[21]>0)
  {

   printf("\n Total of Chnoroquine:=%d",B[21]);

  };

  if(B[22]>0)
  {

   printf("\n Total of Doxycycline:=%d",B[22]);

  };


 if(B[23]>0)
  {

   printf("\n Total of Menfloquinm:=%d",B[23]);

  };

  if(B[24]>0)
  {

   printf("\n Total of Primoqus:=%d",B[24]);

  };

   printf("\n##---------------------------------------------------------------------------##");

   FINALBILL=B[0]+B[1]+B[2]+B[3]+B[4]+B[5]+B[6]+B[7]+B[8]+B[9]+B[10]+B[11]+B[12]+B[13]+B[14]+B[15]+B[16]+B[17]+B[18]+B[19]+B[20]+B[21]+B[22]+B[23]+B[24]+B[25]+B[26]+B[27]+B[28]+B[29];

   printf("\n\n\t\t\t\t\t\t\tFINAL BILL:=%d",FINALBILL);

   printf("\t\t\t\t\t\t\tDate:-%s",ctime(&tm));
   printf("\n##---------------------------------------------------------------------------##");
   printf("\n\n\t\t\t\t*****THANK YOU*****");
   printf("\n##---------------------------------------------------------------------------##");

   getch();

}
