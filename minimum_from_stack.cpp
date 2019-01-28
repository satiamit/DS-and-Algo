//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
stack<int>_push(int arr[],int n);
void _getMinAtPop(stack<int>s);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/* inserts elements of the array into 
   stack and return the stack
*/
stack<int>_push(int arr[],int n)
{
   // sort(arr, arr+n, [](int a, int b){ return a > b;});
    stack <int> st;
   for(int i=0; i<n; i++)
   {
       st.push(arr[i]);
   }
   return st;
}
/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    //cout << s.size() << " s.size()" << endl;  
    while(!s.empty())
    {
        
        vector<int> v(s.size());
        int minimum = s.top();
        for(int i=0; i<v.size(); i++)
        {
            v[i] = s.top();
            minimum = min(minimum, v[i]);
            s.pop();
        }
        cout << minimum << " ";
        reverse(v.begin() + 1, v.end());
        for(int i=1; i<v.size(); i++)
        {
            s.push(v[i]);
        }
        s.pop();
    }
    cout << endl;
}
