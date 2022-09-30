#include<iostream>
using namespace std;

void reoccur(int *arr,int n)
{
    int count=0;
    int res=0;
    int i=0;
    while(i<n-1)
    {
        int ans=arr[i];
        if(ans!=arr[i+1])
        {
        count++;
        }
        else
        {
        res++;
        }
        i++;
    }
    
    if(count==(n-1))
    {
    cout<<"No"<<endl;
    return;
    }
   
    if(res==(n-1))
    {
    cout<<"No"<<endl;
    }
    else{
    if(res)
    cout<<"Yes"<<endl;
    }
}
int main() {
	 int t;
	 cin>>t;
	 while(t--)
	 {
	     int n;
         cin>>n;
	     int arr[n];
	     for(int i=0;i<n;i++)
	     {
	        cin>>arr[i];
	     }
	    reoccur(arr,n);
	 }
	return 0;
}
