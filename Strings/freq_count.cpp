    #include<iostream>
    using namespace std;

    void freqCount(string s){
        int size =s.length();
        bool visited[size]={false};
        for(int i=0;i<size;i++){
            if(visited[i]){
                continue;
            }
            int count=0;
            for(int j=0;j<size;j++){
                if(s[i]==s[j]){
                    count++;
                    visited[j]=true;
                }
            }
            cout<<s[i]<<" has occurred "<<count<<" times."<<endl;
        }
    }
    int main(){
        string s1;
        cout<<"Enter String:";
        getline(cin,s1);
        freqCount(s1);
    }