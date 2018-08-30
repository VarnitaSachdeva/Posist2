#include<iostream>
#include <sstream>  // for string streams
#include <string>  // for string
#include<stdlib.h>
using namespace std;

struct data{
    int id;
    int value;
    string owner_name;
    };
struct timestamp {
   int sec;
   int minte;
   int hour;
   int year;
   int month;
   int date;
}tm;
struct node{
    struct data d;
    struct node *left;
    struct node *right;
int nodeNumber;//unique incremental node value
string nodeID;//unique identify a node
string refrenceNodeId;//address of parent node
string childRefrenceNodeId;//address of child node
string genesisRefrenceNodeId;//address of genesis node
};
struct node *genesis=NULL;
int main(){
    int ch;
    int nodeId=127;
    int ownerID=789;
    cout<<"input time- Hour, minute,second,date,month,year";
    cin>>tm.hour>>tm.minte>>tm.sec>>tm.date>>tm.month>>tm.year;
    cout<<"Time:"<<tm.hour<<":"<<tm.minte<<":"<<tm.sec;
    cout<<"Date:"<<tm.date<<"/"<<tm.month<<"/"<<tm.year;
    ostringstream str1;
    cout<<"CREATE GENESIS NODE\N";
    genesis=(struct node*)malloc(sizeof(struct node));
    genesis->nodeNumber=1;
    str1 << nodeId;
    string nodeID= str1.str();
    genesis->nodeID=nodeID;
    nodeId++;
    genesis->refrenceNodeId="NULL";
    int addrss=1456;
    str1<<addrss;
    string adress=str1.str();
    genesis->genesisRefrenceNodeId=adress;

    genesis->d.value=50;
    genesis->d.id=ownerID;
    ownerID++;
    genesis->d.owner_name="varnita";
    genesis->left=NULL;
    genesis->right=NULL;
    cout<<genesis->nodeNumber<<" "<<genesis->nodeID<<" "<<genesis->refrenceNodeId<<" "<<genesis->genesisRefrenceNodeId<<" "<<genesis->d.id<<" "<<genesis->d.owner_name;
    return 0;
    while(1){
        cin>>ch;
        switch(ch){
        case 1: cout<<"you have chosen to create genesis node\n";
                exit(1);
                //for hashing-
     /* case 2:
        cout<<"you have chosen to input a child node\n";
        int input;
        cin>>input;
        insert1(genesis,input);
        break;
      case 3:

        }*/

        /*class Block{
  constructor(index, previousHash, timestamp, data, hash) {
  this.index=index;
  this.previousHash = previousHash.toString();
  this.timestamp = timestamp;
  this.data = data;
  this.hash = hash.toString();
    }
}

var calculateHash=(index, previousHash, timestamp, data) => {

    return CryptoJS.SHA256(index + previousHash + timestamp + data).toString();
}; */

    }
}
}

