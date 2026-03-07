/*5. Write your own implementations of `strlen()` and `strcpy()` without using `string.h`.
*/
#include<iostream>
using namespace std;

//User defined strlen
int myStrlen(char str[]){
    int count = 0;

    while(str[count] != '\0'){
        count++;
    }

    return count;
}

//User defined strcpy
void myStrcpy(char dest[], char src[]){
    int i = 0;

    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main(){

    char str1[100];
    char str2[100];

    cout<<"Enter a string : ";
    cin>>str1;

    //strlen
    int length = myStrlen(str1);
    cout<<"Length of string : "<<length<<endl;

    //strcpy
    myStrcpy(str2,str1);

    cout<<"Copied String : "<<str2<<endl;

    return 0;
}