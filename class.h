#include<iostream>
#include<fstream>
using namespace std;
class member{
int signin_choice;
string bidder_name, bidder_password, seller_name, seller_password, admin_name, admin_password;
long long int bidder_phone_number, seller_phone_number, admin_phone_number;

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
        bidder_signin();
        break;
    case 2:
        cout<<"Seller"<<endl;
        seller_signin() ;
        break;
    case 3:
        cout<<"Admin"<<endl;
        admin_signin() ;
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
{
  do{
   cout<<"\n\nLogin"<<endl;
   cout<<"1.Bidder"<<endl;
  cout<<"2.Seller"<<endl;
  cout<<"3.Admin"<<endl;
  cout<<"4.Exit"<<endl;
  cout<<"Enter your choice:-";
  cin>>signin_choice;
  switch(signin_choice){
    case 1:
        cout<<"Bidder"<<endl;
        bidder_login();
        break;
    case 2:
        cout<<"Seller"<<endl;
        seller_login() ;
        break;
    case 3:
        cout<<"Admin"<<endl;
        admin_login() ;
        break;
    case 4:
        cout<<"Exit"<<endl;
        break;
    default :
      cout<<"Invalid choice "<<endl;
       break;

          }}while (signin_choice!=4);
}
void bidder_signin(){
  cout<<"Enter your name :-";
  cin>>bidder_name;
  cout<<"Enter mobile number :-";
  cin>>bidder_phone_number;
  bidder_phone_number=long_long_int_validate (bidder_phone_number,999999999, 10000000000);
  cout<<"Enter your password :-";
  cin>>bidder_password;
  fstream file;
  file.open ("bidder_signin_request.txt",ios::app);
  file<<bidder_name<<"\t"<<bidder_phone_number<<"\t"<<bidder_password<<endl;
  file.close();
}
void seller_signin(){
  cout<<"Enter your name :-";
  cin>>seller_name;
  cout<<"Enter mobile number :-";
  cin>>seller_phone_number;
  seller_phone_number=long_long_int_validate (seller_phone_number,999999999, 10000000000);
  cout<<"Enter your password :-";
  cin>>seller_password;
  fstream file;
  file.open ("seller_signin_request.txt",ios::app);
  file<<seller_name<<"\t"<<seller_phone_number<<"\t"<<seller_password<<endl;
  file.close();
}
void admin_signin(){
  cout<<"Enter your name :-";
  cin>>admin_name;
  cout<<"Enter mobile number :-";
  cin>>admin_phone_number;
  admin_phone_number=long_long_int_validate (admin_phone_number,999999999, 10000000000);
  cout<<"Enter your password :-";
  cin>>admin_password;
  fstream file;
  file.open ("admin_signin_request.txt",ios::app);
  file<<admin_name<<"\t"<<admin_phone_number<<"\t"<<admin_password<<endl;
  file.close();
  
}
void admin_login() 
{ long long int phone_number;
 string password;
 int choice;
  
  cout<<"\n\nAdmin login "<<endl;
  cout<<"\nEnter phone number :-";
  cin>>phone_number;
phone_number=long_long_int_validate (phone_number, 999999999,10000000000);
  cout<<"\nEnter password :-";
  cin>>password;
  fstream file;
  file.open("admin_signin_approved.txt",ios::in) ;
    file>>admin_name>>admin_phone_number>>admin_password;
    while (!file.eof()){
    if(admin_phone_number==phone_number && admin_password==password)
    {
      cout<<"Login successfull"<<endl;
      cout<<"\n\nAdmin name :-"<<admin_name;
      cout<<"\n1.Approve signin request \n2.Reject signin request \n3.Exit";
      cout<<"Enter your choice :-";     cin>>choice;
      choice=int_validate(choice,1,2);
      switch(choice)
        {
          case 1:
          cout<<"\n\nApprove signin request"<<endl;
          approve_signin_request();
          break;
          
          
        }
      break;
    }
    file>>admin_name>>admin_phone_number>>admin_password;}
 file.close();
  
}
void seller_login() 
{long long int phone_number;
 string password;
  
  cout<<"\n\nSeller login "<<endl;
  cout<<"\nEnter phone number :-";
  cin>>phone_number;
phone_number=long_long_int_validate (phone_number, 999999999,10000000000);
  cout<<"\nEnter password :-";
  cin>>password;
  fstream file;
  file.open("seller_signin_approved.txt",ios::in) ;
    file>>seller_name>>seller_phone_number>>seller_password;
    while (!file.eof()){
    if(seller_phone_number==phone_number && seller_password==password)
    {
      cout<<"Login successfull"<<endl;
      cout<<"\n\nSeller name :-"<<seller_name;
      break;
    }
    file>>seller_name>>seller_phone_number>>seller_password;}
 file.close();}
void bidder_login()
{
  long long int phone_number;
 string password;
  
  cout<<"\n\nBidder login "<<endl;
  cout<<"\nEnter phone number :-";
  cin>>phone_number;
  phone_number=long_long_int_validate (phone_number,999999999,10000000000);
  cout<<"\nEnter password :-";
  cin>>password;
  fstream file;
  file.open("bidder_signin_approved.txt",ios::in) ;
    file>>bidder_name>>bidder_phone_number>>bidder_password;
    while (!file.eof()){
    if(bidder_phone_number==phone_number && bidder_password==password)
    {
      cout<<"Login successfull"<<endl;
      cout<<"\n\nBidder name :-"<<bidder_name;
      break;
    }
    file>>bidder_name>>bidder_phone_number>>bidder_password;}
 file.close();
}
void approve_signin_request () 
{ int choice;
  cout<<"\n1.Approve Bidder Signin Request\n2.Approve Seller Signin Request\n3.Approve Admin Signin Request ";
  cout<<"\nEnter your choice :-";
  cin>>choice;
  choice=int_validate(choice, 1,3) ;
  switch(choice){
    case 1:
        approve_bidder_signin_request ();
       break;
    case 2:
        approve_seller_signin_request () ;
        break;
    case 3:
        approve_admin_signin_request ();
break;
    default :
      cout<<"Invalid choice "<<endl;
break;
    }
  
}
void reject_signin_request (){
  int choice;
  cout<<"\n1.Reject Bidder Signin Request\n2.Reject Seller Signin Request\n3.Reject Admin Signin Request ";
  cout<<"\nEnter your choice :-";
  cin>>choice;
  choice=int_validate(choice, 1,3) ;
  switch(choice){
    case 1:
        reject_bidder_signin_request ();
       break;
    case 2:
        reject_seller_signin_request () ;
        break;
    case 3:
        reject_admin_signin_request ();
break;
    default :
      cout<<"Invalid choice "<<endl;
break;
}}
void approve_bidder_signin_request () {
  long long int phone;
int count;
  fstream file3;
    file3.open("bidder_signin_request.txt",ios::in);
    file3>>bidder_name>>bidder_phone_number>>bidder_password;
      cout<<"Signin Request Pending";
    while(!file3.eof()){
      cout<<"\n"<<count<<". "<<"Bidder name:-"<<bidder_name<<"\t"<<"Phone Number"<<bidder_phone_number;
count++;  file3>>bidder_name>>bidder_phone_number>>bidder_password;
    }
      file3.close();
  cout<<"Enter number to approve request :- ";
cin>>phone;
phone=long_long_int_validate (phone, 999999999,10000000000);
      fstream file;
      file.open("bidder_signin_request.txt", ios::in);
      file>>bidder_name>>bidder_phone_number>>bidder_password;
      while(!file.eof()){
        if(bidder_phone_number==phone) {
          cout<<"Request approved";
          fstream file1;
          file1.open("bidder_signin_approved.txt",ios::app);
file1<<bidder_name<<"\t"<<bidder_phone_number<<"\t"<<bidder_password;
          file1.close();
        }
        else{
          fstream file2;
          file2.open("bidder_signin_request1.txt", ios::app);
          file2<<bidder_name<<"\t"<<bidder_phone_number<<"\t"<<bidder_password;
          file2.close();
        }
        file>>bidder_name>>bidder_phone_number>>bidder_password;
      }
      file.close() ;
  remove("bidder_signin_request.txt") ;      rename("bidder_signin_request1.txt","bidder_signin_request.txt");
}
void approve_seller_signin_request () {}
void approve_admin_signin_request () {}
void reject_bidder_signin_request () {
  long long int phone;
  cout<<"Enter number to approve request :- ";
cin>>phone;
phone=long_long_int_validate (phone, 999999999,10000000000);
      fstream file;
      file.open("bidder_signin_request.txt", ios::in);
      file>>bidder_name>>bidder_phone_number>>bidder_password;
      while(!file.eof()){
        if(bidder_phone_number==phone) {
          cout<<"Request rejected";
          fstream file1;
          file1.open("bidder_signin_rejected.txt",ios::app);
file1<<bidder_name<<"\t"<<bidder_phone_number<<"\t"<<bidder_password;
          file1.close();
        }
        else{
          fstream file2;
          file2.open("bidder_signin_request1.txt", ios::app);
          file2<<bidder_name<<"\t"<<bidder_phone_number<<"\t"<<bidder_password;
          file2.close();
        }
        file>>bidder_name>>bidder_phone_number>>bidder_password;
      }
      file.close() ;
  remove("bidder_signin_request.txt") ;      rename("bidder_signin_request1.txt","bidder_signin_request.txt");
}
void reject_seller_signin_request () {}
void reject_admin_signin_request () {}
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