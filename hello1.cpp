#include <iostream>
using namespace std;


int main(){
for(int i=0 ; i<=10 ; i++){
	for(int j=0 ; j<i+1 ; j++){
		cout << "*";
		
	}
	cout << endl; 
}
for(int x=10 ; x>=0 ; x--){
	for(int z=0 ; z<x+1 ; z++){
		cout << "*";
	}
	cout << endl;
}
for(int c=10 ; c>=0 ; c--){

  for(int a=0 ; a<c ; a++){

          cout << " " ;
      }
  for(int b=11 ; b>c; b--){

          cout << "+";
         }
cout << endl;
}
return 0;
}
