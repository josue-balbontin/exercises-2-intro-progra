 
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  for (int i=0;i<=s1.size();++i){
    if(s1[i]==' '){
        cout<<i<<endl;
    }
  }
  cout<< s1.size()<<endl;
}

void exercise_2(string s1) {
       string word;
     int y=0;
if(s1==""){
    cout<<"";
}
else{
 for (int i=0;i<s1.size();++i){
    word=word+s1[i];
    if(s1[i]==' '){
        y=word.size();
        word[y-1]=']' ;
        cout<<"["<<word<<endl;
        word="";
        
    }
  }
    cout<<'['<<word<<']'<<endl;
}


}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
      int c=1;
    for(int i=0 ; i<s1.size();i++){
        if(s1[i]=='1'){
            cout<<"Om-nom-nom :P"<<endl;
            c++;
        }
        if(s1[i]=='0'){
            cout<<"No cake :("<<endl;
            break;
        }
        if(c>10){
            break;
        }

    }


}

void exercise_4(int n) {
      int i=1;
    int numb=1; 
        if(n<0){
            cout<<"El numero es negativo. Intentelo de nuevo"<<endl;
        }
        else if(n>14){
            cout<<"El numero es muy grande. Intentelo de nuevo"<<endl;
        }
        else {
            while(i<=n){
                numb=numb*i;
                i++;
            }
            cout<<numb<<endl;
        }
}

void exercise_5(int n, int k) {

    string space;
    for(int i=1;i<n;i++){
        space="   "+space;
    }
    cout<<space;
    for (int i=1;i<=k;i++){       
        if(i<10 ){
            if(i==1){
            cout<<" "<<i;
            space=space+"  ";
            }
            else{
            cout<<"  "<<i;
            space=space+"   ";
            }
        }
        else if (i>=10){
              cout<<" "<<i;
              space=space+"   ";
         }       
               
        if (i==k)
         {  cout<<" "<<endl;
            break;
         }
        if((space.size())%20==0){
            if(i+1<10){
            i=i+1;
            cout<<endl<<" "<<i;
            space=space+"  ";
            }
            else{
            i=i+1;
            cout<<endl<<i;
            space=space+"  ";
            }
       
        }
      

      
    }
}
int exercise_6(int n) {
      string number=to_string(n);
    int number1=0;
    string c;
    for(int i=0 ; i < number.size(); i++){
    c=number[i];
    number1=number1 +stoi(c);
    }
    return number1;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}