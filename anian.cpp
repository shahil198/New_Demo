#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod  1000000007
#define endl '\n'
#define all(arr) arr.begin(),arr.end()
#define sortall(arr) sort(arr.begin(),arr.end())
#define sortallr(arr) sort(arr.rbegin(),arr.rend())
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define rep(arr,i,n) for(int x=i;x<n;x++)
#define repr(arr,n,i) for(int x=n-1;x>=i;x--)
#define vi(arr) vector<int>arr
#define vin(arr,n) vector<int>arr(n)
#define vll(arr) vecot<ll>arr
#define vlln(arr,n) vector<ll>arr(n)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define min3(a,b,c) min({a,b,c})
#define min4(a,b,c,d) min({a,b,c,d})
#define vvi(arr,n) vector<vector<int>>arr(n,vector<int>(n))
#define vvij(arr,n,m) vector<vector<int>>arr(n,vector<int>(m))
#define ai(arr,n) for(int i=0;i<n;i++) { cin>> arr[i];}
#define ao(arr,n) for(int i=0;i<n;i++) { cout<<arr[i]<<" ";}
#define mi(arr,n) for(int i=0;i<n;i++)for(int j=0;j<n;j++){cin>>arr[i][j];}
#define mij(arr,n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++){cin>>arr[i][j];}
#define mo(arr,n) for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<arr[i][j]<<" ";}cout<<endl;}
#define PI 3.1415926535897932384626
#define deb(x) std::cout<< #x <<" "<<x<<endl   
#define deb2(x, y) cout<<#x<<"= "<<x<<" "<<#y<<"= "<<y<<endl

int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int i=0;
	int f=0;
	if(n==1 and k>0)
	{
		cout<<0;
		return 0;
	}
	while(i<s.size() and k>0 )
	{
		if(s[0]=='1' and f==0)
		{
			i++;
			f=1;
			continue;
		}
        else if(s[0]!='1' and f==0)
        {
         s[0]='1';
         i++;
         k--;
         f=1;
         continue;
        }
        if(s[i]=='0')
        {
        	i++;
        	continue;
        }
        s[i]='0';
        i++;
        k--;

	}
	cout<<s;
	return 0;
}