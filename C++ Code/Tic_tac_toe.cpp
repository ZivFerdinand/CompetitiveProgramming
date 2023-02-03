#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>
#include <sstream>
#define ll long long 
#define ld long double 
using namespace std;

char game[5][5];
void Declare(){
	cout << '\n';
	for(int i=0;i<3;i++)
   		for(int j=0;j<3;j++)
      		game[i][j]=' ';
}
void DataOutput(){
   int a=0,b=0;
   for(int i=0;i<6;i++){
      for(int j=0;j<11;j++){
         if(!(i%2))
            if((j-1)%4==0)
               cout << game[a][b++];
            else if(j==3 || j==7)
               cout << '|';
            else
               cout << ' ';
         else
            cout << '=';
      }
      if(i%2)
      	 a++;
	  b=0;
      cout << '\n';
   }
}
int main(){
   int cnt=1,choose,x,play=0,count=0;
   bool win=false;
   bool error=false;
   Declare();

   START:
   system("cls");
   if(error){
      cout << "ERROR!\n";
      error=false;
   }
   cout << "Choose the number to move!\n";
   cnt=1;
   for(int i=0;i<6;i++){
      for(int j=0;j<11;j++){
         if(!(i%2))
            if((j-1)%4==0)
               cout << cnt++;
            else if(j==3 || j==7)
               cout << '|';
            else
               cout << ' ';
         else
            cout << '=';
      }
      cout << '\n';
   }
   cout << "\nPlayer 1 : X || Player 2 : O\n\n";
   
   while(!win){
   	  DataOutput();
      cout << "Player " << x << "'s Turn (Choose 1-9) : ";
      cin >> choose;
	   int a,b;
      if(choose==1 || choose==2 || choose==3) a=0;
      if(choose==4 || choose==5 || choose==6) a=1;
      if(choose==7 || choose==8 || choose==9) a=2;
      if(choose==1 || choose==4 || choose==7) b=0;
      if(choose==2 || choose==5 || choose==8) b=1;
      if(choose==3 || choose==6 || choose==9) b=2;
      if(game[a][b]!=' '){
         error=true;
         goto START;
      }
      else
         (x==1) ? game[a][b]='X':game[a][b]='O';
      play++;
      
      for(int i=0;i<3;i++){
         char rand=game[i][0];
         if(rand==' ')  continue;
         count=0;
         for(int j=1;j<3;j++){
            if(game[i][j]==rand)
               count++;
         }
         if(count==2){
            win=true;
            system("cls");
            DataOutput();
            cout << "Player ";
            (rand=='X') ? cout << 1:cout << 2;
            cout << " Wins!\n";
            return 0;
         }
      }
      for(int i=0;i<3;i++){
         char rand=game[0][i];
         if(rand==' ')  continue;
         count=0;
         for(int j=1;j<3;j++){
            if(game[j][i]==rand)
               count++;
         }
         if(count==2){
            win=true;
            system("cls");
            DataOutput();
            cout << "Player ";
            (rand=='X') ? cout << 1:cout << 2;
            cout << " Wins!\n";
            return 0;
         }
      }
      char rand=game[1][1];
      if(rand!=' '){
         if(game[2][0]==rand && game[0][2]==rand){
            win=true;
            system("cls");
            DataOutput();
            cout << "Player ";
            (rand=='X') ? cout << 1:cout << 2;
            cout << " Wins!\n";
            return 0;
         }
         else if(game[0][0]==rand && game[2][2]==rand){
            win=true;
            system("cls");
            DataOutput();
            cout << "Player ";
            (rand=='X') ? cout << 1: cout << 2;
            cout << " Wins!\n";
            return 0;
         }
      }
      if(play==9){
         system("cls");
         DataOutput();
         cout << "DRAW!\n";
         return 0;
      }
      if(x==1) x=2;
      else     x=1;
      system("cls");
      goto START;
   }
}
/*



*/
