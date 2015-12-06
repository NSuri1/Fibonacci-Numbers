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
	cout<<a;
	b=a;
	cout<<a<<" + "<<b;
	a=a+b;
	cout<<a;
	}
	
cout<<"Test \n";

}

void nalin()
{
  vector<int> fibnums(2);
    int end=0;
    
   
    fibnums[0]=0;
    fibnums[1]=1;
    
    cout<< "Enter a number to stop the fibonacci sequence before\n";
    cin>> end;
    
//    while (fibnums[count]<= end)
//    {
//        cout<< fibnums[count]<<endl;
//        count++;
//    }
    
    for(int count=2; fibnums[count]<=end; count++)
    {
    	fibnums[count]= fibnums[count-2]+fibnums[count-1];
    	cout<< fibnums[count]<<endl;
	}
}
