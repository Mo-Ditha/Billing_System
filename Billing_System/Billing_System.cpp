#include<iostream.h>// This is source file of iostream_dum.h header
#include<conio.h>//preprocessor directive, used to paste the code Of given file to the current file.

#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>

using namespace std;

class Building
{
	public:
	//VARIABLE DECLARATION
	int choice;
	string BuildingType;
	char res;
	Building()//default constructor
	{
		
	};
	Building(string a)
	{
		BuildingType = a;
	}
	virtual void calculateBuildingBill()//virtual funtion
	{
		
	};
	void showContrutionDetails();//ADD CONTRUIONS SITE DETAILS
	void BuildDetails();//ADD BUILDING COST DETAILS
	void TotalBill();//ADD BILLING DETAILS AND COST
	~Building()//USE DESTRUCTORS
	{
		
	}
};
class Item : public Building//PUBLIC INHRITANCE
{
	public:
	 //FUNCTION DECLARATION	
	void Item_Details();//ADD ITEM DETAILS
	void CalculateItemBill();
 
	void Item_List()//THIS IS THE ITEM LIST
	{
	itmenu:
		
		cout << "1.CEMENT   140bags\n"<<endl;
		
		cout << "2.SAND   21cubes\n"<<endl;
		
		cout << "3.METAL   9cubes\n"<<endl;
             
	}
	
};
class Salary : public Building//PUBLIC INHERITANCE
{
	public:
	int per;
	int Days;
	

	void Worker_Details();//ADD EMPLOYEE DETAILS
	void worker_salary();//ADD EMPLOYEE SALARY
	void calculateworkersalary();
	void Worker_list()
	{
		show:
		
		cout << "1.MASONS  \n2.LAUBOUR  \n3.PAINTER"<<endl;
	}
};

void Salary ::Worker_Details()//DEFINITION
{
	system("cls");
	Wmenu:
	
	cout << "WORKER                                       SALARY\n"<<endl;
	cout << " \n"<<endl;
	cout << "MASON                                         3000\n"<<endl;
	cout << "LAUBOUR                                       1500\n"<<endl;
	cout << "PAINTER                                       3000\n"<<endl;
	
	
	cout << "1.Masons = 14"<<endl;
	cout << "2.LAUBOUR = 8"<<endl;
	cout << "3.PAINTER = 5\n"<<endl;
}
void Salary ::calculateworkersalary()
{
	Wcmenu:
	
	cout << "1.MASONS  \n2.LAUBOUR  \n3.PAINTER"<<endl;
	cin>>per;
	if(per==1)
	{
		cout << "Masons Salary = masons*Maslary\n";
		cout << "Masons Salary = 14*3000\n";
		cout << "Masons Salary= 42000\n";
	}
	else if(per==2)
	{
		cout << "Laubour Salary = laubour*Lslary\n";
		cout << "Laubour Salary = 18*1500\n";
		cout << "Laubour Salary = 27000\n";
	}
	else if(per==3)
	{
		cout << "Painter Salary = painters*Pslary\n";
		cout << "Painter Salary = 14*3000\n";
		cout << "Painter Salary= 42000\n";
	}
	else{
	}
}
void Building::showContrutionDetails()
{
	system("COLOR 03");
	system("cls");
	menu:
	cout << "_____________________________________________________________________________________________________________________\n\n";
	cout << "SANKEN CONSTRUCTION (Pvt) Ltd \n"<<endl;;
	cout << "_____________________________________________________________________________________________________________________\n\n";
	
	cout << "Build A ~HOUSE\n"<<endl;
	cout << "**********************************************************************************************************************\n\n"<<endl;
	cout << "1.Item List AND Item Cost\n"<<endl;
 	cout << "2. Worker List AND Worker Salary\n"<<endl;
 	cout << "3.Bill\n"<<endl;
 	cout << "4.Exit\n"<<endl;
 	cout << "**********************************************************************************************************************\n\n";
	 	cout << "Choice:";
  		cin>>choice;
  	
	 	
}
void Building::TotalBill()
{
	cout << "----------------------------------------------------------------------------------------------------------------------\n";
	cout << "Total Bill:Rs.34056770\n";
	cout << "----------------------------------------------------------------------------------------------------------------------\n";
}
void Building::BuildDetails()
{
	/*	void writeData()
	{
		ofstream outf1("Total amount.txt",ios::app);

		do
		{
			cout <<"1.Employee salary:Rs."<<endl;
			cin >>employeSalary;
			cout <<"2.Item Cost:Rs."<<endl;
			cin >>itemcost;
			
			cout << "Do you want to add another record - ";
			cin >> res;
        }
        while(res == 'y');

       outf1.close();

   }
   void readData()
   {
 		ifstream inf("Total amount.txt.txt");

		inf >> employeSalary;
		inf >> itemcost;

		while(inf)
		{
			cout << "Employee Salary:Rs." <<employeSalary<< " Item Cost:Rs." <<itemcost<< endl;

			inf >> employeSalary;
		    inf >> itemcost;
		}


	inf.close();
	}
};*/
}
void Item ::Item_Details()
{
	system("COLOR 07");
	cout << "\n\n*******************************************************************************************************************\n";
 	cout <<"  1.Reinforcement.\n "<<endl;

		
cout << "           Rates shall include for cutting, bending,\n" 
<< "                fabricating, placing in position, holding, wielding\n" 
<< "                (if Approved) and supporting including temporary fixing\n"
<< "                supports, hangers and binding wire."<<endl;
			      
			cout<<"\n";
			
cout << "     We are including\n"
<< "\n"
<<"           * 12mm - 25\n"
<<"           * 10mm - 30\n"
<<"           * 6mm  - 10"<<endl;

		cout << "\n\n\n";			
cout <<"  2.Concrete Works.\n"<<endl;
	
cout << "     We are including\n"
<< "\n"
<<"          * Cement   - 70bags(50kg)\n"
<<"          * Sand     - 7cube\n"
<<"          * Metal    - 9cube\n"
<<"          * Plywoood - 12mm(10 boards)\n"<<endl;

	cout << "\n\n\n";

cout <<"  3.Block Work.\n"<<endl;
	
cout << " :-Block size is 400*225*100-:\n";
cout << "      * Block-2000\n"
<< "\n"
<<"          * Cement - 50bags\n"
<<"          * sand   - 6cubes\n"<<endl;

	cout << "\n\n\n";

cout <<"  4.Plaster."<<endl;
	
cout<<"      * cement-50bages\n"
<<"          * Sand-6cubes\n"<<endl;

	cout << "\n\n\n";

cout <<"  5.Wood Work."<<endl;
		
cout << "   * Main Door is 2100*1200*30\n"<<endl;
cout << "   * Other doprs are 2100*900*25\n"<<endl;

	cout << "\n\n\n";

cout <<"  6.Windows."<<endl;
		
cout <<"  There are three types Window we selected\n"<<endl;
cout <<"\n";	
cout <<"    * Window is (2300*200)\n"
<<"         * Window is (900*1200)\n"
<<"         * Window is (1200*1400)\n"<<endl;

	cout << "\n\n\n";

cout <<"  7.Roof."<<endl;
		
cout << "   * Roofing skek is (1750*1090)\n"<<endl;

	cout << "\n\n\n";

cout <<"  8.Painting."<<endl;
		
cout << "   * Internal paint 60l(20l bucket)\n"
     <<"    *External Paint 80l(20l bucket)\n"<<endl;
     
     	cout << "\n\n************************************************************************************************************\n\n";
	
}
void Item ::CalculateItemBill()
{
	system("COLOR 06");
	cout << "\n\n----------------------------------------------------------------------------------------------------------------\n\n";
	
	cout << "Item cost is:Rs.1740677.00\n"<<endl;
	
	cout << "\n\n-----------------------------------------------------------------------------------------------------------------\n\n";
}
int main_exit;
void delay(int j)
{   int i,m;
    for(i=0;i<j;i++)
         m=i;
}
int main()
{
	char pass[20],password[20]="abcde";
    int i=0;int choice,ch,co,per,choo;
    char res;
    
 
    cout<<"\n\n\t\tEnter the password to login:";
    cin>>pass;
    cout << "\n______________________________________________________________________________________________________________________\n";
   
      if (strcmp(pass,password)==0)
        {printf("\n\nPassword Match!\nLOADING");
	        for(i=0;i<=3;i++)
	        {
	        	
	            delay(600000000);
	            printf(".");
	        }
	        
	        system("cls");
	        menu:
	        
	        
	        Item obj1;
	        Building obj2;
	        Salary obj3;
 cout << "\n"<<endl;
	
	cout << "                   SANKEN CONSTRUCTION (Pvt) Ltd\n                      "<<endl;
cout << "\n"<<endl;


cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"<<endl;
	
	cout << "Build A HOUSE\n"<<endl;
	
cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"<<endl;
	
	cout << "1.Item List AND Item Cost\n"<<endl;
 	cout << "2. Worker List AND Worker Salary\n"<<endl;
 	cout << "3.Item Bill and SalaryBill\n"<<endl;
 	cout << "4.Total Bill\n"<<endl;
 	cout << "5.Exit\n"<<endl;
 	
cout << "\n************************************************************************************************************************\n"<<endl;
	 	cout << "Choice:";
  		cin>>choice;
  		
  		switch(choice)
  		{
  			//goto meain menu
		  case 1:
		  itmenu:
cout << "\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;

		  cout << "1.Item List \n2.Items Details\n3.Exit\n";
		  
cout << "\n-------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		  
		  cout << "Choice:";
		  cin>>ch;
		  switch(ch)
		  {
  			case 1:
  				   obj1.Item_List();
  				   goto itmenu;
			       break;
		  	case 2:
			       obj1.Item_Details();
			       goto itmenu;
			   break;
		  	case 3:
                    goto menu;
                    break;
                    default:
                    getch();
                     break;	
  		  }
		  break;
		  
		  case 2:
		  Wmenu:
		  
cout << "\n--------------------------------------------------------------------------------------------------------------------------\n"<<endl;		  
		  
		   cout << "1.Worker List\n2.Wworker Salary\n";
		   
cout << "\n--------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		   
		  cout << "Choice:";
		  cin>>co;
		  switch(co)
		  {
  			case 1:
  				   obj3.Worker_list();
  				   goto Wmenu;
			       break;
		  	case 2:
			       obj3.Worker_Details();
			       goto Wmenu;
			   break;
		  	case 3:
                    goto menu;
                    break;
                    default:
                    getch();
                     break;	
  		  }
		  break;
		  case 3:
   		Wcmenu:
   		
cout << "\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
   		
		  cout << "1.Item Bill\n2.SalaryBill\n";
		  
cout << "\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		  
		  cout << "Choice:";
		  cin>>choo;
		  switch(choo)
		  {
  			case 1:
  			cout << "Item Bill\n";
  				   obj1.CalculateItemBill();
  				   goto Wcmenu;
			       break;
		  	case 2:
		  	
cout << "\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		  	
		  	cout << "1.MASONS  \n2.LAUBOUR  \n3.PAINTER\n4.Exit\n";

cout << "\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		  	
		  	cout << "Choice:";
		  	cin>>per;
		  	switch(per)
		  	{
	  			{
  			case 1:
  				   obj3.calculateworkersalary();
  				   goto Wcmenu;
			       break;
		  	case 2:
			       obj3.calculateworkersalary();
			       goto Wcmenu;
			   break;
			   case 3:
			       obj3.calculateworkersalary();
			       goto Wcmenu;
			   break;
		  	case 4:
                    goto menu;
                    break;
                    default:
                    getch();
                     break;
		  }
	  		}
			   break;
			   case 3:
			       obj3.calculateworkersalary();
			       goto Wcmenu;
			   break;
		  	case 4:
                    goto menu;
                    break;
                    default:
                    getch();
                     break;
		  }
		  break;
		  case 4:
		  
cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"<<endl;
		  
		  cout << "Total Bill\n"<<endl;
		  
cout << "\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
		  
		  obj2.TotalBill();
		  break;
		  case 5:
		  break;
	  	}
    
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    exit;
					}
            else
                    {printf("\nInvalid!");
                    delay(600000000);
                    system("cls");
                    goto login_try;}

        }

}
