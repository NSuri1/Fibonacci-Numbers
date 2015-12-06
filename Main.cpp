#include <iostream>
#include <vector>
using namespace std;
void juan();
void nalin();

int main()
{
    nalin();
    return 0;
}

void juan(){
int a=1,b,c,counter=3;

for(int i=0;i<counter;i++){
	cout<<a<<" ";
	b=a;
	cout<<a<<" + "<<b;
	a=a+b;
	cout<<a<<" ";
	}
	
cout<<"Test \n";

}

void nalin()
{
//	const int SIZE=2500;
//	long arr[SIZE]={1, 1};
  	vector<int> fibnums;
    int end=0;
    int first=0;
    int second=1;
    
    cout<< "Enter a number to stop the fibonacci sequence before\n";
    cin>> end;
    
    fibnums[0]=second;
    fibnums[1]=first+second;
    
    for (int i=2; )
    
    
//    cout<<arr[0]<< ", "<< arr[1]<< ", ";
//    for(int i=2; arr[i]<=end; count++)
//    {
//    	cout<< arr[i]<<", ";	
//	}
    
//    cout<<fibnums[0]<< ", "<< fibnums[1]<< ", ";
//    
//    while (fibnums[count]<= end)
//    {
//    	fibnums[count]= fibnums[count-2]+fibnums[count-1];
//      cout<< fibnums[count]<< ", ";
//        count++;
//        for (int val : fibnums)
//		{
//			cout << val << endl; 
//		}
//    }
//    
//	    
//	for(int count=2; fibnums[count]<=end; count++)
//    {
//    	fibnums[count]= fibnums[count-2]+fibnums[count-1];
//    	cout<< fibnums[count]<<endl;
//	}
	
}
