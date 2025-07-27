#include<iostream>
using namespace std;
int main(){
     float temperature,thurshold=40;
     

     do{
          cout<<"Enter temperature:";
          cin>>temperature;
          if(thurshold<temperature){
               cout<<"Alert!High temperature"<<endl;;

          }
     } while( temperature>thurshold);
     cout<<"Temperature is normal now."<<endl;
     return 0;
}

