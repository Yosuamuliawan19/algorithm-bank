#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,k,index,x,left=0,right=0;
	long long int t,cost=0;
	vector<long long int> time;
	cin>>n>>k>>t;
	if(k>n||t==0)
		cout<<-1<<endl;
	else
	{
		for(int i=0;i<n;i++)
		{
			cin>>x;
			time.push_back(x);
			if((time[i]>t) && (i<(k)))
			{
				cost+=(time[i]-t);
				time[i]=t;
			}
		}
		sort(time.begin(),time.end());
		if(time[k]==time[k-1])
		{
			//cek kiri
			index=k-1;
			while(index>=0)
			{
				if((time[k]==time[index] )&&  (time[index]-1>=0))
				{
					left++;
					index--;
				}
				else
					break;
			}
			index=k;
			while(index<n)
			{
				if((time[k-1]==time[index])&&(time[index]+1<=t))
				{
					right++;
					index++;
				}
				else
					break;

			}
		}
			if(left==0)
				left=999;
			if(right==0)
				right=999;

			if(left<right)
			{
				if(left==0)
					cost+=right;
				else
					cost+=left;
			}
			else if(left>right)
			{
				if (right==0)
					cost+=left;
				else
					cost+=right;
			}
			else if(left==right && right!=999)
				cost+=right;
			cout<<cost<<endl;

	}

}