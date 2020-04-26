#include<iostream>
#include<cstring>//use system("CLS");
#include<fstream>
using namespace std;



class welcome
{   public:
	welcome()
	{
	cout<<"				-----------WELCOME TO THE TRIP PLANNER---------			"<<endl;
	cout<<"___________________________________________________________________________________________________________"<<endl;
	cout<<"|THE FOLLOWING ARE THE STATES WHERE OUR SERVICE IS AVAILBALE:             "<<endl;
	cout<<"								1.TELANGANA									 "<<endl;
	cout<<"								2.ANDHRA PRADESH							 "<<endl;
	cout<<"								3.TAMILNADU									 "<<endl;
	cout<<"______________________________________________________________________________________________________________"<<endl;
	}
};


class way;
int trcost,ttcost,tdcost,tnum;
	char tsource[20],tdestination[20];
	int c,g,dd,dm,dy,rd,rm,ry,h,k,coach;
	int tdep,tdes,depr,desr,pass;
	
	
class train
{
	public:
	int d,m,y;
	void show()
{
	cout<<"DEPARTURE DATE IS:"<<dd<<dm<<dy<<endl;
	cout<<"RETURN DATE IS:"<<rd<<rm<<ry<<endl;
}
	void train_travel()
	{
		d=4,m=5,y=2019;
		/*cout<<"BEFORE LIGGING IN ENTER TODAY'S DATE MONTH YEAR:";
		cin>>d>>m>>y;
		system("CLS");*/
		cout<<"Enter the SOURCE:";
		cin.ignore();
		cin.getline(tsource,20);
		cout<<"Enter the DESTINATION:";
		cin.getline(tdestination,20);
		cout<<"Enter the number before the state from where you want to go:";
		cin>>tdep;	
		cout<<"Enter the number before the state  where you want to go:";
		cin>>tdes;
		cout<<"Enter the no. of passengers:";
		cin>>pass;
		switch(tdep)
		{
			case 1:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tsource<<"  STATE"<<endl;
				cout<<"1)SECUNDERABAD JUNCTION"<<endl;
				cout<<"2)RAMAGUNDAM JUNCTION"<<endl;
				break;
			case 2:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tsource<<"  STATE"<<endl;
				cout<<"1)VJAYAWADA"<<endl;
				cout<<"2)TIRUPATI"<<endl;
				break;
			case 3:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tsource<<"  STATE"<<endl;
				cout<<"1)CHENNAI"<<endl;
				break;
			case 4:
			    cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tsource<<"  STATE"<<endl;
				cout<<"1)BANGALORE"<<endl;
				break;
			case 5:
			    cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tsource<<"  STATE"<<endl; 
				cout<<"1)THIRUVANANTHAPURAM"<<endl;	  	
				break;
		}
		switch(tdes)
		{
			case 1:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tdestination<<"  STATE"<<endl;
				cout<<"1)SECUNDERABAD JUNCTION"<<endl;
				cout<<"2)RAMAGUNDAM JUNCTION"<<endl;
				break;
			case 2:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tdestination<<"  STATE"<<endl;
				cout<<"1)VJAYAWADA"<<endl;
				cout<<"2)TIRUPATI"<<endl;
				break;
			case 3:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tdestination<<"  STATE"<<endl;
				cout<<"1)CHENNAI CENTRAL"<<endl;
				cout<<"2)COIMBATORE"<<endl;
				break;
			case 4:
			    cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tdestination<<"  STATE"<<endl;
				cout<<"1)BANGALORE"<<endl;
				break;
			case 5:
			    cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<tdestination<<"  STATE"<<endl; 
				cout<<"1)THIRUVANANTHAPURAM"<<endl;	  	
				break;
		}
	}	
	void departure()
	{
        cout<<"Enter the Departure date(d m y):";
		cin>>dd>>dm>>dy;
	}	
	void railway()
	{
		if(tdep==1&&tdes==2)
	  {
		cout<<"Select your choice and mention the number of departure railway station:";
		cin>>depr;
		cout<<"Select your choice and mention the number of destination railway station:";
		cin>>desr;
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		departure();
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;
		//cout<<"WE PROVIDE THE FOLLLOWING TRAIN SERVICES:";
		
		if(depr==1&&desr==1)
		{
			cout<<"|	TRAIN NAME        	 |"<<ends<<"|		DEPARTURE TIME	 |"<<ends<<"|	  FARE		|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|1)VSKP EXPRESS(18520)    |"<<ends<<"|21:05<--->03:20(6hr 15min)|"<<ends<<"|	  865/-		|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|2)NARSAPUR EXPRESS(17256)|"<<ends<<"|12:00<--->07:05(7hr 05min)|"<<ends<<"|   800/-		|"<<endl;			
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=865;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=800;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|	TRAIN NAME			 |"<<ends<<"|		DEPARTURE TIME	   	  |"<<ends<<"|	   FARE		|"<<endl;
			cout<<"___________________________________________________________________________________________________"<<endl;
			cout<<"|1)GT EXPRESS(12616)		 |"<<ends<<"|<--18:05-(5hr 15min)-23:15-->|"<<ends<<"|     1380		|"<<endl;
			cout<<"_____________________________________________________________________________________________________"<<endl;
			cout<<"|2)DAKSHIN EXPRESS(12722) |"<<ends<<"|<--23:43-(7hr 2min)-06:45--> |"<<ends<<"|     920		|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=1380;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=920;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		
		else if(depr==1&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|		DEPARTURE TIME		  	 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"______________________________________________________________________________________________________"<<endl;
		    cout<<"|1)PADMAVATI EXPRESS(12764) |"<<ends<<"|<--18:30-(12hr 30min)-07:00-->|"<<ends<<"|	1545/-	|"<<endl;
			cout<<"______________________________________________________________________________________________________"<<endl;
			cout<<"|2)VENKATADRI EXPRESS(12797)|"<<ends<<"|		<--20:05-(11h)-07:05-->	 |"<<ends<<"|	2360/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=1545;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2360;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|		DEPARTURE TIME		  	 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"______________________________________________________________________________________________________"<<endl;
			cout<<"|1)TENSUP EXPRESS(02194)	   |"<<ends<<"|<--00:46-(13hr 19min)-14:05-->|"<<ends<<"|	1325/-	|"<<endl;
			cout<<"_______________________________________________________________________________________________________"<<endl;
			cout<<"|2)KERALA EXPRESS(12626)	   |"<<ends<<"|<--09:32-(11hr 26min)-20:58-->|"<<ends<<"|	1885/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=1325;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=1885;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	  }
	  
	 // ----------------------------------------------------------------------------------------------------------------------------------------------------------------
		else if(tdep==1&&tdes==3)
	  {	cout<<"Select your choice and mention the number of departure railway station:";
		cin>>depr;
		cout<<"Select your choice and mention the number of destination railway station:";
		cin>>desr;
        cout<<"Enter the Departure date(d m y):";
		cin>>dd>>dm>>dy;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;
	  	if(depr==1&&desr==1)
	  	{
	  		 cout<<"|		TRAIN NAME		   |"<<ends<<"|				DEPARTURE TIME			 |"<<ends<<"|	FARE	|"<<endl;
	  		 cout<<"__________________________________________________________________________________________________"<<endl;
			 cout<<"|1)CHARMINAR EXPRESS(12760)|"<<ends<<"|<--18:55-(13hr 20min)-08:15,nextday-->|"<<ends<<"|	2730/-	|"<<endl;
			 cout<<"__________________________________________________________________________________________________"<<endl;
			 cout<<"|2)CHENNAI EXPRESS(12604)  |"<<ends<<"|<--17:15-(12hr 40min)-05:55,nextday-->|"<<ends<<"|	2535/-	|"<<endl;
			 cout<<"__________________________________________________________________________________________________"<<endl;
			 cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=2730;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2535;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			 
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|	  TRAIN NAME	   |"<<ends<<"|			DEPARTURE TIME			 	|"<<ends<<"|	FARE	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|1)SABARI EXPRESS(17230)|"<<ends<<"|<--11:40-(20hr 40min)-08:20,nextday-->|"<<ends<<"|	2970/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|2)KCGMAQ EXPRESS(17606)|"<<ends<<"|<--06:00-(20hr 07min)-02:07,nextday-->|"<<ends<<"|	3100/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=2970;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=3100;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|	TRAIN NAME	   		   |"<<ends<<"|				DEPARTURE TIME		   	 |"<<ends<<"|		FARE	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|1)GT EXPRESS(12616)		   |"<<ends<<"|<--18:00-(12hr 20min)-06:20,nextday-->|"<<ends<<"|		2615/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|2)RAPTISAGAR EXPRESS(12511)|"<<ends<<"|<--10:30-(12hr 50min)-23:20,nextday-->|"<<ends<<"|		2500/-	|"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=2615;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2500;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|				DEPARTURE TIME			 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|1)RAPTISAGAR EXPRESS(12511)|"<<ends<<"|<--10:30-(21hr 5min)-07:35,nextday--> |"<<ends<<"|	2830/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|2)KERALA EXPRESS(12626)	   |"<<ends<<"|<--09:32-(19hr 28min)-05:00,nextday-->|"<<ends<<"|	2910/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=2830;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2910;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	  }
	
	
	//---------------------------------------------------------------------------------------------
	else if(tdep==2&&tdes==1)
	{
	    cout<<"Select your choice and mention the number of departure railway station:";
		cin>>depr;
		cout<<"Select your choice and mention the number of destination railway station:";
		cin>>desr;
        cout<<"Enter the Departure date(d m y):";
		cin>>dd>>dm>>dy;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;	
		if(depr==1&&desr==1)
		{
			cout<<"|		TRAIN NAME	  		 |"<<ends<<"|			DEPARTURE TIME			   |"<<ends<<"|		FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)CIRCAR EXPRESS(17644)		 |"<<ends<<"|<--20:45-(10hr 43min)-07:28,nextday-->|"<<ends<<"|		993/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)JANSHATABDI EXPRESS(12078) |"<<ends<<"|<--15:20-(7hr)-22:35-->			   |"<<ends<<"|		1050/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=993;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=1050;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}	
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|		TRAIN NAME	        |"<<ends<<"|			DEPARTURE TIME			  |"<<ends<<"|		FARE		|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)KERALA EXPRESS(12626)     |"<<ends<<"|<--14:55-(14hr 5min)-05:00,nextday--> |"<<ends<<"|		2010/-		|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)MAQ	VIVEK EXPRESS(22851)|"<<ends<<"|<--10:50-(17hr 35min)-03:35,nextday-->|"<<ends<<"|		2120/-		|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=2010;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2120;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|		TRAIN NAME	   |"<<ends<<"|			DEPARTURE TIME		|"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)MADRAS EXPRESS(16054)|"<<ends<<"|<--10:00-(3hr 40min)-13:40-->|"<<ends<<"|	1250/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)KCGCGL EXPRESS(17652)|"<<ends<<"|<--03:40-(4hr 33min)-08:13-->|"<<ends<<"|	1100/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=1250;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=1100;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|		TRAIN NAME			|"<<ends<<"|		DEPARTURE TIME		 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)KANYAKUMARI EXPRESS(16381)|"<<ends<<"|<--15:15-(8hr 15min)-23:30-->|"<<ends<<"|	1460/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)GURUDEV EXPRESS(12660)	|"<<ends<<"|<--03:25-(7hr 30min)-11:15-->|"<<ends<<"|	1700/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"SELECT THE S.NO. OF TRAIN:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=1460;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=1700;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dd-d>30||dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dd-d<30||dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dd<0||d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	}
	
	//---------------------------------------------------------------------------------------------------------------------------------------
	else if(tdep==3&&tdes==1)
	{
	    cout<<"Select your choice and mention the number of departure railway station:";
		cin>>depr;
		cout<<"Select your choice and mention the number of destination railway station:";
		cin>>desr;
        cout<<"Enter the Departure date(d m y):";
		cin>>dd>>dm>>dy;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;
		if(depr==1&&desr==1)
		{
			cout<<"|		TRAIN NAME		  |"<<ends<<"|			DEPARTURE DATE				|"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)CHARMINAR EXPRESS(12759)|"<<ends<<"|<--18:10-(13hr 5min)-07:15,nextday-->)|"<<ends<<"|	2730/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)HYDERABAD EXPRESS(12603)|"<<ends<<"|<--16:45-(12h 25min)-05:15,nextday--> |"<<ends<<"|	2565/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				tdcost=2730;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2565;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|				DEPARTURE DATE			|"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)RAPTISAGAR EXPRESS(12522)|"<<ends<<"|<--23:20-(11hr 4min)-10:34,nextday-->|"<<ends<<"|	2100/*	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)GRANDTRUNK EXPRESS(12615)|"<<ends<<"|<--19:15-(11hr 4min)-06:19,nextday-->|"<<ends<<"|	2615/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=2100;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2615;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE DATE|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)SABARI EXPRESS(17229)|"<<ends<<"|<--16:45-(19hr 30min)-12:15-->|"<<ends<<"|	2200/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)ERSHYB EXPRESS(07118)|"<<ends<<"|<--01:55-(20hr 25min)-22:20-->|"<<ends<<"|	2395/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=2200;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2395;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|				DEPARTURE DATE			 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)KERALA EXPRESS(12625)	   |"<<ends<<"|<--20:00-(18hr 40min)-14:40,nextday-->|"<<ends<<"|	2010/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)RAPTISAGAR EXPRESS(12522)|"<<ends<<"|<--15:30-(19hr 4min)-10:34,nextday--> |"<<ends<<"|	2250/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=2010;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2250;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	}
	//-----------------------------------------------------------------------------------------------------------------------------------------------
	else if(tdep==2&&tdes==3)
	{
		cout<<"Select your choice and mention the number of departure railway station:";
		cin>>depr;
		cout<<"Select your choice and mention the number of destination railway station:";
		cin>>desr;
        cout<<"Enter the Departure date(d m y):";
		cin>>dd>>dm>>dy;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		if(depr==1&&desr==1)
		{
			cout<<"|		TRAIN NAME			|"<<ends<<"|		DEPARTURE TIME		   |"<<ends<<"|		FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)GT EXPRESS(12616)			|"<<ends<<"|<--23:20-(7hr)-06:20,nextday-->|"<<ends<<"|		1765/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)JANAHATABDI EXPRESS(12078)|"<<ends<<"|<--15:20-(7hr 15min)-22:35-->  |"<<ends<<"|		1685/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=1765;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=1685;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|		TRAIN NAME		|"<<ends<<"|			DEPARTURE TIME			 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)KERALA EXPRESS		|"<<ends<<"|<--14:55-(14hr 5min)-05:00,nextday-->|"<<ends<<"|	1520/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)MAQVIVEK EXPRESS		|"<<ends<<"|<--10:50-(15hr )					 |"<<ends<<"|	2010/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=1520;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=2010;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}	
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=865;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=800;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=865;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=800;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	}
	  
	//---------------------------------------------------------------------------------------------------------------------------
	else if(tdep==3&&tdes==2)
	{
		cout<<"Select your choice and mention the number of departure railway station:";
		cin>>depr;
		cout<<"Select your choice and mention the number of destination railway station:";
		cin>>desr;
        cout<<"Enter the Departure date(d m y):";
		cin>>dd>>dm>>dy;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		if(depr==1&&desr==1)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=865;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=800;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=865;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=800;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
				
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=865;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=800;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			if(tnum==1)
			{
				tdcost=865;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				tdcost=800;
				cout<<"The actual cost of the ticket is:"<<tdcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(tdcost)-(tdcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<tdcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<tdcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}		
	}
	
}




	void return_train()
	{
		if(tdep==1&&tdes==2)
	  {
		cout<<"Enter the Return date(d m y):";
		cin>>rd>>rm>>ry;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;
		if(depr==1&&desr==1)
		{
			cout<<"|	TRAIN NAME        	 |"<<ends<<"|		DEPARTURE TIME	 |"<<ends<<"|	  FARE		|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|1)VSKP EXPRESS(18520)    |"<<ends<<"|04:20<--->10:35(6hr 15min)|"<<ends<<"|	  865/-		|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|2)NARSAPUR EXPRESS(17256)|"<<ends<<"|08:05<--->15:00(7hr 05min)|"<<ends<<"|   800/-		|"<<endl;			
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=865;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=800;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|	TRAIN NAME			 |"<<ends<<"|		DEPARTURE TIME	   	  |"<<ends<<"|	   FARE		|"<<endl;
			cout<<"___________________________________________________________________________________________________"<<endl;
			cout<<"|1)GT EXPRESS(12616)		 |"<<ends<<"|<--24:15-(5hr 15min)-05:00-->|"<<ends<<"|     1380		|"<<endl;
			cout<<"_____________________________________________________________________________________________________"<<endl;
			cout<<"|2)DAKSHIN EXPRESS(12722) |"<<ends<<"|<--07:45-(7hr 2min)-14:47--> |"<<ends<<"|     920		|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=1380;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=920;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|		DEPARTURE TIME		  	 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"______________________________________________________________________________________________________"<<endl;
		    cout<<"|1)PADMAVATI EXPRESS(12764) |"<<ends<<"|<--08:00-(12hr 30min)-20:30-->|"<<ends<<"|	1545/-	|"<<endl;
			cout<<"______________________________________________________________________________________________________"<<endl;
			cout<<"|2)VENKATADRI EXPRESS(12797)|"<<ends<<"|		<--08:05-(11h)-19:05-->	 |"<<ends<<"|	2360/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
				cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=1545;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2360;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|		DEPARTURE TIME		  	 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"______________________________________________________________________________________________________"<<endl;
			cout<<"|1)TENSUP EXPRESS(02194)	   |"<<ends<<"|<--15:05-(13hr 19min)-04:25-->|"<<ends<<"|	1325/-	|"<<endl;
			cout<<"_______________________________________________________________________________________________________"<<endl;
			cout<<"|2)KERALA EXPRESS(12626)	   |"<<ends<<"|<--21:58-(11hr 2min)-10:00-->|"<<ends<<"|	1885/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2730;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2535;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}			
			
		}
	  }
	  
	 // ----------------------------------------------------------------------------------------------------------------------------------------------------------------
	  else if(tdep==1&&tdes==3)
	  {	
        cout<<"Enter the Return date(d m y):";
		cin>>rd>>rm>>ry;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;
	  	if(depr==1&&desr==1)
	  	 {
	  		 cout<<"|		TRAIN NAME		   |"<<ends<<"|				DEPARTURE TIME			 |"<<ends<<"|	FARE	|"<<endl;
	  		 cout<<"__________________________________________________________________________________________________"<<endl;
			 cout<<"|1)CHARMINAR EXPRESS(12760)|"<<ends<<"|<--18:55-(13hr 20min)-08:15,nextday-->|"<<ends<<"|	2730/-	|"<<endl;
			 cout<<"__________________________________________________________________________________________________"<<endl;
			 cout<<"|2)CHENNAI EXPRESS(12604)  |"<<ends<<"|<--17:15-(12hr 40min)-05:55,nextday-->|"<<ends<<"|	2535/-	|"<<endl;
			 cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2730;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2535;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			 
	     }
		else if(depr==1&&desr==2)
		{
			cout<<"|	  TRAIN NAME	   |"<<ends<<"|			DEPARTURE TIME			 	|"<<ends<<"|	FARE	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|1)SABARI EXPRESS(17230)|"<<ends<<"|<--09:20-(20hr 40min)-05:00,nextday-->|"<<ends<<"|	2970/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|2)KCGMAQ EXPRESS(17606)|"<<ends<<"|<--07:00-(20hr 07min)-03:07,nextday-->|"<<ends<<"|	3100/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2970;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=3100;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|	TRAIN NAME	   		   |"<<ends<<"|				DEPARTURE TIME		   	 |"<<ends<<"|		FARE	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|1)GT EXPRESS(12616)		   |"<<ends<<"|<--07:00-(12hr 20min)-19:20,nextday-->|"<<ends<<"|		2615/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|2)RAPTISAGAR EXPRESS(12511)|"<<ends<<"|<--00:10-(12hr 50min)-13:00,nextday-->|"<<ends<<"|		2500/-	|"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2615;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2500;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|				DEPARTURE TIME			 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|1)RAPTISAGAR EXPRESS(12511)|"<<ends<<"|<--08:35-(21hr 5min)-05:40,nextday--> |"<<ends<<"|	2830/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"|2)KERALA EXPRESS(12626)	   |"<<ends<<"|<--06:00-(19hr 28min)-02:28,nextday-->|"<<ends<<"|	2910/-	|"<<endl;
			cout<<"__________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2830;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2910;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	}
	
	
	//---------------------------------------------------------------------------------------------
	else if(tdep==2&&tdes==1)
	{
        cout<<"Enter the Return date(d m y):";
		cin>>rd>>rm>>ry;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;	
		if(depr==1&&desr==1)
		{
			cout<<"|		TRAIN NAME	  		 |"<<ends<<"|			DEPARTURE TIME			   |"<<ends<<"|		FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)CIRCAR EXPRESS(17644)		 |"<<ends<<"|<--08:00-(10hr 43min)-10:43,nextday-->|"<<ends<<"|		993/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)JANSHATABDI EXPRESS(12078) |"<<ends<<"|<--23:20-(7hr)-06:20-->			   |"<<ends<<"|		1050/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=993;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=1050;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|		TRAIN NAME	        |"<<ends<<"|			DEPARTURE TIME			  |"<<ends<<"|		FARE		|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)KERALA EXPRESS(12626)     |"<<ends<<"|<--06:00-(14hr 5min)-20:05,nextday--> |"<<ends<<"|		2010/-		|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)MAQ	VIVEK EXPRESS(22851)|"<<ends<<"|<--04:00-(17hr 35min)-21:35,nextday-->|"<<ends<<"|		2120/-		|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2010;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2120;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|		TRAIN NAME	   |"<<ends<<"|			DEPARTURE TIME		|"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)MADRAS EXPRESS(16054)|"<<ends<<"|<--15:00-(3hr 40min)-18:40-->|"<<ends<<"|	1250/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)KCGCGL EXPRESS(17652)|"<<ends<<"|<--09:17-(4hr 33min)-13:50-->|"<<ends<<"|	1100/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=1250;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=1100;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|		TRAIN NAME			|"<<ends<<"|		DEPARTURE TIME		 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)KANYAKUMARI EXPRESS(16381)|"<<ends<<"|<--01:30-(8hr 15min)-09:45-->|"<<ends<<"|	1460/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)GURUDEV EXPRESS(12660)	|"<<ends<<"|<--04:00-(7hr 30min)-11:30-->|"<<ends<<"|	1700/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=1460;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=1700;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	}
	
	//---------------------------------------------------------------------------------------------------------------------------------------
	else if(tdep==3&&tdes==1)
	{
        cout<<"Enter the Return date(d m y):";
		cin>>rd>>rm>>ry;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		cout<<"_________________________________________________________________________________________________"<<endl;
		if(depr==1&&desr==1)
		{
			cout<<"|		TRAIN NAME		  |"<<ends<<"|			DEPARTURE DATE				|"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)CHARMINAR EXPRESS(12759)|"<<ends<<"|<--08:00-(13hr 5min)-21:05,nextday-->)|"<<ends<<"|	2730/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)HYDERABAD EXPRESS(12603)|"<<ends<<"|<--06:00-(12h 25min)-18:25,nextday--> |"<<ends<<"|	2565/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2730;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2565;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|				DEPARTURE DATE			|"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)RAPTISAGAR EXPRESS(12522)|"<<ends<<"|<--11:00-(11hr 4min)-22:04,nextday-->|"<<ends<<"|	2100/*	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)GRANDTRUNK EXPRESS(12615)|"<<ends<<"|<--07:10-(11hr 4min)-18:14,nextday-->|"<<ends<<"|	2615/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter S.NO. of train:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2100;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2615;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE DATE|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)SABARI EXPRESS(17229)|"<<ends<<"|<--13:00-(19hr 30min)-08:30,nextday-->|"<<ends<<"|	2200/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)ERSHYB EXPRESS(07118)|"<<ends<<"|<--23:05-(20hr 25min)-21:30,nextday-->|"<<ends<<"|	2395/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2200;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2395;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|		TRAIN NAME		   |"<<ends<<"|				DEPARTURE DATE			 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)KERALA EXPRESS(12625)	   |"<<ends<<"|<--15:00-(18hr 40min)-23:40,nextday-->|"<<ends<<"|	2010/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)RAPTISAGAR EXPRESS(12522)|"<<ends<<"|<--11:30-(19hr 4min)-06:34,nextday--> |"<<ends<<"|	2250/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=2010;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=2250;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	}
	//-----------------------------------------------------------------------------------------------------------------------------------------------
	else if(tdep==2&&tdes==3)
	{
        cout<<"Enter the Return date(d m y):";
		cin>>rd>>rm>>ry;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		if(depr==1&&desr==1)
		{
			cout<<"|		TRAIN NAME			|"<<ends<<"|		DEPARTURE TIME		   |"<<ends<<"|		FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)GT EXPRESS(12616)			|"<<ends<<"|<--23:20-(7hr)-06:20,nextday-->|"<<ends<<"|		1765/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)JANAHATABDI EXPRESS(12078)|"<<ends<<"|<--15:20-(7hr 15min)-22:35-->  |"<<ends<<"|		1685/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=1765;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=1685;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==1&&desr==2)
		{	
			cout<<"|		TRAIN NAME		|"<<ends<<"|			DEPARTURE TIME			 |"<<ends<<"|	FARE	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)KERALA EXPRESS		|"<<ends<<"|<--14:55-(14hr 5min)-05:00,nextday-->|"<<ends<<"|	1520/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)MAQVIVEK EXPRESS		|"<<ends<<"|<--10:50-(15hr )					 |"<<ends<<"|	1924/-	|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=1520;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=1924;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}	
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=865;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=800;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=865;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=800;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
	}
	  
	//---------------------------------------------------------------------------------------------------------------------------
	else if(tdep==3&&tdes==2)
	{
        cout<<"Enter the Return date(d m y):";
		cin>>rd>>rm>>ry;	
		cout<<"Enter the coach you want to travel[1)AC-COACH  2)SLEEPER/NONAC-COACH]:";
		cin>>coach;
		cout<<"--------------------THE TRAINS AVAILABLE---------------"<<endl;
		if(depr==1&&desr==1)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=865;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=800;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==1&&desr==2)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=865;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=800;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}	
		}
		else if(depr==2&&desr==1)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=865;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=800;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}
		else if(depr==2&&desr==2)
		{
			cout<<"|TRAIN NAME|"<<ends<<"|DEPARTURE TIME|"<<ends<<"|FARE|"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|1)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"|2)|"<<ends<<"||"<<ends<<"||"<<endl;
			cout<<"_________________________________________________________________________________________________"<<endl;
			cout<<"Enter Train S.NO.:";
			cin>>tnum;
			if(tnum==1)
			{
				trcost=865;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					tdcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
			else if(tnum==2)
			{
				trcost=800;
				cout<<"The actual cost of the ticket is:"<<trcost<<endl;
				if(dm-m>1||dy-y>1)
				{
					trcost=(trcost)-(trcost*20/100);
					cout<<"Cost of your reservation ticket is:"<<trcost<<endl;
				}
				else if(dm-m==0||dy-y==0)
				{
					cout<<"Cost of your reservation is:"<<trcost<<endl;
				}
				else if(d-dm<0||d-dy<0)
				{
					cout<<"You have entered a wrong departure date."<<endl;
					cout<<"Please enter a valid departure date."<<endl;
					departure();
				}
			}
		}		
	}
}
char passname[30];
char ch;
int count;

	void tbook()
{
	int trrip_type;
	cout<<"Enter triptype again:";
	cin>>trrip_type;
	cout<<"Enter "<<pass<<" names of the passangers:";
	do
	{
		//count=1;
		cout<<"Enter "/*<<count*/<<"st passanger name:";
		cin>>passname;
		cout<<"Enter 'y'to enter another passanger name:";
		cin>>ch;
		//count++;
	}while(ch=='y');
	if(trrip_type==1)
    {
	cout<<"-------------------------------------------------CONGRACTULATIONS!YOUR TICKET HAS BEEN BOOKED SUCCESSFULLY---------------------------------------"<<endl;
	cout<<"DEPARTURE DATE:"<<dd<<ends<<dm<<ends<<dy<<endl;
	cout<<"YOU ARE GOING TO TRAVEL FROM   "<<tsource<<"  TO  "<<tdestination<<endl;
	cout<<"TOTAL NO. OF PASSENGERS:"<<pass<<endl;
	cout<<"PASSANGER NAMES ARE:"<<passname<<endl;
	cout<<"TOTAL COST IS:"<<tdcost*pass<<endl;
    }
    else if(trrip_type==2)
    {
	cout<<"-------------------------------------------------CONGRACTULATIONS!YOUR TICKET HAS BEEN BOOKED SUCCESSFULLY---------------------------------------"<<endl;
	cout<<"______________________________________DEPARTURE TICKET_________________________________"<<endl;
	cout<<"DEPARTURE DATE:"<<dd<<ends<<dm<<ends<<dy<<endl;
	cout<<"YOU ARE GOING TO TRAVEL FROM   "<<tsource<<"  TO  "<<tdestination<<endl;
	cout<<"TOTAL NO. OF PASSENGERS:"<<pass<<endl;
	cout<<"PASSANGERS NAMES ARE:"<<passname<<endl;
	cout<<"TOTAL COST IS:"<<tdcost*pass<<endl;
	cout<<"________________________________________________________________________________________"<<endl;
	cout<<endl<<endl;
	cout<<"_______________________________________RETURN TICKET____________________________________"<<endl;
	cout<<"RETURN DATE:"<<rd<<ends<<rm<<ends<<ry<<endl;
	cout<<"YOU ARE GOING FROM "<<tdestination<<" TO "<<tsource<<endl;
	cout<<"TOTAL NO. OF PASSANGERS:"<<pass<<endl;
	cout<<"PASSANGER NAMES ARE:"<<passname;
	cout<<"TOTAL COST IS:"<<trcost*pass<<endl;	
	cout<<"_________________________________________________________________________________________"<<endl;
	}
}
friend class way;
};
char fsource[20],fdestination[20];
int e,f,fclass,fdcost,frcost,ftcost;
char passname[30];
int fdd,fdm,fdy,frd,frm,fry;

class flight
{
	public:
	
	int d,m,y;
	void fbook()
{
	int trrip_type;
	cout<<"Enter triptype again:";
	cin>>trrip_type;
	cout<<"Enter "<<pass<<" names of passangers:"<<endl;
	//cin.ignore();
	//int count=1;
	char ch;
	do
	{
		cout<<"Enter "/*<<count*/<<"st passanger name:";
		cin>>passname;
		cin.ignore();
		cout<<"Enter 'y'to enter another passanger name:";
		cin>>ch;
		//count++;
	}while(ch=='y');
	if(trrip_type==1)
    {
	cout<<"-------------------------------------------------CONGRACTULATIONS!YOUR TICKET HAS BEEN BOOKED SUCCESSFULLY---------------------------------------"<<endl;
	cout<<"DEPARTURE DATE:"<<fdd<<ends<<fdm<<ends<<fdy<<endl;
	cout<<"YOU ARE GOING TO TRAVEL FROM   "<<fsource<<"  TO  "<<fdestination<<endl;
	cout<<"TOTAL NO. OF PASSENGERS:"<<pass<<endl;
	cout<<"THE NAMES OF PASSANGERS ARE:"<<endl;
	cout<<passname;
	cout<<"TOTAL COST IS:"<<ftcost<<endl;
    }
    else if(trrip_type==2)
    {
	cout<<"-------------------------------------------------CONGRACTULATIONS!YOUR TICKET HAS BEEN BOOKED SUCCESSFULLY---------------------------------------"<<endl;
	cout<<"______________________________________DEPARTURE TICKET_________________________________"<<endl;
	cout<<"DEPARTURE DATE:"<<fdd<<ends<<fdm<<ends<<fdy<<endl;
	cout<<"YOU ARE GOING TO TRAVEL FROM   "<<fsource<<"  TO  "<<fdestination<<endl;
	cout<<"TOTAL NO. OF PASSENGERS:"<<pass<<endl;
	cout<<passname;
	cout<<"TOTAL COST IS:"<<ftcost<<endl;
	cout<<"________________________________________________________________________________________"<<endl;
	cout<<endl<<endl;
	cout<<"_______________________________________RETURN TICKET____________________________________"<<endl;
	cout<<"RETURN DATE:"<<frd<<ends<<frm<<ends<<fry<<endl;
	cout<<"YOU ARE GOING FROM "<<fdestination<<" TO "<<fsource<<endl;
	cout<<"TOTAL NO. OF PASSANGERS:"<<pass<<endl;
	cout<<"THE NAMES OF PSSANGERS ARE:"<<passname;
	cout<<"TOTAL COST IS:"<<ftcost<<endl;	
	}
}

	void flight_travel()
	{
		d=4,m=4,y=2019;
    	cout<<"Enter the SOURCE:";
		cin.ignore();
		cin.getline(fsource,20);
		cout<<"Enter the DESTINATION:";
		cin.getline(fdestination,20);
		cout<<"Enter the number before the state where you want to go:";
		cin>>e;
		//system("CLS");
		switch(e)
		{
			case 1:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<fdestination<<"  STATE"<<endl;
				cout<<"1)RAJIV GANDHI INTERNATIONAL AIRPORT-HYDERABAD"<<endl;
				break;
			case 2:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<fdestination<<"  STATE"<<endl;
				cout<<"1)VJAYAWADA AIRPORT-VIJAYAWADA"<<endl;
				cout<<"2)TIRUPATI AIRPORT-TIRUPATI"<<endl;
				break;
			case 3:
				cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<fdestination<<"  STATE"<<endl;
				cout<<"1)CHENNAI INTERNATIONAL AIRPORT-CHENNAI"<<endl;
				cout<<"2)COIMBATORE INTERNATIONAL AIRPORT-COIMBATORE"<<endl;
				break;
			case 4:
			    cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<fdestination<<"  STATE"<<endl;
				cout<<"1)KEMPEGOWDE INTERNATIONAL AIRPORT-BANGALORE"<<endl;
				cout<<"2)MANGALORE INTERNATIONAL AIRPORT-MANGALORE"<<endl;
				break;
			case 5:
			    cout<<"WE PROVIDE SERVICE TO THESE PLACES IN  "<<fdestination<<"  STATE"<<endl; 
				cout<<"1)TRIVANDRUM INTERNATIONAL AIRPORT-THIRUVANANTHAPURAM"<<endl;	  	
				break;
		}
	}
	void airport()
	{
		cout<<"Select Your choice and mention the Airport Number:";
		cin>>f;
		if(f==1)
		{
		cout<<"------COST DETAILS------"<<endl;
		cin.ignore();
		cout<<"Enter the number of passangers:";
		cin>>pass;
		cout<<"Enter the Departure date(date month year):";
		cin>>fdd>>fdm>>fdy;
		cout<<"Enter the class you want to travel:"<<endl<<"1)Economy Class(2000/-)"<<endl<<"2)Premium Economy Class(5000/-)"<<endl<<"3)Business Class(10,000/-)"<<endl;
		cin>>fclass;
		switch(fclass)
		{
			case 1:
				fdcost=2000;
				cout<<"Actual Cost of each ticket is:"<<fdcost<<endl;
				break;
			case 2:
				fdcost=5000;
				cout<<"Actual Cost of each ticket is:"<<fdcost<<endl;
				break;
				case 3:
				fdcost=10000;
				cout<<"Actual Cost of each ticket is:"<<fdcost<<endl;
				break;
		}
		if(fdm-m>0||fdy-y>0)
		{
			fdcost=fdcost-((fdcost*20)/100);
			fdcost=pass*fdcost;
			cout<<"Cost of your reservation of flight ticket is:"<<fdcost<<endl;
		}
        else if(fdm-m<0||fdy-y<0)
		{
			fdcost=pass*fdcost;
			cout<<"Cost of your reservation of flight ticket is:"<<fdcost<<endl;
		}	
	  }
		else if(f==2)
	  {
		cout<<"------COST DETAILS------"<<endl;
		cin.ignore();
		cout<<"Enter the number of passangers:";
		cin>>pass;
		cout<<"Enter the Departure date(date month year):";
		cin>>fdd>>fdm>>fdy;
		cout<<"Enter the class you want to travel:"<<endl<<"1)Economy Class(2500/-)"<<endl<<"2)Premium Economy Class(5500/-)"<<endl<<"3)Business Class(10,500/-)"<<endl;
		cin>>fclass;
		switch(fclass)
		{
			case 1:
				fdcost=2500;
				cout<<"Actual Cost of each ticket is:"<<fdcost<<endl;
				break;
			case 2:
				fdcost=5500;
				cout<<"Actual Cost of each ticket is:"<<fdcost<<endl;
				break;
				case 3:
				fdcost=10500;
				cout<<"Actual Cost of each ticket is:"<<fdcost<<endl;
				break;
		}
		if(fdm-m>0||fdy-y>0)
		{
			fdcost=fdcost-((fdcost*20)/100);
			fdcost=pass*fdcost;
			cout<<"Cost of your reservation of flight ticket is:"<<fdcost<<endl;
		}
        else if(fdm-m<0||fdy-y<0)
		{   fdcost=pass*fdcost;
			cout<<"Cost of your reservation of flight ticket is:"<<fdcost<<endl;
		}	
	  }
		else
		{
		cout<<"You have choosen a wrong option"<<endl;
	    flight_travel();
		}
	}
	void return_flight()
	{
		
		cout<<"Enter the Return date(date month year):";
		cin>>frd>>frm>>fry;
		cout<<"Enter the class you want to travel:"<<endl<<"1)Economy Class(3000/-)"<<endl<<"2)Premium Economy Class(6000/-)"<<endl<<"3)Business Class(11,000/-)"<<endl;
		cin>>fclass;
		switch(fclass)
		{
			case 1:
				frcost=3000;
				cout<<"Actual Cost of each ticket is:"<<frcost<<endl;
				break;
			case 2:
				frcost=6000;
				cout<<"Actual Cost of each ticket is:"<<frcost<<endl;
				break;
			case 3:
				frcost=11000;
				cout<<"Actual Cost of each ticket is:"<<frcost<<endl;
				break;
		}
		if(frm-m>0||fry-y>0)
		{
			frcost=frcost-((frcost*20)/100);
			frcost=pass*frcost;
			cout<<"Cost of your reservation of flight ticket is:"<<frcost<<endl;
		}
        else if(frm-m<0||fry-y<0)
		{
			frcost=pass*frcost;
			cout<<"Cost of your reservation of flight ticket is:"<<frcost<<endl;
		}	
	}
friend class way;
};
class way
{
	public:int transport,trip_type;
		void away(train t,flight f)
		{
		  cout<<"WE PROVIDE TRAIN AND BUS SERVICES."<<endl;
		  cout<<"Click 1 to select TRAIN services."<<endl;
		  cout<<"Click 2 to select FLIGHT services."<<endl;
		  cin>>transport;
		  cout<<"Do you want to travel '1)ONEWAY-TRIP'"<<endl<<"'2)ROUND-TRIP':"<<endl;
		  cin>>trip_type;
		  if(transport==1&&trip_type==1)
		  {
		  t.train_travel();
		  t.railway();
		  ttcost=tdcost;
		  cout<<"TOTAL COST OF YOUR TRAIN RESERVATION IS:"<<ttcost<<endl;		  

		  }
		  else if(transport==1&&trip_type==2)
		  {
		  t.train_travel();
		  t.railway();
          t.return_train();
		  ttcost=tdcost+trcost;
		  cout<<"TOTAL COST OF YOUR TRAIN RESERATION IS:"<<ttcost<<endl;
		  }
		  else if(transport==2&&trip_type==1)
		  {
		  f.flight_travel();
		  f.airport();
		  ftcost=fdcost+0;
		  cout<<"TOTAL COST OF YOUR FLIGHT RESERVATION IS:"<<ftcost<<endl;
		  }
		  else if(transport==2&&trip_type==2)
		  {
		  f.flight_travel();
		  f.airport();
		  f.return_flight();
		  ftcost=fdcost+frcost;
		  cout<<"TOTAL COST OF YOUR LIGHT RESERVATION IS:"<<ftcost<<endl;
		  }
		  else
		  {
		  cout<<"You have choosen a Wrong Option."<<endl<<"Please select only from the given options."<<endl;
		  away(t,f);
		  }
		}
}w1;
char hplace[20];
int hsno,cid,cim,ciy,cod,com,coy,guestnum;
class hotel
{
	public:
		void getdet()
		{
			welcome w2;
			cout<<"Enter the place where you want to book the hotel:";
			cin>>hplace;
			cout<<"Enter the S.NO. of the place:";
			cin>>hsno;
			switch(hsno)
			{
				cout<<"WE PROVIDE HOTEL SERVICE TO THESE PLACES IN "<<hplace<<" :"<<endl;
				case 1:
					cout<<"1)HOTEL MARIGOLD,SECUNDERABAD"<<endl;
					cout<<"2)HOTEL NOVOTEL,GACHIBOWLI"<<endl;
					break;
				case 2:
					cout<<"1)HAMPSHIRE PLAZA HOTEL"<<endl;
					cout<<"2)AMRUTHA CASTLE"<<endl;
					break;
			    case 3:
			    	cout<<"			HOTEL NAME			 "<<ends<<"RATING"<<ends<<"FARE"<<endl;
					cout<<"1)KARPAGAM INTERNATIONAL HOTEL"<<ends<<" 3.8/5"<<"1,252/-per night"<<endl;
					cout<<"2)AMR'S EVERGREEN HOTEL		 "<<ends<<"	3.5/5"<<"1,465/-per night"<<endl;	
			}
			cout<<"Enter the 'CHECKIN DATE:'";
			cin>>cid>>cim>>ciy;
			cout<<"Enter the'CHECKOUT DATE:'";
			cin>>cod>>com>>coy;
			cout<<"Enter the number of guests:";
			cin>>guestnum;
			
		}
};
int main()
{
	flight f,f1;
	train t,t1;
	welcome w;
	way w1;
	w1.away(t,f);
	if(w1.transport==1)
	{
	ofstream p;
	p.open("rec.txt",ios::out);
	p.write((char*)&t,sizeof(t));
	cout<<"Data is saved."<<endl;
	p.close();
	ifstream q;
	q.open("rec.txt",ios::in);
	q.read((char*)&t1,sizeof(t1));
	t1.tbook();
	q.close();
	}
	else if(w1.transport==2)
	{
	//f.fbook();
	ofstream r;
	r.open("fly.txt",ios::out);
	r.write((char*)&f,sizeof(f));
	cout<<"Data is saved"<<endl;
	r.close();
	ifstream s;
	s.open("fly.txt",ios::in);
	s.read((char*)&f1,sizeof(f1));
	f1.fbook();
	s.close();
	}
	hotel h;
	int hnum;
	cout<<"Click 1 if you want to book a hotel:";
	cin>>hnum;
	if(hnum==1)
	{
		h.getdet();
	}
	else
	{
	cout<<"-------------------------THANK YOU FOR BOOKING THE TICKETS IN OUR WEBSITE-----------------------------"<<endl;	
	}
	return 0;
}
