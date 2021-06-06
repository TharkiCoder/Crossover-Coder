#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
void _1_1();//main menu
void _1_1_1();//live score
void _1_1_2();//Schedule
void _1_1_3();//Series
void _1_1_4();//Teams
void _1_1_5();//Ranking
void _1_1_1_1();//View Score
void _1_1_1_2();//Update Score
void _1_1_2_1();//Add new Schedule
void _1_1_3_1();//Add new Series
void _1_1_4_1();//International
void _1_1_4_2();//League
void _1_1_5_1();//Test Ranking
void _1_1_5_2();//ODi Ranking
void _1_1_5_3();//T20  Ranking
void _1_1_1_1_1();//New Scorecard
void _1_1_1_1_2();//Add a fixture
void _1_1_5_1_1();//Update Ranking test
void _1_1_5_1_2();//ODI
void _1_1_5_2_1();//Update Ranking
void _1_1_5_3_1();//Update Ranking t20


void main(){
  system("cls");
  printf("Welcome To \n");
  printf("Cricket Scorecard \n");
  printf("Management System\n\n");
  printf("Copy Right To - \n");
  printf("Crossover Coder\n\n");
  printf("Press any key to continue....");
  getche();
  _1_1();//Main Menu
}

//main menu
void _1_1(){
  int choice;
  system("cls");
  printf("MAIN MENU\n");
  for(;;){
  printf("1 Live score\n");
  printf("2 Schedule\n");
  printf("3 Series\n");
  printf("4 Teams\n");
  printf("5 Ranking\n");
  printf("6 Exit\n");
  printf("\nEnter your choice : ");
  scanf("%d",&choice);
  switch (choice) {//Switch case start here
    case 1:
          _1_1_1();
          break;
    case 2:
          _1_1_2();
          break;
    case 3:
          _1_1_3();
          break;
    case 4:
          _1_1_4();
          break;
    case 5:
          _1_1_5();
          break;
    case 6:
          exit(0);
          break;
    default:
          printf("Invalid Choice");
          break;
  }//switch case end here
  }
}


//live score
void _1_1_1(){
  int choice;
  system("cls");
  printf("LIVE SCORE\n");
  printf("1 View Score\n");
  printf("2 Update Score\n");
  printf("3 Return to main menu\n");
  printf("Enter your choice : ");
  scanf("%d",&choice);
  switch (choice) {
    case 1:
        _1_1_1_1();
        break;
    case 2:
        _1_1_1_2();
        break;
    case 3:
        main();
        break;
    default:
        printf("Invalid Choice\n");
        printf("Press Any Key to Continue....\n");
        getche();
        _1_1_1();
  }
}


//Schedule
void _1_1_2(){
  system("cls");
  printf("SCHEDULE\n");
}


//Series
void _1_1_3(){
  system("cls");
  printf("SERIES\n");
}


//Teams
void _1_1_4(){
  system("cls");
  printf("TEAMS\n");
}


//Ranking
void _1_1_5(){
  system("cls");
  printf("RANKING\n");
}


//View Score
void _1_1_1_1(){
  system("cls");
  printf("VIEW SCORE\n");
}


//Update Score
void _1_1_1_2(){
  system("cls");
  printf("UPDATE SCORE\n");
}


//Add new Schedule
void _1_1_2_1(){
  system("cls");
  printf("ADD NEW SCHEDULE\n");
}


//Add new Series
void _1_1_3_1(){
  system("cls");
  printf("ADD NEW SERIES\n");
}


//International
void _1_1_4_1(){
  system("cls");
  printf("INTERNATIONAL\n");
}


//League
void _1_1_4_2(){
  system("cls");
  printf("LEAGUE\n");
}


//Test Ranking
void _1_1_5_1(){
  system("cls");
  printf("TEST RANKING\n");
}


//ODi RAnking
void _1_1_5_2(){
  system("cls");
  printf("ODI RANKING\n");
}


//T20 RANKING
void _1_1_5_3(){
  system("cls");
  printf("T20 RANKING\n");
}


//New Scorecard
void _1_1_1_1_1(){
  system("cls");
  printf("NEW SCORECARD\n");
}


//Add a fixture
void _1_1_1_1_2(){
  system("cls");
  printf("ADD A FIXTURE\n");
}


//Update Ranking test
void _1_1_5_1_1(){
  system("cls");
  printf("UPDATE RANKING TEST\n");
}


//ODI
void _1_1_5_1_2(){
  system("cls");
  printf("ODI\n");
}


//Update Ranking
void _1_1_5_2_1(){
  system("cls");
  printf("UPDATE RANKING\n");
}


//Update Ranking t20
void _1_1_5_3_1(){
  system("cls");
  printf("UPDATE RANKING T20\n");
}
