#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
struct doctor1
{
    int id;
    char name[20],Q[20],exp[20];
};
struct patient1
{
    int id1;
    char name[20],dis[20],date[20],bill[20];
};
class hospital
{
    protected:
    int c;
    public:
    virtual void total()=0;
};
class doctor:public hospital
{
    private:
    int docid;
    struct doctor1 arr[10];
    public:
    doctor()
    {
    docid=0;
    }
    void add_doc_info();
    void Display();
    void doctor_detail();
    void total()
    {
	system("cls");
	int i=c;
	cout<<"Total Doctor's in Hospital : "<<i<<"\n";
	cout<<" \n Press Any Button To choose another Option.... ";
	getch();
    }
};
void doctor::add_doc_info()
{
	int i,en;
	cout<<"How Many Entries you want to add :";
	cin>>en;
	for(i=1;i<=en;i++)
	{
	cout<<"Enter Doctor's ID                :";
	cin>>arr[docid].id;
	cout<<"Enter Doctor's Name              :";
	cin>>arr[docid].name;
	cout<<"Enter Doctor's Qualification     :";
	cin>>arr[docid].Q;
	cout<<"Enter Doctor's Experience        :";
	cin>>arr[docid].exp;
	docid++;
	 c++;
	 cout<<"\n";
	cout<<"You filled all Entries of "<<i<<" doctor successfully"<<"\n";
	cout<<"enter value for "<<" "<<i+1<<" "<<"doctor"<<"\n";
	}
    }
void doctor::Display()
    {
	system("cls");
	int n,i;
	cout<<"\n Enter the doctor's ID  to display Record :";
	cin>>n;
	if(n==0)
	{
	    cout<<"\n\n                      OOPS!!!!             "<<"\n\n";
	    cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries...... "<<"\n";
	}
	else
	{
	    int status=0;
	    for(i=0;i<docid;i++)
	    {
		if(arr[i].id==n)
		{
		    status=1;
		    break;
		}
	    }
	    if(status)
	    {
		cout<<"\n\n";
		cout<<"1.Doctor's ID                 :"<<arr[i].id<<"\n";
		cout<<"2.Doctor's Name               :"<<arr[i].name<<"\n";
		cout<<"3.Doctor's Qualification      :"<<arr[i].Q<<"\n";
		cout<<"4.Doctor's Experience         :"<<arr[i].exp<<"\n";
		cout<<" \n Press Any KEY To choose another Option.... ";
	    }
	    else
	    {
		cout<<" \n\n No such ID in database "<<endl;
		cout<<" \n Press Any KEY To choose another Option.... ";
	    }
	}
	 getch();
    }
void doctor::doctor_detail()
    {
	int i;
	if(docid==0)
	{
	    cout<<" \n\n\n                                  OOPS!!!!             "<<"\n\n";
	   cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries...... "<<"\n";
	}
	else{
		cout<<"****************************"<<"\n";
	cout<<"\t \t \t  Details Of All The Doctors In The Hospital \n";
	cout<<"****************************"<<"\n \n";

	cout<<"ID"<<"\t \t"<<"     Name     "<<"\t \t"<<"Qualification"<<"\t \t";
	cout<<"\n \n";

	for(i=0;i<docid;i++)
	 {
	cout<<arr[i].id<<"\t \t"<<arr[i].name<<"\t \t \t"<<arr[i].Q<<"\t  \t \t";
	 }
	 cout<<" \n Press Any Button To choose another Option.... ";
	}
	getch();
    }
    void tot_no_of_doc()
    {
	system("cls");
	int i;
	cout<<"Total Doctor's in Hospital : "<<i<<"\n";
	cout<<" \n Press Any Button To choose another Option.... ";
	getch();
    }
class patient:public hospital
{
   private:
   int pid;
   struct patient1 arr[10];
   public:
   patient()
   {
   pid=0;
   }
   void add_pat_info();
   void  Display();
   void patient_report();
   void patient_detail();
   void total();
   void gen_pat_bill();
};

 void patient :: add_pat_info()
   {
	int i,en;
	cout<<"How Many Entries you want to add :";
	cin>>en;
	for(i=1;i<=en;i++)
	{
	cout<<"1.Enter Patient's ID                                  :";
	cin>>arr[pid].id1;
	cout<<"2.Enter patient's Name                               :";
	cin>>arr[pid].name;
	cout<<"3.Enter patient's Disease                            :";
	cin>>arr[pid].dis;
	cout<<"4.Enter Patient's ADMIT Date                         :";
	cin>>arr[pid].date;
	cout<<"5.Enter Patient's Medicine charge                   :";
	cin>>arr[pid].bill;
	pid++;
	c++;
	cout<<"\n";
	cout<<"You filled all Entries of "<<i<<" patient successfully"<<"\n";
	cout<<"enter value for "<<" "<<i+1<<" "<<"patient"<<"\n";
	}
   }

   void patient :: Display()
   {
	system("cls");
	int n,i;
	cout<<"\n Enter the Patient's ID  to display  info :";
	cin>>n;
	if(n==0)
	{
	    cout<<"\n\n                      OOPS!!!!             "<<"\n \n";
	    cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries...... "<<"\n";
	    cout<<" \n Press Any KEY To choose another Option.... ";
	}
	else
	{
	    int status=0;
	    for(i=0;i<pid;i++)
	    {
		if(arr[i].id1==n)
		{
		    status=1;
		    break;
		}
	    }
	    if(status==1)
	    {
	    cout<<"1.Patient's ID                                      :"<<arr[i].id1<<"\n";
	    cout<<"2.Patient's Name                                    :"<<arr[i].name<<"\n";
	    cout<<"3.Patient's  Disease                                :"<<arr[i].dis<<"\n";
	    cout<<"4.Patient's ADMIT Date                              :"<<arr[i].date<<"\n";
	    cout<<"5.Patient's Medicine charge                        :"<<arr[i].bill<<"\n";
	    cout<<" \n Press Any KEY To choose another Option.... ";
	   }
	   else{
		cout<<" \n\n No such ID in database "<<endl;
		cout<<" \n Press Any KEY To choose another Option.... ";
	     }
	}
    getch();
 }

 void patient :: patient_report()
  {
	    system("cls");
	    int i,n;
	    cout<<"\n Enter the Patient's ID to Display  Report :";
	    cin>>n;
	    int status=0;
	    for(i=0;i<pid;i++)
	    {
		if(arr[i].id1==n)
		{
		    status=1;
		    break;
		}
	    }
	    if(status)
	    {
	       cout<<"\n\n     *  Patient's Report *    "<<"\n \n";
	       cout<<       "1.Patient's Name                             "<<arr[i].name<<"\n";
	       cout<<       "2.Patient Disease                            "<<arr[i].dis<<"\n";
	       cout<<       "3.Patient Admit Date                         "<<arr[i].date<<"\n";
	       cout<<       "4.Patient Condition                          NORMAL\n";
	       cout<<"Press Any Key To Go Back....";
	    }
	    else{
		cout<<" \n\n No such ID in database "<<endl;
		cout<<" \n Press Any KEY To choose another Option.... ";
	     }

	       getch();
	}

     void patient:: patient_detail()
     {
	 int i;
	  if(pid==0)
	  {
	   cout<<" \n\n\n\n\n                                  OOPS!!!!             "<<"\n\n\n";
	   cout<<"Note:-   No Record To Display  Plz Go Back And Enter Some Entries...... "<<"\n";
	  }
	else{
	cout<<"****************************"<<"\n";
	cout<<"\t \t \t  Details Of All The Pateint In The Hospital \n";
	cout<<"****************************"<<"\n \n";
	cout<<"ID"<<"\t \t"<<"illness"<<"\t \t"<<"ADMITTED Date";
	cout<<"\n \n";
	for(i=0;i<pid;i++)
	 {
	  cout<<arr[i].id1<<"\t \t"<<arr[i].dis<<"\t \t \t"<<arr[i].date;
	 }
	 cout<<" \n Press Any KEY To choose another Option.... ";
	}
	getch();
     }

     void patient :: total()
     {
	system("cls");
	int i=c;
	cout<<"Total Patients in Hospital    :   "<<i<<"\n";
	cout<<" \n Press Any KEY To choose another Option.... ";
	getch();
     }

void patient :: gen_pat_bill()
{
	    system("cls");
	    int i,n;
	    cout<<"\n Enter the Patient's ID to Display  Bill :";
	    cin>>n;
	    int status=0;
	    for(i=0;i<pid;i++)
	    {
		if(arr[i].id1==n)
		{
		    status=1;
		    break;
		}
	    }
	    if(status)
	    {
	       cout<<"\n\n     *  Patient's Report *    "<<"\n \n";
	       cout<<       "Patient's Medicine Charge                  "<<arr[i].bill<<"\n";
	       cout<<"Press Any Key To Go Back....";
	    }

	    else{
		cout<<" \n\n No such ID in database "<<endl;
		cout<<" \n Press Any KEY To choose another Option.... ";
	     }
	     getch();

}


int main()
{
    system("color B0");
    clrscr();
    int repeat=1;
    int ch1,ch2,ch3,ch4;
    doctor d;
    patient p;
     xyz:
     system("cls");
    cout<<"\n\n";
    cout<<"            * Welcome to the Hospital Management System *    "<<"\n\n\n";
    cout<<"                   1. Menu :   "<<"\n\n";;
    cout<<"                   2. Exit :   "<<"\n\n\n\n";
    cout<<"Enter Your Choice  :";
    cin>>ch1;
    cout<<"\n\n\n";

    if(ch1==1)
    {
	 xyz2:
	 system("cls");
	 cout<<"\n\n";
	 cout<<"   1.   Enter  into Doctor's    DataBase   "<<endl;
	 cout<<"   2.   Enter  into Patient's   DataBase   "<<endl;
	 cout<<"   3.   Generate    Patient's   Report     "<<endl;
	 cout<<"   4.   Generate    Patient's   Bill       "<<endl;
	 cout<<"   5.   EXIT                               "<<"\n";
	 cout<<"Please  Enter Your choice  :"<<" ";
	 cin>>ch2;
	 while(repeat==1)
	  {
	   system("cls");
	   switch(ch2)
	   case 1:
	    {
	       cout<<"\n\n";
	       cout<<"             * Welcome To Doctor's DataBase *    "<<"\n \n \n\n";

	       cout<<   "  \t       1. Add New Doctor's Information              "<<endl;
	       cout<<   "  \t       2. Display Doctor's Information              "<<endl;
	       cout<<   "  \t       3. Detail OF ALL The Doctors In The Hospital "<<endl;
	       cout<<   "  \t       4. Total Number of Doctor's  in Hospital     "<<endl;
	       cout<<   "  \t       5. EXIT                                      "<<"\n";

	       cout<<"Please Enter your choice :"<<" ";
	       cin>>ch3;
	       switch(ch3)
	       {
		  case 1:
		   system("cls");
		   d.add_doc_info();
		   break;
		   case 2:
		       d.Display();
		       cout<<"\n";
		    break;

		   case 3:
		       system("cls");
		       d.doctor_detail();
		       break;

		   case 4:
		       d.total();
		    break;

		    case 5:
			goto xyz2;

		   default:
		    cout<<"invalid";
		}
		break;
	case 2:
	     cout<<"\n\n";
	       cout<<"       * Welcome To Patient's DataBase *    "<<"\n \n";

	       cout<<       "1. Add New Patient's Information              "<<endl;
	       cout<<       "2. Display Patient's Information              "<<endl;
	       cout<<       "3. Detail OF ALL The Patient In The Hospital "<<endl;
	       cout<<       "4. Total Number of Patient's  in Hospital     "<<endl;
	       cout<<       "5. EXIT                                      "<<"\n";

	       cout<<"Please Enter your choice :"<<" ";
	       cin>>ch4;
	       switch(ch4)
	       {
		  case 1:
		   system("cls");
		   p.add_pat_info();
		   break;
		   case 2:
		       p.Display();
		       cout<<"\n";
		    break;

		   case 3:
		       system("cls");
		       p.patient_detail();
		       break;

		   case 4:
		       p.total();
		    break;

		    case 5:
			goto xyz2;


		   default:
		    cout<<"invalid";
		    break;
		}
	    break;
	    case 3:

	    p.patient_report();
	    goto xyz2;

	    case 4:
		p.gen_pat_bill();
		goto xyz2;

	    case 5:
		goto xyz;


  }
 }
 }
 else if(ch1==2)
 {
     return 0;
 }
 else
 {
     cout<<"Wrong Input"<<endl;

}
getch();
 return 0;
}