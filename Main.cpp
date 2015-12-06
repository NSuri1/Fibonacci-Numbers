#include <iostream>
#include <vector>
using namespace std;
int main()
{
int a=1,b,c,counter=7;

for(int i;i>counter;i++){
	cout<<a;
	b=a;
	cout<<a<<" + "<<b;
	a=a+b;
	}
	
cout<<"Test \n";
	
	
	
   /* vector<int> fibnums;
    int end=0;
    int count=2;
    
    fibnums[count]=fibnums[count-2]+fibnums[count-1];
    fibnums[0]=0;
    fibnums[1]=1;
    
    cout<< "Enter a number to stop the fibonacci sequence before!n";
    cin>> end;
    
    while (fibnums[count]<= end)
    {
//    	if(count=0)
//    	{
//    		break;
//		}
        cout<< fibnums[count]<<endl;
        count++;
    }*/
    return 0;
}
