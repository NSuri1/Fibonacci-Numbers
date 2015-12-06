#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<long> nums(2,1);
    int end=0;
    int i=2;
    int temp1;
    int temp2;
    
    cout<< "Enter a number to stop the fibonacci sequence before\n";
    cin>> end;

do
{
    temp1= nums[i-2];
    temp2= nums[i-1];
    nums.push_back(temp1+temp2);
	
	if(nums[i]>end)
	{
//		nums.pop_back();
		break;
	}   
	i++; 
}	
while(i!=-1);

for (int start=0; start<nums.size(); start++)
	{
		cout << nums[start] << endl; 
	}
	
return 0;
	
}

