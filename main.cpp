#include <iostream>

using namespace std;

int pc;
int pcWin = 0;
string player;
int playerWin = 0;

int main(){
    cout << "Taş Kağıt Makas Oyununa Hoş Geldiniz !\n3 Olan Kazanır!\nHaydi Başlayalım!\n" << endl;
    while(true){
    // 1 = Rock 2 = Paper 3 = Scissors
    int RPS[] = {1,2,3};
    int randomRPS = rand() % 3 + 1;
    if (randomRPS == 1){
        pc = RPS[0];
    }
    else if (randomRPS == 2){
        pc = RPS[1];
    }
    else if (randomRPS == 3){
        pc = RPS[2];
    }
        cout << "Seçiminizi Yapın (T - K - M) : "; // Rock = T , Paper = K , Scissors = M
        cin >> player;

        if (player == "T" || player == "t"){
            if (pc == 1){
                // Berabere
                cout << "Berabere!" << endl;
                cout << "Player " << playerWin << " - " << pcWin << endl; // PC : Rock
            }
            if (pc == 2){
                // PC kazandı
                pcWin++;
                cout << "Maalesef kaybettiniz. Bilgisayar Kağıt Yapmıştı." << endl; // PC : Paper
                cout << "Player " << playerWin << " - " << pcWin << endl;
            }
        if (pc == 3){
                // Oyuncu kazandı
                playerWin++;
                cout << "Tebrikler Kazandınız! Bilgisayar Makas Yapmıştı." << endl; // PC : Scissors
                cout << "Player " << playerWin << " - " << pcWin << endl;
            }
        }
        else if (player == "K" || player == "k"){
            if (pc == 1){
                // Oyuncu Kazandı
                playerWin++;
                cout << "Tebrikler Kazandınız! Bilgisayar Taş Yapmıştı." << endl; // PC : Rock
                cout << "Player " << playerWin << " - " << pcWin << endl;
            }
            if (pc == 2){
                // Berabere
                cout << "Berabere!" << endl;
                cout << "Player " << playerWin << " - " << pcWin << endl; // PC : Paper
            }
            if (pc == 3){
                // PC Kazandı
                pcWin++;
                cout << "Maalesef kaybettiniz. Bilgisayar Makas Yapmıştı." << endl; // PC : Scissors
                cout << "Player " << playerWin << " - " << pcWin << endl;
            }
        }
        else if (player == "M" || player == "m"){
            if (pc == 1){
                // PC Kazandı
                pcWin++;
                cout << "Maalesef kaybettiniz. Bilgisayar Taş Yapmıştı." << endl; // PC : Rock
                cout << "Player " << playerWin << " - " << pcWin << endl;
            }
            if (pc == 2){
                // Oyuncu Kazandı
                pcWin++;
                cout << "Tebrikler Kazandınız! Bilgisayar Kağıt Yapmıştı." << endl; // PC : Paper
                cout << "Player " << playerWin << " - " << pcWin << endl;
            }
            if (pc == 3){
                // Berabere
                cout << "Berabere!" << endl;
                cout << "Player " << playerWin << " - " << pcWin << endl;   // PC : Scissors          
            }

        }
        else{
            cout << "Geçersiz Giriş." << endl;
        }
        if (playerWin == 3){
                cout << "Oyun Bitti." << endl; // End Player Win
                cout << "Player " << playerWin << " - " << pcWin << endl;
                break;
            }
            if (pcWin == 3){
                cout << "Oyun Bitti." << endl; // End PC Win
                cout << "Player " << playerWin << " - " << pcWin << endl;
                break;
            }
    }
    return 0;
}