 
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
    int negative=1;
    for(int i=0 ; i < number.size(); i++){
    c=number[i];
    if(c =="-"){
        negative=-1;
        continue;
    }
    number1=number1*negative+stoi(c);
    }
    return number1;

}

void exercise_7(int n) {
   double resultado=0;
for(int i=1;i<=n;i++){
   
    resultado=resultado + pow((-1),i+1)/i;
}
    cout<<resultado<<endl;
}

void exercise_8(string s) {
    bool pal;
    string s1;
if(s==""){
    cout<<"YES"<<endl;
}
else{

for(int i=0;i<s.size();i++){
    if(s[i] !=' '){
        s1=s1+s[i];
    }
}
for(int i=0;i<s1.size();i++){
        if(s1[i] == s1[s1.size()-1-i]){
            pal=true;
        }
        else{
        cout<<"NO"<<endl;
        pal=false;
         break;
        }
}

if(pal==true){
    cout<<"YES"<<endl;
}
}


}

void exercise_9(string s) {
     int efe=0;
    string ubi;
  for(int i=0;i<s.size();i++){
    if(s[i]=='f'){
        efe=efe+1;
        if(efe==2){
            ubi=ubi+to_string(i);
        }
    }
  }
  if(efe==0){
    cout<<-2<<endl;
  }
  else if (efe==1){
    cout<<-1<<endl;
  }
  else{
    cout<<ubi<<endl;
  }

}

int exercise_10(int a, int b) {
    int MCD=1;
if(a==0){
    MCD=b;
}
else if (b==0){
    MCD=a;
}
else{
for(int i=2; i<=a && i<=b;i++){
    if(a%i==0 && b%i ==0){
        MCD=i;
    }
}
}
return MCD;


}

void exercise_11() {
     float U0=1;
    cout<<"U0 = "<<U0<<endl;
    for(int i=0;i<10;i++){
        cout<<"U"<<i+1<<" = "<<U0/(i+1)<<endl;
        U0=U0/(i+1);
       
    }

}

void exercise_12() {
      float U0=1,V=1,U;
    U=U0;
    for(int i=0;i<10;i++){
        cout<<"U"<<i+1<<" = "<<U0/(i+1)<<" V"<<i+1<<" = "<<V<<endl;
        U0=U0/(i+1);
        V=U;
       
    }

}

long exercise_13(int n, int k) {
  int res=0;
    for(int i=1;i<=n;i++){
        res=res+pow(i,k);
    }
  return res;
}

string exercise_14(int n) {
     string ns=to_string(n);
    bool pal;
    for(int i=0;i<ns.size();i++){
        if(ns[i]==ns[ns.size()-1-i]){
            pal=true;
        }
        else{
            pal=false;
            break;
        }
    }
    if(pal==true){
       return "Es palindrome";
    }
    else{
       return "No es palindrome";
    }



}

void exercise_15(int decimal) {
int resto=0;
string binari;
if(decimal==0){
    cout<<0<<endl;
}
else{
while(decimal >=1 ){
    resto=decimal%2;
    decimal=decimal/2;
    binari += to_string(resto);
}
for(int i=0;i<binari.size();i++){
    cout<<binari[binari.size()-1-i];
}
cout<<endl;
}


}

void exercise_16(int divident, int divider) {
      int cociente=0;
    if (divider==0){
        
    }
    else{
    while(divident>=divider){
        divident=divident-divider;
        cociente++;

    }
    cout<<cociente<<" "<<divident;
    }   

}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}