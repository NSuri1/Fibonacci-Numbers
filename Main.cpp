#include <iostream>
#include <vector>
using namespace std;
void juan();
void nalin();

int main()
{
    
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
	const int SIZE=2500;
	long arr[SIZE]={1, 1};
  vector<long> fibnums(2, 1);
    int end=0;
    int count=2;
    
    cout<< "Enter a number to stop the fibonacci sequence before\n";
    cin>> end;
    cout<<arr[0]<< ", "<< arr[1]<< ", ";
    
    for(int count=2; arr[count]<=end; count++)
    {
    	arr[count]= arr[count-2]+arr[count-1];
    	cout<< arr[count]<<", ";
    	
	}
    
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
