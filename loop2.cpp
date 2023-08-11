#include<iostream>
using namespace std;
int main(){
      for(int i=0; i<=10; i++){
  
        for(int b=0 ; b<=i+1 ; b++){ 
            cout<<" ";
            } 
        
        for (int a =10 ; a >=i; a--){
            cout<<"*";
           } 
        cout<<endl;    
        }

    for(int i=0; i<=10; i++){

        for (int a =10-i ; a >=0; a--){
            cout<<" ";
        }
        for (int b =0 ; b <=i; b++){
            cout<<"*";
        }
    cout<<endl;
    }

    

}