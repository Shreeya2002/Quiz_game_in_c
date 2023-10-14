#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&name,&s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }

void help()
 {
 system("cls");
 printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
 printf("\n\n\tknowledge questions and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided. Your score will be calculated at the");
 printf("\n\n\tend. Remember that the more quicker you give answer the more");
 printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
 printf("\n\n\tat the end and displayed. If you secure highest score, your score");
 printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }
void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
int main()
     {
     int countq,countr;
     int r,i;
     int pa;int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     system("cls");
     //randomize();
     mainhome:
     system("cls");
     puts("\n\t\t WELCOME TO I.Q. TEST PROGRAM\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to start game       ");
     puts("\n\t\t Enter 'V' to view high score  ");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());
     if (choice=='V')
 {
 displayscore();
 goto mainhome;
 }
     else if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%23+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nWhat is the capital of Australia?");
  printf("\n\nA.Canberra\tB.Brisbane\n\nC.Sydney\tD.Melbourne\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Canberra");break;}

  case 2:
  printf("\n\n\nWho wrote the famous novel - To Kill a Mockingbird?");
  printf("\n\nA.Harper Lee\tB.F. Scott Fitzgerald\n\nC.Mark Twain\tD.George Orwell\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is A.Harper Lee");
  break;

  case 3:
  printf("\n\n\nWhich planet is known as the - Red Planet?");
  printf("\n\nA.Jupiter\tB.Saturn\n\nC.Venus\tD.Mars\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Mars");break;}


  case 4:
  printf("\n\n\nWhich gas makes up the majority of Earth's atmosphere?");
  printf("\n\nA.Nitrogen\tB.Oxygen\n\nC.Carbon Dioxide\tD.Hydrogen\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Nitrogen");break;}


  case 5:
  printf("\n\n\nIn which year did the Titanic sink?");
  printf("\n\nA.1912\tB.1907\n\nC.1923\tD.1931\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.1912");break;}

  case 6:
  printf("\n\n\nWho is the artist behind the painting - Starry Night?");
  printf("\n\nA.Pablo Picasso\tB.Vincent van Gogh\n\nC.Leonardo da Vinci\tD.Michelangelo\n\n");
  countq++;
  if (toupper(getch())=='B' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Vincent van Gogh");break;}


  case 7:
  printf("\n\n\nWhich country is famous for the ancient landmark, the Great Wall?");
  printf("\n\nA.West Indies\tB.India\n\nC.China\tD.England\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.China");break;}


  case 8:
  printf("\n\n\nWhat is the chemical symbol for gold?");
  printf("\n\nA.Go\tB.Gd\n\nC.Ag\tD.Au\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Au");break;}


  case 9:
  printf("\n\n\nWho was the first woman to fly solo across the Atlantic Ocean?");
  printf("\n\nA.Amelia Earhart\tB.Bessie Coleman\n\nC.Harriet Quimby\t\tD.Sally Ride\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Amelia Earhart");break;}


  case 10:
  printf("\n\n\nWhat is the largest mammal in the world?");
  printf("\n\nA.Elephant\tB.Giraffe\n\nC.Blue Whale\tD.Rhinoceros\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Blue Whale");break;}


  case 11:
  printf("\n\n\nWhich of the following countries is known as the Land of the Rising Sun?");
  printf("\n\nA.South Korea\tB.China\n\nC.Japan\tD.Thailand\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Japan");break;}

  case 12:
  printf("\n\n\nWho is often credited with the invention of the World Wide Web (WWW)?");
  printf("\n\nA.Bill Gates\tB.Tim Berners-Lee\n\nC.Steve Jobs\tD.Mark Zuckerberg\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Tim Berners-Lee");break;}

  case 13:
  printf("\n\n\nWhat is the largest organ in the human body?");
  printf("\n\nA.Skin\tB.Heart\n\nC.Liver\tD.Brain\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Skin");break;}

  case 14:
  printf("\n\n\nWhich gas do plants absorb from the atmosphere during photosynthesis?");
  printf("\n\nA.Carbon Dioxide\tB.Oxygen\n\nC.Nitrogen\tD.Hydrogen\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Carbon Dioxide");break;}

  case 15:
  printf("\n\n\nWhat is the chemical symbol for the element iron?");
  printf("\n\nA.Fe\tB.Io\n\nC.In\tD.Ir\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Fe");break;}

  case 16:
  printf("\n\n\nWho wrote the famous play Romeo and Juliet?");
  printf("\n\nA. William Wordsworth\tB.William Shakespeare\n\nC.Samuel Beckett\tD.Oscar Wilde\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.William Shakespeare");break;}


  case 17:
  printf("\n\n\nWhich country is known as the Land of the Midnight Sun due to its location within the Arctic Circle?");
  printf("\n\nA.Canada\tB.Russia\n\nC.Norway\tD.Australia\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Norway");break;}

  case 18:
  printf("\n\n\nWhich famous physicist formulated the theory of general relativity?");
  printf("\n\nA.Isaac Newton\tB.Stephen Hawking\n\nC.Niels Bohr\tD.Albert Einstein\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Albert Einstein");break;}

  case 19:
  printf("\n\n\nWhat is the national flower of Japan?");
  printf("\n\nA.Rose\tB.Lotus\n\nC.Cherry Blossom\tD.Orchid\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Cherry Blossom");break;}

  case 20:
  printf("\n\n\nWhich gas is responsible for the green color of plants?");
  printf("\n\nA.Chlorophyll\tB.Oxygen\n\nC. Carbon Dioxide\tD.Nitrogen\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Chlorophyll");break;}

  case 21:
  printf("\n\n\nWhich country is famous for its ancient pyramids, including the Great Pyramid of Giza?");
  printf("\n\nA.Greece\tB.Mexico\n\nC.Egypt\tD.Peru\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Egypt");break;}

  case 22:
  printf("\n\n\nWhat is the largest planet in our solar system?");
  printf("\n\nA.Earth\tB.Mars\n\nC.Saturn\tD.Jupiter\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Jupiter");break;}

  case 23:
  printf("\n\n\nWho is the author of the famous novel 1984?");
  printf("\n\nA.Aldous Huxley\tB.F. Scott Fitzgerald\n\nC.J.D. Salinger\tD.George Orwell\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.George Orwell");break;}



  }
 i++;
 if (i<=5) goto start;
 finaltime=time(NULL);
 score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(700);
 goto mainhome;
 }
 return 0;
}