//Assignment 6 (Project)
//maythu456@gmail.com

#include<iostream>
#include<string>
using namespace std;

int index=0;
class Phone
{
	public: 	
			string contactName[100];
			string phNumber[100];
			
				Phone(){
					
					cout<<"\n \n Welcome Phone Contact Management System!!!"<<endl;
					cout<<"*******************************************\n";
				}
				void mainMenu();
				void addContact();
				void showContact();
				void searchContact();
				void modifyContact();
				void deleteContact();
				
};
int main()
{
	Phone ph;
	ph.mainMenu();
}


void Phone::mainMenu()
{
	int option=0;
    while (true){
        cout<<"Press 1 =>>> Add Contact"<<endl;
		cout<<"Press 2 =>>> Show Contact"<<endl;
		cout<<"Press 3 =>>> Search Contact"<<endl;
		cout<<"Press 4 =>>> Modify Contact"<<endl;
		cout<<"Press 5 =>>> Delete Contact"<<endl;
		cout<<"Press 5 =>>> Quit for Phone Management System"<<endl;
		cout<<"Press 1,2,3,4,5 or 6"<<endl;
        cin>>option;
        
        if(option == 1)
		{
            //add contact
           addContact();
        }
	    else if(option == 2)
		{
           //show contacts
		   showContact();
		   		    
  		}
  		else if(option == 3)
		{
           //Search contacts
		   searchContact();
		   		    
  		}
  		else if(option == 4)
		{
           //Modify contacts
		  modifyContact();
		   		    
  		}
  		else if(option == 5)
		{
           //Delete contacts
		   deleteContact();
		   		    
  		}
  		else if (option ==6)
  		{
		  	exit(0);
		  }
        else
		{
            cout<<"Try Again!!"<<endl;
           // return 0;
        }
    }
	
		
}
void Phone::addContact()
{
	//string addname, addPhnumber;
	
	cout<<"\t\t\tAdded New Contact"<<endl<<"\t\t\t**********************\n"<<endl;
	
	cout<<"Enter name to add:";
	cin>>contactName[index];
	
	
	cout<<"Enter Phone Number to add: ";
	cin>>phNumber[index];
	
	index++;
	
	cout<<"\t Added Successfully!!! \n \n\n"<<endl;
}
void Phone::showContact()
{
	cout<<"\t\t\tAll Contact Name"<<endl<<"\t\t\t**********************\n \n"<<endl;
	
	cout<<"Contact Name \t\t\t\t\t"<<"Phone Number"<<endl;
    for(int i=0; i<=index ; i++){
        cout<<"   "<<contactName[i]<<"\t\t\t\t\t   "<<phNumber[i]<<endl<<endl<<endl;
    }

       
}
void Phone::deleteContact()
{
	
	string delName;
	int i;
	int status;
	int found=0;
	
	cout<<"Enter name that you want to delete: ";
	cin>>delName;
	
	for(i=0;i<index;i++)
	{
		 status=delName.compare(contactName[i]);
		if( status == 0)
		{
			contactName[i]=contactName[i+1];
			phNumber[i]=phNumber[i+1];
			found =1;
			cout<<"\n \tDelete Successfully!!!"<<endl;
			showContact();
			
		}
		
	}
	if(found == 0)
	{
		cout<<"Sorry!!! \nDoes not exist (" << delName<< ") in your Phone Contanct\n\n"<<endl;
		//showContact();
	}
	
	
}
void Phone::modifyContact()
{
	string editName;
	int i;
	//int status;
	int found=0;
	
	cout<<"Enter name that you want to edit: ";
	cin>>editName;
	
	//cout<<"\t\t\tSearching Contact Name Result!!!"<<endl<<"\t\t\t***************************\n"<<endl;
	
	
	for(i=0;i<index;i++)
	{
		 int status=editName.compare(contactName[i]);
		if( status == 0)
		{
		
						
			cout<<"Enter New Name: ";
			cin>>contactName[i];
			
			cout<<"Enter New Ph number: ";
			cin>>phNumber[i];
			
			found=1;
			cout<<"\n \n \t Edit Successfully!!!"<<endl;
			showContact();
		}
		
		
		
	}
	if(found == 0 )
		cout<<"Sorry!!!\nDoes not exist (" << editName<< ") in your Phone Contanct\n\n"<<endl;
			
	
}
void Phone::searchContact()
{
	string searchName;
	int i;
	//int status;
	int found=0;
	
	cout<<"Enter name that you want to Search: ";
	cin>>searchName;
	
	cout<<"\t\t\tSearching Contact Name Result!!!"<<endl<<"\t\t\t***************************\n"<<endl;
	
	
	for(i=0;i<index;i++)
	{
		 int status=searchName.compare(contactName[i]);
		if( status == 0)
		{
			cout<<"Contact Name \t\t\t\t\t"<<"Phone Number"<<endl;
			cout<<"   "<<contactName[i]<<"\t\t\t\t\t   "<<phNumber[i]<<endl<<endl<<endl;
			found=1;
		}
		
		
		
	}
	if(found == 0 )
		cout<<"Sorry!!!\nDoes not exist (" << searchName<< ") in your Phone Contanct\n\n"<<endl;
			
}
