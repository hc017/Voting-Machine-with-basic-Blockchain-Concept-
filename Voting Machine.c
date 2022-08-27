//
//  main.c
//  Voting Machine
//
//  Created by Harshal Chavan on 17/04/22.
//

#include<stdio.h>
#include <stdlib.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "A"
#define CANDIDATE2 "B"
#define CANDIDATE3 "C"
#define CANDIDATE4 "D"
#define CANDIDATE5 "E"
#define CANDIDATE6 "F"
#define CANDIDATE7 "G"
#define CANDIDATE8 "H"
#define CANDIDATE9 "I"
#define CANDIDATE10 "J"

int votescount1=0, votescount2=0, votescount3=0, votescount4=0, votescount5=0, votescount6=0, votescount7=0, votescount8=0, votescount9=0, votescount10=0;
void castvote(){
   int choice;
   printf("\n\n *** Please choose your Candidate ***\n\n");
   printf("\n 1. %s", CANDIDATE1);
   printf("\n 2. %s", CANDIDATE2);
   printf("\n 3. %s", CANDIDATE3);
   printf("\n 4. %s", CANDIDATE4);
   printf("\n 5. %s", CANDIDATE5);
   printf("\n 6. %s", CANDIDATE6);
   printf("\n 7. %s", CANDIDATE7);
   printf("\n 8. %s", CANDIDATE8);
   printf("\n 9. %s", CANDIDATE9);
   printf("\n 10. %s", CANDIDATE10);
   printf("\n 11. %s"," None of These");
    printf("\nInput your choice (1 - 11): ");
   scanf("%d",&choice);
   switch(choice){
      case 1: votescount1++; break;
      case 2: votescount2++; break;
      case 3: votescount3++; break;
      case 4: votescount4++; break;
      case 5: votescount5++; break;
      case 6: votescount6++; break;
      case 7: votescount7++; break;
      case 8: votescount8++; break;
      case 9: votescount9++; break;
      case 10: votescount10++; break;
      default: printf("\n Error: Wrong Choice !! Please retry");
    
      getchar();
   }
   printf("\n thanks for vote !!");
}
void votesCount()
{
   printf("\n\n *** Voting Statics ***");
   printf("\n %s - %d ", CANDIDATE1, votescount1);
   printf("\n %s - %d ", CANDIDATE2, votescount2);
   printf("\n %s - %d ", CANDIDATE3, votescount3);
   printf("\n %s - %d ", CANDIDATE4, votescount4);
   printf("\n %s - %d ", CANDIDATE5, votescount5);
   printf("\n %s - %d ", CANDIDATE6, votescount6);
   printf("\n %s - %d ", CANDIDATE7, votescount7);
   printf("\n %s - %d ", CANDIDATE8, votescount8);
   printf("\n %s - %d ", CANDIDATE9, votescount9);
   printf("\n %s - %d ", CANDIDATE10, votescount10);
}
int main()
{
   int choice;
   do{
      printf("\n\n *** Welcome to Election/Voting 2022 ***");
      printf("\n\n 1. Put the Vote");
      printf("\n 2. Find Vote Count");
      printf("\n 0. Exit");
      printf("\n Please enter your choice : ");
      scanf("%d", &choice);
      switch(choice){
         case 1: castvote();break;
         case 2: votesCount();break;
         default: printf("\n Error: Invalid Choice");
      }
   }
    while(choice!=0);
   getchar();
   return 0;
}
