#include<iostream>
#include"Student.h"
#include"Rectangle.h"
#include"Voter.h"
#include"Product.h"
#include"Calculator.h"
#include"Temprature.h"
using namespace std;
//                               TASK 01 #  STUDENT RECORD

//int main(){
//	Student s1;
//	s1.getdata();
//	s1.displaydata();	
//	return 0;
//}







                        //     TASK 02#RECTANGLE




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
//int main(){
//	Temperature Temp;
//	cout<<"Enter temprature in celsius :"<<endl;
//	cin>>Temp.Celsius;
//	Temp.display();
//	
//	return 0;
//	}
	
	
	
            //task 05#CALCULATOR


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






int main(){
	Product p;
	p.setName("");
	p.setPrice(-50);
	p.setQuantity(-2);
	
	
	p.setName("Laptop");
	p.setPrice(1200.50);
	p.setQuantity(5);
	
	cout<<"Product :"<<p.getName()<<endl;
	cout<<"price: "<<p.getprice()<<endl;
	cout<<"Quantity :"<<p.getquantity()<<endl;
	return 0;
	
}