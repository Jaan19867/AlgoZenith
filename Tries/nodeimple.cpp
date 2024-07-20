#include<bits/stdc++.h>

using namespace std;


class Node {
    public: 
    Node* arr[26];
    bool flag=false; 

    bool contains(Node* node, char c){
        return (node->arr[c-'a'] !=NULL);
    }

    void put(char c , Node* newNode){
                 arr[c-'a']=newNode;
    }


    Node* getNext(char ch ){
        return arr[ch-'a'];

    }

    void setFlag(){
        flag=true; 
    }

    bool isFlagsSet(){
        return flag; 
    }

    
};

Node* root= new Node();


void insert(string word){
         Node* temp=root;

        for(int i=0;i<word.size();i++){
             // there might be a previous instance of s[i]
             // previous there was word , now i am inserting worse
         if(!temp->contains(temp, word[i])){

            Node* newNode= new Node();
            // temp->arr[word[i]-'a']=newNode;
            temp->put(word[i],newNode);

         }

        //  temp=temp->arr[ch-'a'];
        temp=temp->getNext(word[i]);

              

        }

        temp->setFlag();  
}


bool  search(string word){
    Node* temp=root; 

    for( int i=0;i<word.size();i++){
        if(temp->contains(temp, word[i])){
            // agar contains , kar raha he to moove to the next 
            temp=temp->getNext(word[i]);


        }else{
            return false; 
        }

    }

    // hame neeche wale ko bhi function me chagne kar sakte he 


    if(temp->flag==true){
        return true;  

    }else{
        return false; 
    }

}

bool startsWith(string word){
    Node* temp =root; 
    for( int i=0;i<word.size();i++){

        if(temp->contains(temp , word[i])){
            temp=temp->getNext(word[i]);

        }else{
            return false; 
        }
    }
    return temp->isFlagsSet();
}


void solve(){
    
      



}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin>>T;
    while(T--)
        solve();
}