//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
vector<pair<string, int> > sortMarks(vector<pair<string, int> > v, int N);
//Position this line where user code will be pasted.
// Driver code
int main() {

	int testcase;
	cin >> testcase;

	while(testcase--){
	    int N;
	    cin >> N;

	    // Declaring vector
	    vector<pair<string, int> > v;

	    // Taking input to vector
	    for(int i = 0;i<N;i++){
	        string s;
	        cin >> s;
	        int k;
	        cin >> k;
	        v.push_back(make_pair(s, k));
	    }

	    // Calling function
	    v = sortMarks(v, N);

	    // Printing student name with their marks
	    for(vector<pair<string, int> >::iterator it = v.begin(); it!=v.end();it++){
	        cout << it->first << " " << it->second << endl;
	    }

	}

	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*Function to sort students with respect to their marks
* v : vector input with student name and their marks
* N : size of vector
* Your need to implement comparator to sort on the basis of marks.
*/
bool compe(const pair<string, int> &it1, const pair<string, int> &it2)
{
    bool retVal = true;
    if(it1.second > it2.second)
        retVal = true;
    else if(it1.second < it2.second)
        retVal = false;
    if(it1.second == it2.second)
        retVal = true;
    // else
        // retVal = (bool)strncmp((it1.first).c_str(), (it2.first).c_str(),
        //     min(strlen((it1.first).c_str()), strlen((it2.first).c_str())));
    return retVal;
}
vector<pair<string, int> > sortMarks(vector<pair<string, int> > v, int N){

    sort(v.begin(), v.end(), compe);
    return v;
    //Complete the code and return the sorted vector
}

