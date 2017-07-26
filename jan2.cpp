#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main () {
   int t,a,b,c,e,f,g,n,m,o;
   char d;
   char block[1000][1000];
   vector<string>s;
  cin >>t;
  for (a =0;a<t;a++) {
    cin >> n >>m;
     o = 0;
     for (b=0;b<n;b++) {
       for (c=0;c<m;c++){
         cin >>d;
         block[b][c] = d;
       }
     }
     for (e=0;e<n;e++) {
       if (block[e][0]=='W' or block[e][m-1]=='W'){
         cout << "no"<< endl;
         o = o+1;
         break;
       }
         else {
           for (f=0;f<m;f++){
             if (block[e][f] == 'B' and ( block[e+1][f]=='W' or block[e+1][f]=='A') ) {
               cout << "no" << endl;
               o = o+1;
               break;
             }else {
               if (block[e][f]=='W' and (block[e][f-1] == 'A' or block[e][f+1] == 'A' or block[e+1][f] == 'A' ) ) {
                 cout << "no" << endl;
                 o = o+ 1;
                 break;
               }else {
 
               }
             }
 
         }
       }
         }
       if (o==0) {
         cout << "yes" << endl;
       }else {
 
       }
 
       }
 
 
 
 
  return 0;
}
