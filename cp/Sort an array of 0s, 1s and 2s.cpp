//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int one=0,two=0,zero=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
             one++;
            else if(a[i]==2)
             two++;
            else
             zero++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(zero!=0)
            {
             a[i]=0;
             zero--;
            }
            
           else if(one!=0)
            {
                a[i]=1;
                one--;
            }
            
            else
            {
                a[i]=2;
                two--;
            }
             
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends