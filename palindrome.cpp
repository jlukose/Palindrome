#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  //initialization
  char ch;
  char str[80];//input
  char str2[80];//input with no capitals or symbols
  char str3[80];//str2 reversed
  int count = 0;
  for (int i = 0; i < 80; i++){//makes cstrings null
    str[i] = { '\0' };
    str2[i] = { '\0' };
    str3[i] = { '\0' };
  }
  cin.get(str, 80);
  
  for (int i = 0; i < 80; i++) {//puts the letters in str2
    if (isalpha(str[i])){
      str2[count] = str[i];
      count++;
    }
  }
  
  for (int i = 0; i < count; i++) {//makes str2 lowercase
    str2[i] = (tolower(str2[i]));
  }  

  strcpy(str3, str2);//copy str2 to str3

  for (int i = 0; i < count - 1; i++){//reverse str3 NOT WORKING
    ch = str[i];
    str[i] = str[count - i - 1];
    str[count - i - 1] = ch;
  }

  cout << str3;
  
  return 0;
}
