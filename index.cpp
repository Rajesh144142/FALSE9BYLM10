#include<iostream>
#include<string.h>
#include<ctime>
#include<windows.h>
#include<ctime>
using namespace std ;
int count_total_number_of_passanger=0;
int setberia=0;
int gopalnagar=0;
int akipur=0;
int majhargram=0;
int gangnapur=0;
int nabaraynagarhalt=0;
int ranaghat=0;
int IN_totalEarning=0;
class myclass{
    public :
    string name;
    char adhar[1000];
    char age[100];
    char sex[50];
};
void officialUse(){
  char password[10000];
  cout<<endl<<endl<<"PLEASE ENTER THE PASWORD( ONLY FOR OFFICIALS ):"<<endl;
  cin>>password;
  if (strcmp(password,"rajesh@123")==0){
    cout<<"oTOTAL NUMBER OF PASSANGERS HAVE TRAVELLED TODAY ARE"<<count_total_number_of_passanger<<endl<<endl;
    cout<<"oTOTAL NUMBER OF PASSANGERS WENT TO SETBERIA ARE "<<setberia<<endl<<"*TOTAL EARNED = "<<5*setberia<<endl<<endl;
    IN_totalEarning=IN_totalEarning+(5*setberia);
    cout<<"oTOTAL NUMBER OF PASSANGERS WENT TO GOPALNAGAR ARE "<<gopalnagar<<endl<<"*TOTAL EARNED = "<<10*gopalnagar<<endl<<endl;
    IN_totalEarning=IN_totalEarning+(10*gopalnagar);
    cout<<"oTOTAL NUMBER OF PASSANGERS WENT TO AKAIPURHALT ARE "<<akipur<<"TOTAL EARNED = "<<15*akipur<<endl<<endl;
    IN_totalEarning=IN_totalEarning+(15*akipur);
    cout<<"oTOTAL NUMBER OF PASSANGERS WENT TO MAJHARGRAM ARE "<<majhargram<<endl<<"TOTAL EARNED = "<<20*majhargram<<endl<<endl;
    IN_totalEarning=IN_totalEarning+(20*majhargram);
    cout<<"oTOTAL NUMBER OF PASSANGERS WENT TO GANGNAPUR ARE "<<gangnapur<<endl<<"TOTAL EARNED = "<<25*gangnapur<<endl<<endl;
    IN_totalEarning=IN_totalEarning+(25*gangnapur);
    cout<<"oTOTAL NUMBER OF PASSANGERS WENT TO NABARAYNAGARHALT ARE "<<nabaraynagarhalt<<endl<<"TOTAL EARNED = "<<30*nabaraynagarhalt<<endl<<endl;
    IN_totalEarning=IN_totalEarning+(30*nabaraynagarhalt);
    cout<<"oTOTAL NUMBER OF PASSANGERS WENT TO RANAGHAT ARE "<<ranaghat<<endl<<"TOTAL EARNED = "<<35*ranaghat<<endl<<endl;
    IN_totalEarning=IN_totalEarning+(35*ranaghat);
    cout<<"TOTAL EARNED MONEY TODAY IS "<<IN_totalEarning<<endl<<endl;
    cout<<"Please clear the screen after fetching all the information pressing 1"<<endl ;
    char clearm[100];
    cin>>clearm;
    if (strcmp(clearm,"1")==0){
       system("Cls");
    }
  }
  else{
      return ;
  }
}
void stationInfo(int  data){
    if (data==1){
     cout <<"\t\t\t\t\tThe distance between Bongaon junction to Setberia :4 KM"<<endl<<endl;
     cout<<"\t\t\t\t\tDASTINATION STATION: SETBARIA"<<endl<<endl;
    }
    else if (data==2){
      cout <<"\t\t\t\t\tThe distance between Bongaon junction to Gopalnagar:14 KM"<<endl<<endl;
     cout<<"\t\t\t\t\tDASTINATION STATION: GOPALNAGAR"<<endl<<endl;
    }
    else if (data==3){
    cout <<"\t\t\t\t\tThe distance between Bongaon junction to Akaipur Halt:14 KM"<<endl<<endl;
     cout<<"\t\t\t\t\tDASTINATION STATION: AKAIPUR"<<endl<<endl;
    }
    else if (data==4){
       cout <<"\t\t\t\t\tThe distance between Bongaon junction to Majhergram:18 KM"<<endl<<endl;
     cout<<"\t\t\t\t\tDASTINATION STATION: MAJHARGRAM"<<endl<<endl;
    }
    else if(data==5){
         cout <<"\t\t\t\t\tThe distance between Bongaon junction to Gangnapur :23 KM"<<endl<<endl;
     cout<<"\t\t\t\t\tDASTINATION STATION: GANGNAPUR"<<endl<<endl;
    }
    else if (data==6){
       cout <<"\t\t\t\t\tThe distance between Bongaon junction to Setberia :27 KM"<<endl<<endl;
     cout<<"\t\t\t\t\tDASTINATION STATION: NABARAYNAGARHALT"<<endl<<endl;
    }
    else if (data==7){
       cout <<"\t\t\t\t\tThe distance between Bongaon junction to Ranaghat :32 KM"<<endl<<endl;
     cout<<"\t\t\t\t\tDASTINATION STATION: RANAGHAT"<<endl<<endl;
    }
}
void simpleticketBookingProcess(){
  cout<<"                                            ############################################################"<<endl;
  cout<<"                                            #                                                          #"<<endl;
  cout<<"                                            #       IT IS A SIMPLE TRAIN TICKET BOOKING PROGRAM        #"<<endl;
  cout<<"                                            #                                                          #"<<endl;
  cout<<"                                            ############################################################"<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"              ###########################################################################################################################"<<endl;
  cout<<"              #                                                                                                                         #"<<endl;
  cout<<"              #    COVID-19 PANDEMIC HASN'T ENDED YET BUT IT CAN BE TREATED IN THE COLLABORATION WITH EACH OTHER BY WASHING HANDS       #"<<endl;
  cout<<"              #                                                                                                                         #"<<endl;
  cout<<"              #                              REGULARLY, WEARING MUSK AND MAINTAING SOCIAL DISTANCING                                    #"<<endl;
  cout<<"              #                                                                                                                         #"<<endl;
  cout<<"              ###########################################################################################################################"<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;

}
void MakingSure(){
    cout<<endl<<endl<<"Would you like to continue?"<<endl<<endl;
        cout<<"oooooooooooooooo"<<endl;
        cout<<"o   YES->1     o"<<endl;
        cout<<"o   No->0      o"<<endl;
        cout<<"oooooooooooooooo"<<endl;
        cout<<"Press:";
}
void Information(int n ,int price,int stationCode){
     myclass person[50];
     int i =0;
     int j=0;
     char s[50];
            while(i<n){
              cin.ignore();
            cout<<"Enter the number " <<i+1<<" pessanger name :";
            getline(cin,person[i].name);
            cout<<"Enter the sex of the pessanger:";
            cin>>person[i].sex;
            cout<<"Enter the age of the passanger:";
            cin>>person[i].age;
            cout<<"now enter the adhar number:";
            cin>>person[i].adhar;
            i++;
            count_total_number_of_passanger++;
            }
    cout<<"*****************************************************************************************************************************************"<<endl<<endl<<endl;
    cout<<"\t\t\t\t..........Please wait the ticket is being printed ..........."<<endl;
            Sleep(3000);
    cout<<"#########################################################################################################################################"<<endl;
      system("Cls");
      while(j<n){
            cout<<"\t\t\t\t\t"<<j+1<<")PASSANGER NAME: "<<person[j].name<<endl<<endl;
            cout<<"\t\t\t\t\t "<<"AGE:"<<person[j].age<<endl<<endl;
            cout<<"\t\t\t\t\t "<<"SEX:"<<person[j].sex<<endl<<endl;
            j++;
            }
      cout<<"######################################################################################################################################"<<endl;
           stationInfo(stationCode);
           cout<<"\t\t\t\t\tTotal amount = "<<n*price<<"RS"<<endl<<endl;
           cout<<"\t\t\t\t\tWISHING YOU A SAFE AND COMFORTABLE JOURNEY......THANK YOU"<<endl<<endl;

}
int main(){
  system("Color 90");
    simpleticketBookingProcess();
    char destinationPoint[1000];
    int process;
    while(true){
    int amount,n,i,j;
    int x ;
     start:
    myclass person[50];
    cout<<"#would you want to go to the official side or start the process:"<<endl;
    cout<<"*for official uses, press->1"<<endl;
    cout<<"*to end the process,press->2"<<endl;
    cout<<"*to start the process,press->3"<<endl;
    cin>>process;
    if (process==1){
      officialUse();
    }
    else if (process==2){
      system("Cls");
      cout<<"System is shutting down............"<<endl;
      system("Color 1");
      Sleep(2000);
      break;
    }
    else{
    cout<<"Enter the destination station:"<<endl;
    cin>>destinationPoint;

    if (strcmp(strlwr(destinationPoint),"setberia")==0){
        cout<<"****************************************************************************************************************************************"<<endl;
        MakingSure();
        cin>>x;
        if (x==1){
          cout<<"Enter total number of passengers: ";
          cin>>n;
          setberia=setberia+n;
          Information(n,5,1);
        }
        else {
          goto start;
        }

    }
    else if (strcmp(strlwr(destinationPoint),"gopalnagar")==0){
        cout<<"****************************************************************************************************************************************"<<endl;
        MakingSure();
        cin>>x;
        if (x==1){
          cout<<"Enter total number of passengers: ";
          cin>>n;
          gopalnagar=gopalnagar+n;
          Information(n,10,2);
        }
        else {
          goto start;
        }
    }
    else if (strcmp(strlwr(destinationPoint),"akaipurHalt")==0){
         cout<<"****************************************************************************************************************************************"<<endl;
        MakingSure();
        cin>>x;
        if (x==1){
          cout<<"Enter total number of passengers: ";
          cin>>n;
          akipur=akipur+n;
          Information(n,15,3);
        }

        else {
          goto start;
        }
    }
    else if (strcmp(strlwr(destinationPoint),"majhergram")==0){
        cout<<"****************************************************************************************************************************************"<<endl;
        cin>>x;
        if (x==1){
          cout<<"Enter total number of passengers: ";
          cin>>n;
          majhargram=majhargram+n;
          Information(n,20,4);
        }

        else {
          goto start;
        }
    }
    else if (strcmp(strlwr(destinationPoint),"gangnapur")==0){
        cout<<"****************************************************************************************************************************************"<<endl;
        MakingSure();
        cin>>x;
        if (x==1){
          cout<<"Enter total number of passengers: ";
          cin>>n;
          gangnapur=gangnapur+n;
          Information(n,25,5);

        }

        else {
          goto start;
        }
    }
    else if (strcmp(strlwr(destinationPoint),"nabaraynagarhalt")==0){
        cout<<"****************************************************************************************************************************************"<<endl;
        MakingSure();
        cin>>x;
        if (x==1){
          cout<<"Enter total number of passengers: ";
          cin>>n;
          nabaraynagarhalt=nabaraynagarhalt+n;
          Information(n,30,6);
            
        }

        else {
          goto start;
        }
    }
    else if (strcmp(strlwr(destinationPoint),"ranaghat")==0){
        cout<<"****************************************************************************************************************************************"<<endl;
       
        MakingSure();
        cin>>x;
        if (x==1){
          cout<<"Enter total number of passengers: ";
          cin>>n;
          ranaghat=ranaghat+n;
          Information(n,35,7);
        }

        else {
          goto start;
        }
    }
    else {
    cout<<"Invalid station name "<<endl;
    }
    }
    }
    system("Cls");
    return 0;
    
}
