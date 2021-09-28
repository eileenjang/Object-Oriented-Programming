#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int i = 0;
    while (i < 10){

        //사용자로부터 카테고리 입력 받기, 카테고리 종류 안내
        cout << "\nWhich category would you like to be recommended? (Korean, Janapese, Chinese, American, French, Italian, Fastfood)? If you want to stop, Enter 'No'. : ";
        cin >> str;

        //식당 이름 출력
        if ((str == "Korean") || (str == "korean")){
            cout << "Dongali Dalggalbi";
        }

        else if ((str == "Japanese") || (str == "japanese")){
            cout << "Gamei";
        }

        else if  ((str == "Chinese") || (str == "chinese")){
            cout << "Inha Banjeom";
        }

        else if ((str == "American") || (str == "american")){
            cout << "Seonsigdang";
        }
        
        else if ((str == "French") || (str == "french")){
            cout << "Gugje Sigdang";
        }

        else if ((str == "Italian") || (str == "italian")){
            cout << "Casa Olive";
        }
    
        else if ((str == "Fastfood") || (str == "fastfood")){
            cout << "KFC";
        }

        else if (str == "No"){
            exit(0);
        }

        else{
            cout << "Incorrect. Enter another category (Korean, Janapese, Chinese, American, French, Italian, Fastfood): ";
        }
        i++;
    }
}