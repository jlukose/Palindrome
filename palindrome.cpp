#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char j = 'Z';
  char str[80];
  char str2[80];
  for (int i = 0; i < 80; i++){
    char str[80] = { '\0' };
    char str2[80] = { '\0' };
  }
  int count = 0;
  cin.get(str, 80);
  
  for (int i = 0; i < 80; i++) {
    if (isalpha(str[i])){
      str2[count] = str[i];
      count++;
      cout << "added " << str[i] << "   count " << count << "   " << str2 << endl;
    }
  }

  cout << str2 << endl << count << endl;
  
  for (int i = 0; i < count; i++) {
    str2[i] = (tolower(str2[i]));
  }  

  char str3[count];

  for (int i = 0; i < count; i++){
    str3[i] = str2[i];
  }

  cout << str3 << endl;
  
  return 0;
}
