//#include<iostream.
using namespace std;
//                               TASK 01 #  STUDENT RECORD
class Student{
//               access specifier
private:
//                	class data
	string name;
	int rollno;
	float marks;
//              	class function
public:
	void getdata(){
	cout<<"Enter studet name :"<<endl;
	cin>>name;
	cout<<"Enter rollno :"<<endl;
	cin>>rollno;
	cout<<"Enter marks :"<<endl;
	cin>>marks;
	}
	void displaydata(){
	cout<<"Student name :"<<name<<endl;
	cout<<"Rollno :"<<rollno<<endl;
	cout<<"Marks :"<<marks<<endl;}
};
int main(){
	Student s1;
	s1.getdata();
	s1.displaydata();	
	return 0;
}







                        //     TASK 02#RECTANGLE


//#include<iostream>
//using namespace std;
//class Rectangle{
      //access specifier
//private:	
    //attributes
//	int length;
//	int width;
//public:
//	void setDimension();
//	int area() ;
//	int perimeter();
//};
//function defination 
//void Rectangle::setDimension(){
//	cout<<"Enter the value of length: ";
//	cin>>length;
//	cout<<"Enter the value of width :";
//	cin>>width;
//	
//	
//}
// int Rectangle::area(){
//	return length*width;
//}
//int Rectangle::perimeter(){
//	return 2* (length+width);
//	
//}
//int main(){
//	Rectangle rec;
//	rec.setDimension();
//	cout<<"Area of rectangle is : "<<rec.area()<<endl;
//	cout<<"perimeter of rectangle is :"<<rec.perimeter();
//	
//return 0;	
//	
//}



                 //            Task#3     ....voting...
//#include<iostream>
//using namespace std;
//class Voter{
     //Access specifier
//	private:
//artibute
//	string name;
//	int age;
//	public:
//	void setdata();
//	 bool iseligible();
//	
//};
//void Voter::setdata(){
//	cout<<"Enter name : ";
//	cin>>name;
//	cout<<"Enter age : ";
//	cin>>age;
//}
// bool Voter::iseligible(){
//   return age>18;
//   }
//int main(){	
//Voter v;
//v.setdata();
//if(v.iseligible()){
//	cout<<"You are eligible for vote :"<<endl;	
//	
//	}else{
//		cout<<"You are not eligible :"<<endl;
//	}
//	return 0;
//	
//}	




//                Task 04....temperature converter...

//class Temperature{
//	public:
//		float Celsius;
//		
//		float converttoFahrenheit(){
//		return (Celsius *9/5)+32;
//		
//}
//void display(){
//	cout <<Celsius<<"celsius is equal to :"<<converttoFahrenheit()<<"fahrenheit"<<endl;	}
//	
//};
//
//int main(){
//	Temperature Temp;
//	cout<<"Enter temprature in celsius :"<<endl;
//	cin>>Temp.Celsius;
//	Temp.display();
//	
//	return 0;
//	}
	
	
	
            //task 05#CALCULATOR
//#include<iostream>
//using namespace std ;
//class Calculator{
//	float num1;
//	float num2;
//	public:
//		void setnumber(){
//			cout<<"enter first number :"<<endl;
//			cin>>num1;
//			cout<<"enter second number :"<<endl;
//			
//		}
//		float add(){
//			return num1+num2;
//		}
//		float subtract(){
//			return num1-num2;
//		}
//		float multiplay(){
//			return num1*num2;
//		}
//		float division(){
//			if(num2!=0){
//			return	num1/num2;
//			}
//			else{
//			cout<<"Invalid "<<endl;
//			}
//		}
//};
//int main(){
//	float num1,num2;
//	int choice;
//	Calculator cal;
//	cal.setnumber();
//	cout<<"choose operation :"<<endl;
//	cout<<"1.Add "<<endl;
//	cout<<"2.subtract "<<endl;
//	cout<<"3.multiply "<<endl;
//	cout<<"4.divide "<<endl;
//	cout<<" Enter your choice (1-4) :"<<endl;
//		cin>>choice;
//	switch (choice){
//		case 1:
//		cout<<"Result :"<<cal.add()<<endl;
//		case 2:
//			cout<<"Result :"<<cal.subtract()<<endl;
//			case 3:
//						cout<<"Result :"<<cal.multiplay()<<endl;
//						case 4:
//								cout<<"Result :"<<cal.division()<<endl;
//		break;
//		default:
//			cout<<"invalid choice ";
//			return 0;
//							
//				
//	}
//	
//	
//}
                 //task#6




//#include<iostream>
//using namespace std;
//class Product{
//private:
//	string name;
//	double price;
//	int quantity;
//	
//	
//	public:
//		void setName(string n){
//			if(n.empty()){
//		cout<<"Invalid name."<<endl;		
//			}
//			else{
//				name=n;
//			}
//		}
//	void setPrice(double p){
//		if(p>0){
//			price=p;
//		}
//		else{
//			cout<<"Invalid price :"<<endl;
//		}
//	}
//	void setQuantity(int q){
//		if(q>=0){
//			quantity =q;
//		}
//		else{
//			cout<<"Invalid quantity:";
//		}
//	}
//	string getName(){
//		return name;
//	}
//	double getprice(){
//		return price;
//	}
//	int getquantity(){
//		return quantity;
//	}
//};
//int main(){
//	Product p;
//	p.setName("");
//	p.setPrice(-50);
//	p.setQuantity(-2);
//	
//	
//	p.setName("Laptop");
//	p.setPrice(1200.50);
//	p.setQuantity(5);
//	
//	cout<<"Product :"<<p.getName()<<endl;
//	cout<<"price: "<<p.getprice()<<endl;
//	cout<<"Quantity :"<<p.getquantity()<<endl;
//	return 0;
//	
//}