#include<bits/stdc++.h>

using namespace std;


// this question is on based of 1804 Leetcode 
struct Node{
    Node* arr[26];

    int cntWordEnd=0;
    int cntPrefixes=0;

    bool contains(char c){
        return (arr[c-'a']!=NULL);
    }

    void put(){

    }

    Node* getNext(){
        return 
    }

    void increasewordsendWith(){
        cntWordEnd++;
    }

    void increaseCntPrefixes(){
        cntPrefixes++;
    }

    int getCountWordsEnd(){
        return cntWordEnd; 
    }

    int getCntPrefixes(){
          return cntPrefixes;
    }
}


void insert(string wotrd){
    Node* temp=root;

    for( int i=0;i<word.size();i++){

        if(!temp->contains(temp,word[i])){
            Node* newNode=new Node();
            temp->put(word[i],newNode);
        }

        temp->increaseCntPrefixes();
        temp=temp->getNext(word[i]);

    }
    temp->increasewordsendWith();
}


int startWith(string word){
    Node* temp=root;

    for( int i=0;i<word.size();i++){
        if(temp->contains(word[i])){
            temp=temp->getNext();
        }else{
            return 0 ; 
        }
    }
    return temp->getCntPrefixes();
}

void erase(string word){

    Node* temp=root;

    if(search(word)==0) return ;

    for( int i=0;i<word.size();i++){
        temp->decreaseCntPrefixes();
        temp->getNext();
    }
    temp->decreaseWordsEdsWith();

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