//string eximple :

#include<iostream>
#include<string>
using namespace std;

int main(){

// Q1 :: Small To Capetal
char ch2 = 'a' - 32;
cout<<ch2<<endl;

// Q2 :: Capetal To Small 
char ch4 = 'A' + 32;
cout<<ch4<<endl;

// Q3 :: Delete the symbol from the text string and make the symbol space empty : "A/bd.ULLa=h"

// name.length () ==> returns the number of elements string
// Eximple : INPUT => "A/bd.ULLa=h" || OUTPUT ==>A bd Ulla h

string name = "A/bd.ULLa=h";


for (int i = 0; i < name.length () ; i++){

    if ((name[i] < 'A' || name[i] > 'Z'  ) && ( name[i] < 'a' || name[i] > 'z' ) ){  
      name[i] = ' ';}}

cout<<name<<endl;

// Q4 :: Delete the symbol from the text string : "A/bd.ULLa=h"
// Eximple : INPUT => "A/bd.ULLa=h" || OUTPUT ==>AbdUllah

string name1 = "A/bd.ULLa=h";
string OutName1 = ""; //سلسلة رمزية فارغة

for (int i = 0; i < name1.length() ; i++){

  if ((name1[i] >= 'A' && name1[i] <= 'Z' ) || ( name1[i] >= 'a' && name1[i] <= 'z' )){

  
       OutName1 = OutName1 + name1[i];
       }}

cout<<OutName1<<endl;


//  Q5 : Change the first letter of the first word to a capital letter

string name2 = "hallo my name abdullah thyab";

    // تحويل أول حرف من أول كلمة إلى حرف كبير
    if (name2[0] >= 'a' && name2[0] <= 'z') {
        name2[0] = name2[0] - 32;
    }
  int indexChar = 0 ;
    // البحث عن الفراغات وتحويل الحرف الذي يليها إلى حرف كبير
    for (int i = 0; i < name2.length(); i++) {
        if (name2[i] == ' ') {
            indexChar = i + 1;; // الحرف التالي بعد الفراغ
            if (name2[indexChar] >= 'a' && name2[indexChar] <= 'z') {
                name2[indexChar] = name2[indexChar] - 32;
            }
        }
    }

    // طباعة النص بعد التعديل
    cout << name2 << endl;


// استخدام sizeof لحساب عدد العناصر في المصفوفة
// int length = sizeof(اسم المصفوفة) / sizeof(arr[0]);



}