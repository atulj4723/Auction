#include<iostream>
#include<fstream>
using namespace std;
class member{
char ch1=0;
public:
void signin()
{
 do{
   cout<<"\n\nSignin"<<endl;
   cout<<"1.Bidder"<<endl;
  cout<<"2.Seller"<<endl;
  cout<<"3.Admin"<<endl;
  cout<<"4.Exit"<<endl;
  cout<<"Enter your choice:-";
  cin>>ch1;
  switch(ch1){
    case '1':
        cout<<"Bidder"<<endl;
        break;
    case '2':
        cout<<"Seller"<<endl;
        break;
    case '3':
        cout<<"Admin"<<endl;
        break;
    case '4':
        cout<<"Exit"<<endl;
        break;
    default :
      cout<<"Invalid choice "<<endl;
       break;

          }}while (ch1!='4');
}
void login ()
{}
};