#include<iostream>

using namespace std;


int main(){

  int n;
  cin>>n; //5




  for (int i = 0; i < n; i++)
  {
      // i = 2, n - 2 = 3 , 

     for (int j = 0; j < n-i; j++)
     {

       cout<<"*";
     
     }

     cout<<endl;

  }
  

}
/*
6
******
*****
****
***
**
*



*/