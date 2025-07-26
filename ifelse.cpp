#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter number of different items:";
     cin>>n;


     for(int i=0;i<=n;i++){
          int number;
          float price,total;
          cout<<"Enter number of items in the cart:";
          cin>>number;
          cout<<"Enter price:";
          cin>>price;
          total+=number*price;
          cout<<"total price:"<<total<<endl;
     }
         //cout<<"total price"<<total<<endl;
}
