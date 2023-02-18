#include<iostream>

using namespace  std;
class Hero{
	//properties/datamembers
   char name[100];
   private:
   int health;
   public:
   char level;
   //default constructor
   Hero(){
   	cout<<"Constructor called";
   }
   
   //parameterzied constructor
   Hero(int health,char level){
   	cout<<"this->"<<this<<endl;
   	this->health=health;
   	this->level=level;
   }
   
   //copy constructor
   Hero(Hero &temp){
     this->health=temp.health;
     this->level=temp.level;
   }
   
   void print(){
   	cout<<health<<endl;
   	cout<<level<<endl;
   }
   int getHealth(){
   	return health;
   }
   char getLevel(){
   	return level;
   }
   void setHealth(int h){
   	health=h;
   }
   void setLevel(char ch){
   	level=ch;
   }
};
int main()
{
	
	
	
	Hero suresh(70,'C');
	suresh.print();
	
	
	//copy constructor
	Hero ritesh(suresh);	
   ritesh.print();
	
	
	
	
	
	
	
	
	
	
	//static allocation
//	Hero h1(10);
//	cout<<&h1;
//	h1.getHealth();
	//	a.setHealth(80);
//	a.setLevel('B');
//	cout<<"level is "<<a.level<<endl;
//	cout<<"health is "<<a.getHealth()<<endl;
//	//dynamic allocation
//	Hero *b=new Hero; 
//	b->setLevel('A');
//	b->setHealth(70);
//	cout<<"level is "<<(*b).level<<endl;
//	cout<<"health is "<<(*b).getHealth()<<endl;  //b-> 
////	//creation of object
//	Hero h1; //ye class ka object bna dia mtln hero type ka ek object bna dia
//    //cout<<"size: "<<sizeof(h1)<<endl;	
//    	h1.setHealth(70);
//	cout<<"health is:"<<h1.getHealth()<<endl;
//	
////	h1.health=70;
//    h1.level='A';
//    //access data members using dot operator
//    //cout<<"health is: "<<h1.health<<endl;
//    cout<<"level is: "<<h1.level<<endl;
}
