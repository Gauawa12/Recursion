
You are given a string s. You need to print the lexicographically sorted power-set of the string.
Note: The string s contains lowercase letter of alphabet.

Input Format:
The first line of input contains T, denoting the number of testcases. T testcases follow. Each testcases contains one line of input containing string s.

Output Format:
For each testcase, in a new line, print the lexicographically sorted sub-sets of the powerset of s. Each subset is separated by a space.

Your Task:
This is a function problem. You only need to complete the function powerSet that takes string s as parameter and returns a vector/ArrayList of subsets. The lexicographic-sorting and printing is done automatically by the driver code.

Constraints:
1 <= T <= 100
1 <= |s| <= 10

Examples:
Input:
2
a
abc
Output:
 a
 a ab abc ac b bc c

Explanation:
Testcase1: space and a are only sets.
Testcase2: space,  a, ab, abc, ac, b, bc, c are the sets.


Sol:

void helper(vector<string>&v,string s)
{
    if(s.size()==0)
    {  
        string x="";
        v.push_back(x);
        return;
    }
    
     helper(v,s.substr(1));//to passthe remaining string
     int k=v.size();
    for(int i=0;i<k;i++)
    {
        string t(1,s[0]);
        t+=v[i];
        v.push_back(t);
        t="";
    }
   
}

vector <string> powerSet(string s)
{
   
   vector<string>t;
   helper(t,s);
   
   return t;
}

