#include<iostream>
class Calc
{       public:
	    int a,b;
        int substract(int a ,int b);
        int multiply(int a ,int b);
        int add(int a ,int b);
        float divide(int a ,int b);
};
int main()
{
   int func;
   int firstnumber,secondnumber,result;
   
   cout<<"1.substract"<<endl; 
   cout<<"2.multiply"<<endl;
   cout<<"3.add"<<endl;
   cout<<"4.divide"<<endl;
   cout<<"Which operator you want to use to perform calculations="<<endl;
   cin>>func;
   cout<<endl;
   cout<<"Enter first number="<<endl;
   cin>>firstnumber;
   cout<<"Enter second number="<<endl;
   cin>>secondnumber;
   cout<<"1st number="<<firstnumber<<endl;
   cout<<"2nd number="<<secondnumber<<endl;
}
   



