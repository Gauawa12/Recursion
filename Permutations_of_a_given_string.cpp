
Given a string S. The task is to print all permutations of a given string.

Input:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

Output:
For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

Constraints:
1 ≤ T ≤ 10
1 ≤ size of string ≤ 5

Example:
Input:
2
ABC
ABSG

Output:
ABC ACB BAC BCA CAB CBA 
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA

Explanation:
Testcase 1: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .


Sol:

  
#include <bits/stdc++.h>
using namespace std;

void helper(string &s,int i,vector<string>&v)
{
    if(i==s.length()-1)
    {
        v.push_back(s);
        return;
    }
    
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        helper(s,i+1,v);
        swap(s[i],s[j]);
    }
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    vector<string>v;
	    helper(s,0,v);
	    sort(v.begin(),v.end());
	    for(auto x:v)
	    {
	        cout<<x<<" ";
	    }
	    v.clear();
	    cout<<endl;
	}
	return 0;
}

