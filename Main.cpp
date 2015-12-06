#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> nums {1, 1};
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
    i++;    
}	
while(i<1000);

for (int val : nums)
	{
		cout << val << endl; 
	}
	
	return 0;
	
}

