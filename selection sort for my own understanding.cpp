#include<iostream>
using namespace std;
int main()
{
	int arr[]={4,6,3,7,9};
	for(int i = 0; i < 5; i++)
	{
		cout<<"i is "<<i<<endl;
		for(int j = i + 1; j < 5; j++)
		{
			cout<<"j is "<<j<<endl;
			if(arr[i] > arr[j])
			{
				cout<<"arr["<<i<<"] is "<<arr[i]<<endl;
				cout<<"arr["<<j<<"] is "<<arr[j]<<endl;
				int temp = arr[i];
				cout<<"temp is "<<arr[i]<<endl;
				arr[i] = arr[j];
				cout<<"arr["<<i<<"] is "<<arr[i]<<endl;
				arr[j] = temp;
				cout<<"arr["<<j<<"] is "<<arr[j]<<endl;
			}
			else
			{
				cout<<arr[i]<<" wasn't greater than "<<arr[j]<<endl;
			}
		}
		cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<endl;
	}
}
