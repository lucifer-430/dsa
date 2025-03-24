#include<iostream>
using namespace std;
//printing the subsequences

//vector pe ans bhi store krskte hai bt byreference 
void subseq(string seq,int size,int index,string output){
    //base condition
    if(index==size){
        cout<<output<<endl;
      return;
    }

    //calling
    char ans=seq[index];
    //include
         subseq(seq,size,index+1,output+ans);
    //exclude
         subseq(seq,size,index+1,output);
}

int main(){
    string seq="abc";
    int size=3;
    int index=0;
    string output="";
    subseq(seq,size,index,output);

}