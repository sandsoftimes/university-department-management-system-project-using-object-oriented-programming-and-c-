#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Classroom{
	private:
		int room;
		char floor;
		int capacity;
		char firstline_classroom[10];
	public:
		void first_line_classroom(char *line){
			
			strcpy(firstline_classroom,line);
		}
	
	    void display_firstline_classroom(){
	    	
	    	cout<<firstline_classroom<<" ";
		}
	void read_data_classroom(int a,char b,int c){
		
		room=a;
		floor=b;
		capacity=c;
		
	}
	
	void display_data_classroom(){
		
		cout<<room<<" ";
		cout<<floor<<" "<<capacity<<endl;
		
	}
	
	
};


class Address{
	private:
	int house_no;
	int street;
	char city[20];
	char firstline_Address[20];
	 public:
	 	void first_line_Address(char*line){
	 		strcpy(firstline_Address,line);
	 		
		 }
       void show_first_line_Address(){
       	  cout<<firstline_Address;
       	  cout<<" ";
       	 }
       	 
	 void read_data_address(int a,int b,char *c){
	 	house_no=a;
		 street=b;
	 	strcpy(city,c);
	 	
	 }
	 
    void show_read_data_Address(){
    	
    	cout<<" house_no "<<house_no<<" ";
    	cout<<" street no "<<street<<" ";
	    cout<<" city "<<city<<" ";
	    cout<<endl;
	}

char set_value(char *n){
	int z;
	for(int i=0;i<3;i++){
	
	if(city[i]==n[i])
	{
		z++;
      
	}
	else (z=0) ;
	
}
return z;
}

};

class Course{
	private:
		char title[50];
		char code[50];
	    int crdHrs;
	    char stream[20];
    public:
    	void read_data_Course(char *a,char *b,int c,char *d){
    		strcpy(title,a);
    		strcpy(code,b);
    		crdHrs=c;
    		strcpy(stream,d);
    		
		}
		void display_data_Course(){
			cout<<title<<" ";
			cout<<code<<" ";
			cout<<crdHrs<<" ";
			cout<<stream<<" ";
			cout<<endl;
			
		}
        
         char *give_values_of_Course()
         {
         	char* tit,*cod,*stream;
			 int crd;
			 tit=title;
			 return tit;
		 }
		 
		 
};

class Person{
	private:
	char cnic[20];
	char name[20];
	char contact[20];
	public:
    Address a;
void read_data(char *nam, char *a,char *c){

strcpy(cnic,a);
strcpy(name,nam);
strcpy(contact,c);	
}
void display(){
	cout<<"\t\t\t\t\tName is\t"<<name<<"\n";
	cout<<"\t\t\t\t\tCnic is\t"<<cnic<<"\n";
}
void display1(){
	cout<<"\t\t\t\t\tContact no is\t"<<contact<<"\n";
}

};

class student:public Person{
	private:
	char firstline[20];
	int rollno;
	char program[50];
	float cgpa;
    public:
    	Classroom classes;
    	Course C;
    	void first_line(char *line){
    		strcpy(firstline,line);
		}
		void show_firstline(){
			cout<<firstline;
            cout<<" ";			
		}
		
		void read_data_student(int r,int e,char *d){	
    		rollno=r;
    		strcpy(program,d);
    		cgpa=e;	
		}
		void display_data_student(){
			
			Person::display();
			
			cout<<"\t\t\t\t\tRollno is\t"<<rollno<<"\n";
			cout<<"\t\t\t\t\t\tCgpa is\t"<<cgpa<<"\n";
			cout<<"\t\t\t\t\tProgram is\t"<<program<<"\n";
			Person::display1();
			cout<<endl;
		}
		void assign_values_to_student(int a){
		  
		  C.give_values_of_Course();
		  
		}
		void get_rollno_of_student(int a){
			if(a==rollno)
			{
			display_data_student();
			cout<<"\t\t\t\t\tCourse is "<<"\t"<<C.give_values_of_Course()<<endl;
			 
			}
			
		}
		
		
		
		
};
class Faculty:public Person{
	private:
		int Emp_No;
	char Designation[20];
	char joining_date[20];
	char firstline[20];
	char b[50],c[50],d[50];
	public:
		Course C;
		
		void first_line(char *line){
    		strcpy(firstline,line);
		}
		void show_firstline(){
			cout<<firstline;
            cout<<" ";			
		}
	void read2_data(int a,char*b,char*c){
		   Emp_No=a;
		   strcpy(Designation,b);
		   strcpy(joining_date,c);
           	
	
	}
     void read_data_of_Courses_in_Faculty(char *a,char *a1,char *a2){
	 	
		 strcpy(b,a);
		 strcpy(c,a1);
		 strcpy(d,a2);
	
	 
	 }
	 
	
	void display_Faculty(){
		Person::display();
		cout<<"\t\t\t\t\tEMP NO IS\t"<<Emp_No<<"\n";
		cout<<"\t\t\t\t\tDesignation\t"<<Designation<<"\n";
		Person::display1();
		cout<<" ";
		cout<<"\t\t\t\t\tjoining_date\t"<<joining_date<<" "<<"\n";
		cout<<"\t\t\t\t\tCOURSES ARE\t"<<"\n\t\t\t\t\t\t"<<b<<"\n\t\t\t\t\t\t"<<c<<"\n\t\t\t\t\t\t"<<d;
		    	
	}
	int give_id_of_faculty(int x){
		
		if(x==Emp_No){
			return 1;
			
		}
		else return 0;
	}
		
	
};


int main(){

	char line[20],name[20],cnic[20],program[20],contact[20],title[50],code[50],stream[20],floor,temp[20];
char x[20]="0";
int Emp_No;
	char Designation[20];
	char joining_date[20];
	char city[20];
int plus=38,p=38,q=77,a=116,b=155,g=194,d=233,e=272,h=311,o=350,j=389,r,house_no,street,crdHrs,room,capacity;
float cgpa;
	student s[449];
	ifstream read;
	read.open("student.txt");
	for(int i=0;i<6;i++){
		read>>line;
		s[i].first_line(line);
		}
for(int i=0;i<=449;i++){

read>>name;

read>>cnic;

s[i].read_data(name,cnic,x);
read>>r;
read>>cgpa;
read>>program;
s[i].read_data_student(r,cgpa,program);
read>>contact;

s[i].read_data(name,cnic,contact);

}
read.close();
Faculty f[49];
//ifstream readf;
read.open("Faculty.txt");

for(int i=0;i<6;i++){
read>>line;
f[i].first_line(line);
}





for(int i=0;i<=50;i++){

read>>name;

read>>cnic;

f[i].read_data(name,cnic,x);

read>>Emp_No;

read>>Designation;

f[i].read2_data(Emp_No,Designation,joining_date);
read>>contact;
f[i].read_data(name,cnic,contact);
read>>joining_date;
f[i].read2_data(Emp_No,Designation,joining_date);

}

read.close();
Address A[500];
read.open("Address.txt");
for(int i=0;i<3;i++){

read>>line;
A[i].first_line_Address(line);

}

for(int i=0;i<=449;i++){
read>>house_no;
read>>street;
read>>city;
A[i].read_data_address(house_no,street,city);
s[i].a.read_data_address(house_no,street,city);
}

read.close();

Course c[39];
read.open("Courses.txt");
for(int i=0;i<39;i++){
read>>code;
title[0]='\0';
while(1){
	read>>temp;
	if(temp[0]=='1')
	{
	
	crdHrs=1;
	break;
}
	else if(temp[0]=='2'){
		
		crdHrs=2;
	break;
	}
else if(temp[0]=='3'){
	
	crdHrs=3;
break;
}
else{
strcat(title, temp);	
strcat(title," ");

}

}
read>>stream;
c[i].read_data_Course(title,code,crdHrs,stream);

s[i].C.read_data_Course(title,code,crdHrs,stream);
s[p].C.read_data_Course(title,code,crdHrs,stream);
s[q].C.read_data_Course(title,code,crdHrs,stream);
s[a].C.read_data_Course(title,code,crdHrs,stream);
s[b].C.read_data_Course(title,code,crdHrs,stream);
s[g].C.read_data_Course(title,code,crdHrs,stream);
s[d].C.read_data_Course(title,code,crdHrs,stream);
s[e].C.read_data_Course(title,code,crdHrs,stream);
s[h].C.read_data_Course(title,code,crdHrs,stream);
s[o].C.read_data_Course(title,code,crdHrs,stream);
s[j].C.read_data_Course(title,code,crdHrs,stream);
p++;
a++,b++,g++,d++,e++,h++,o++,j++;

}
read.close();



read.open("Courses.txt");


for(int i=428;i<=450;i++){
read>>code;
title[0]='\0';
while(1){
	read>>temp;
	if(temp[0]=='1')
	{
	
	crdHrs=1;
	break;
}
	else if(temp[0]=='2'){
		
		crdHrs=2;
	break;
	}
else if(temp[0]=='3'){
	
	crdHrs=3;
break;
}
else{
strcat(title, temp);	
strcat(title," ");

}

}
read>>stream;

s[i].C.read_data_Course(title,code,crdHrs,stream);



}


read.close();
Classroom C[10];
read.open("Rooms.txt");
for(int i=0;i<3;i++){

read>>line;
C[i].first_line_classroom(line);

}
for(int i=0;i<10;i++){
read>>room;
read>>floor;

read>>capacity;

C[i].read_data_classroom(room,floor,capacity);

}
cout<<"\t"<<"Press 1 To Show Names Of Students Hailing To Specific City:"<<"\n\n\t\t\t\t\t";
int num1;
cin>>num1;
if(num1==1){

char n[10];
cout<<"\n\n\t\t\tEnter City Name: \n\n\t\t\t\t";
cin>>n;

for(int i=0;i<=449;i++){
int z;
z=A[i].set_value(n);
if(z==3){
	s[i].display_data_student();cout<<"          ";
	A[i].show_read_data_Address();cout<<endl<<endl<<endl;
	}		
}
}
cout<<"\t\t\t\tPress 2 To Show Courses Related To Your Entered Rollno:\n\n\t\t\t\t\t\t\t";
int num2;
cin>>num2;
if(num2==2){

int rollno;
cout<<"\t\t\t\t\tEnter Rollno Of Student:\n\n\t\t\t\t\t\t";
cin>>rollno;
for(int i=0;i<449;i++){

s[i].get_rollno_of_student(rollno);
}
cout<<"\n\n";
char *arr_pointer_1,*arr_pointer_2,*arr_pointer_3;
char arr1[50],arr2[50],arr3[50];
for(int i=0;i<40;i++){

arr_pointer_1=c[i].give_values_of_Course();
strcpy(arr1,arr_pointer_1);
arr_pointer_2=c[i+1].give_values_of_Course();
strcpy(arr2,arr_pointer_2);
arr_pointer_3=c[i+2].give_values_of_Course();
strcpy(arr3,arr_pointer_3);
f[i].read_data_of_Courses_in_Faculty(arr1,arr2,arr3);
if(plus>37&plus<=50){

f[plus].read_data_of_Courses_in_Faculty(arr1,arr2,arr3);

plus++;
}
}
cout<<"\n\n\t";
}
cout<<"\t\t\t\tPress 3 To Print Courses Of Faculty Memeber You Entered:\n\t\t\t\t\t\t\t";
int num3;
cin>>num3;
if(num3==3)
{


int id;

cout<<"\t\t\t\t\t\tEnter The Employee Id:"<<"\n\t\t\t\t\t\t\t";
cin>>id;


for(int i=0;i<=50;i++){
	
	int x=f[i].give_id_of_faculty(id);
	if(x==1){
		
		f[i].display_Faculty();
	}
	
	
}

}




}
