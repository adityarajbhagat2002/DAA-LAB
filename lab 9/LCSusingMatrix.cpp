#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cout<<"String s1 : "; cin>>s1;
    cout<<"String s2 : "; cin>>s2;

    int mat[s1.size()+1][s2.size()+1];
    int i,j;
    for(i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){
            if(i==0 || j==0)
            mat[i][j] = 0;
        }
    }
    for(i=1;i<=s1.size();i++){
        for(j=1;j<=s2.size();j++){
                if(s1[i-1]==s2[j-1]){
                    mat[i][j] = mat[i-1][j-1] + 1;
                } else {
                    mat[i][j] = max(mat[i][j-1],mat[i-1][j]);
                }
        }
    }

    for(int i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){
            cout<<mat[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl<<mat[s1.size()][s2.size()]<<endl;
    return 0;
}