#include<iostream>
#include<fstream>
using namespace std;
class member{
int signin_choice;
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
  cin>>signin_choice;
  switch(signin_choice){
    case 1:
        cout<<"Bidder"<<endl;
        break;
    case 2:
        cout<<"Seller"<<endl;
        break;
    case 3:
        cout<<"Admin"<<endl;
        break;
    case 4:
        cout<<"Exit"<<endl;
        break;
    default :
      cout<<"Invalid choice "<<endl;
       break;

          }}while (signin_choice!=4);
}
void login ()
{}
int int_validate(int input,int lower,int upper)
		{
			int flag=0;
			do{
				if( (input>=lower) && (input<=upper) )
				{
					flag=1;
					return input;
				}
				else{
					cout<<"\n\n Wrong Input !!! \n\nEnter Correct Value : - ";
					cin.clear();
					fflush(stdin);
					cin>>input;
          flag=0;
				}
			}while(flag!=1);
  return input;
		}
		long long int long_long_int_validate(long long int input,long long int lower, long long int upper)
		{
			int flag=0;
			do{
				if( (input>=lower) && (input<=upper) )
				{
					flag=1;
					return input;
				}
				else{
					cout<<"\n\n Wrong Input !!! \n\nEnter Correct Value : - ";
					cin.clear();
					fflush(stdin);
					cin>>input;
          flag=0;
				}
			}while(flag!=1);
    return input;
    }
};