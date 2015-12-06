#include <iostream>
#include <vector>
using namespace std;
int main()
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
    
    return 0;
}
