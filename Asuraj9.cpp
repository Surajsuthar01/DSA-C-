// char array string L 22
#include<iostream>
using namespace std;

void reverse(char name[],int n){
 int s=0;
 int e=n-1;
 while(s<e){
    swap(name[s++],name[e--]);
 }
}

 int getlength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    } return count++;
 }
int main(){
    char name[27];
    cout<<"Name "<<endl;
    cin>>name;
    cout<<"Name is "<<name<<endl;
    cout<<"Lenghth is = "<<getlength(name)<<endl;
    int len =getlength(name);
    reverse(name,len);
    cout<<"Reverse name = ";
    cout<<name<<endl;

}


element are not case sensitive
campare when character are in uppercase or lowercase but 
same character and give palindrom exit.    
to convert the element in lowercase

char tolowercase(char ch){
    if(ch >= 'a' && ch <='z'){
        return ch;
    } else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}

bool checkpalindrome(char a[],int n){
    int s=0;
    int e= n-1;
    while(s<=e){
      if(tolowercase(a[s]) != tolowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
 
    }
    return 1;
}


int getllength(char name[]){
    int count =0;
    for(int i=0;name[i]!= '\0';i++){
        count++;
    }
    return count++;
}
int main(){
    char name[30];
    cout<<"Enter the name : ";
    cin>>name;
    int len = getllength(name);
    cout<<"Palindrome or Not : "<<checkpalindrome(name,len)<<endl;
    cout<<"char is convet to lowercase : "<<tolowercase('S')<<endl;
    cout<<"char is convet to lowercase : "<<tolowercase('a')<<endl;

}


3 valid palindrome check and remove the all special character's


bool valid(char ch){
    if((ch >='a' && ch <='z') || (ch >='A' && ch <= 'Z') || (ch >='0' && ch <= '9')){
        return 1;
    }
    return 0;
}
 char tolowercase(char ch){
    if((ch >='a' && ch <='z') ||(ch >= '0' && ch <='9')) {
        return ch;
    } else {
        char temp =ch - 'A' + 'a';
        return temp;
    }
 }
 bool checkpalindrome(string a){
    int s=0;
    int e= a.length()-1;
    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        } else{
            s++;
            e--;
        }
    }
    return 1;
 }

 bool ispalindrome(string s){
    string temp ="";
    for(int j=0;j<s.length();j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }
    //for making the lower case
    for(int j=0;j<temp.length();j++){
        temp[j]=tolowercase(temp[j]);
    }
    cout << "Processed string: " << temp << endl;
    return checkpalindrome(temp);
    
 }

 int main(){
    string input;
    cout<<"Enter the string : "<<endl;
    getline(cin,input);
    if(ispalindrome(input)){
        cout<<"The palindrome exist";
    } else {
        cout<<"Not palindrome exist";

    }
  
    return 0;
 }

maximum occuring the character's in the string

char getmaxoccurcharacter(string s){
    int arr[26]= {0};

    //create an array of count character
    for(int i=0;i<s.length();i++){
        char ch =s[i];
        int number =0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch-'a';
        } else{
            number = ch -'A';
         }
        arr[number]++;
    }
    //find maximum occ character
    int maxi =-1, ans=0;
    for(int i=0;i<26;i++){
        if(maxi <arr[i]){
            ans=i;
            maxi =arr[i];
        }
    }
    return 'a'+ans;
}

int main(){
    string s;
    cin>>s;
    cout<<getmaxoccurcharacter(s);
}

replace the space with @40 

string replacespaces(string &str){
    string temp = "";
    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(str[i]);
        }
    } return temp;
}

string repl(string & str){
    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            str.replace(i,1,"@40");
            i+=2;
        }
    } return str;
}



int main(){
    string input;
    string names;
    cout<<"Enter : "<<endl;
    getline(cin,names);
    cout<<replacespaces(names)<<endl;
    cout<<"Using with same string ->"<<names<<endl;
    cout<<repl(names)<<endl;
}

remove the occurance of the substring 

string removeoccurences(string s,string part){
    while(s.length() !=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s;
    string part;
    cout<<"Enter s :"<<endl;
    getline(cin,s);
    cout<<"Part : "<<endl;
    getline(cin,part);
    cout<<removeoccurences(s,part);
}

// permulation in string 

string duplicate(string s){
    if(s.empty()) return s;
     string result;
    //  for(int i=0;i<s.length();i++){
    //     if(i==0 || s[i] != s[i-1]){
    //         result.push_back(s[i]);
    //     }
    //  }
    //  return result;

    //alternative methods
      for(int i=0;i<s.length();i++){
        if(i>0 && s[i]==s[i-1]){

        }else{
        result.push_back(s[i]);
        }

      }
    return result;
}

  string removesamestring(string s){
    if(s.empty()) return s;
    int pos =1;
    for(int i=1;i<s.length();i++){
        if(s[i] != s[i-1]){
            s[pos]=s[i];
            pos++;
        }
    }
    s.resize(pos);
    return s;
  }
//   Time Complexity: O(n) (one pass through the string).

// Space Complexity: O(1) (in-place modification).

int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    getline(cin,s);
   // cout<<duplicate(s);
   cout<<removesamestring(s)<<endl;

}
  







