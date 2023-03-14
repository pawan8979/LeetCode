//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    
    vector <int> calculateSpan(int price[], int n)
    {
       stack<pair<int,int>> s;
       vector<int> ans;
       for(int i=0;i<n;i++)
       {
           int count= 1;
            while(!s.empty() && s.top().first <= price[i])
            {
                count+= s.top().second;
                s.pop();
            }
            ans.push_back(count);
            s.push({price[i], count});
        }
    return ans;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends