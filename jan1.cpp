https://www.codechef.com/JAN17/problems/CATSDOGS/



#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
 
using namespace std;
 
int main() {
	// your code goes here
	int t;
	long int c,d,l;
	cin>>t;
vector<string>cd;
	for(int i=0;i<t;i++){
	   cin>>c>>d>>l;
		 if ( l%4 == 0  && l<=4*(c+d) ){
			  if (c > 2*d  ) {
			 if (l>=4*(c-d) ) {
			  cd.push_back("yes");
			}
			 else{
			cd.push_back("no");
			}
			}
			else {
				if (l>=4*d ) {
					cd.push_back("yes");
				} else {
					cd.push_back("no");
				}
 
 
 
 
 
			}
		}
	 else {
 
 
		cd.push_back("no");
 
			}
 
 
 
 
}
for (int k =0 ; k<t; k++) {
  cout << cd [k] <<endl;
}
 
 
    return 0;
}
