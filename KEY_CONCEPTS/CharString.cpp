// // CHARACTER ARRAY
// #include <iostream>
// using namespace std;
// int main(){
// char ch[10];
// cin>>ch;

// ch[2]='\0';//null character (terminator character)

// cout << ch <<" ";
// }
// #include <iostream>
// using namespace std;

// //REVERSE A STRING
// void reverse(char ch[],int n){
//     int s = 0;
//     int e  = n-1;
//     while(s<e){
//         swap(ch[s++],ch[e--]);
//     }
// }
// //LENGTH OF CHARACTER ARRAY
// int getLength(char name[]){
//     int count = 0;
//     for (int i=0;name[i]!='\0';i++){
//         count++;
//     }

//     return count;
// }
// int main(){
//     char ch1[10];
//     cin >> ch1;

//     int length  = getLength(ch1);

//     cout<<"Length of the character array "<<getLength(ch1)<<endl;

//     reverse(ch1,length);
//     cout<<"Reverse : "<<ch1;
// }

// //CHECK PALINDROME
// #include<iostream>
// using namespace std;
// bool isPalindrome(char ch[], int n){
//     for(int i = 0; i < n / 2; i++){
//         if(ch[i] != ch[n - i - 1]){
//             return false; // Return false if characters don't match
//         }
//     }
//     return true;
// }

// int getLength(char name[]){
//     int count = 0;
//     for (int i=0;name[i]!='\0';i++){
//         count++;
//     }

//     return count;
// }
// int main(){
//     char ch[10];
//     cin>>ch;

//     int length  = getLength(ch);

//     if(isPalindrome(ch,length)){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }

// }

// // #include <bits/stdc++.h>
// bool checkPalindrome(string s){
//       int start = 0;
//       int end = s.size()-1;
//       while(start<=end){
//         if(!isalnum(s[start])){ //check if alphanumeric or not
//           start++;
//           continue;
//         }
//         if(!isalnum(s[end])){   //check if alphanumeric or not
//           end--;
//           continue;
//         }
//         if(tolower(s[start])!=tolower(s[end])){   //convert upper to lower case
//           return false;
//         }
//         else{
//           start++;
//           end--;

//         }
//       }
// return true;
// };
