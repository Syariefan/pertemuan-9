#include <iostream>
#include <conio.h>
using namespace std;

class Data{
    public:
        void menu_awal(){
            int pil;
            do{
                cout<<"===========================================\n";
                cout<<"================= Menu ====================\n";
                cout<<"1. Masukkan Data\n";
                cout<<"2. Lihat Data\n";
                cout<<"Masukkan Pilihan >> ";
                cin>>pil;
                if(pil == 1){
                    input();
                    proses();
                }else if(pil == 2) output();
                getche();
            }while(true);
        }

        void input(){
            cout<<"\nMasukkan jumlah buku : ";
            cin>>jumlah;
            cout<<endl;
            cout<<endl<<"Masukkan Data Buku : "<<endl;
            for(int i=0; i<jumlah; i++){
                cout<<"Buku ke-"<<i+1<<" : ";
                cin>>array1D[i];
            }
        }

        void proses(){
            int i = 0;
            while(i < jumlah){
                for(int j=0; j<4; j++){
                    for(int k=0; k<6; k++){
                        array2D[j][k] = array1D[i];
                        i++;
                    }
                }
            }

            //Pengurutan Bubble Sort
            bubble_sort();
        }

        void bubble_sort(){
            int temp;
            for(int j=0; j<4; j++){ 
                for(int k=0; k<6; k++){    
                    for(int i= k+1; i<6; i++){
                        if(array2D[j][i] < array2D[j][k]){
                            temp = array2D[j][k];
                            array2D[j][k] = array2D[j][i];
                            array2D[j][i] = temp;
                        }
                    }
                }
            }
        }

        void output(){
            cout<<"\n\nOutput : \n\n";
            for(int i=0; i<4; i++){
                cout<<"Rak ke-"<<i+1<<endl;
                for(int j=0; j<6; j++){
                    cout<<"Buku ke-"<<j+1<<" : "<<array2D[i][j]<<endl;
                }cout<<endl;
            }
        }
    private:
        int jumlah, baris, kolom = 0;
        int array1D[50];
        int array2D[50][50];

};

main(){
    Data data1;
    data1.menu_awal();
#include <iostream>
#include <conio.h>
using namespace std;

class Data{
    public:
        void menu_awal(){
            int pil;
            do{
                cout<<"===========================================\n";
                cout<<"================= Menu ====================\n";
                cout<<"1. Masukkan Data\n";
                cout<<"2. Lihat Data\n";
                cout<<"Masukkan Pilihan >> ";
                cin>>pil;
                if(pil == 1){
                    input();
                    proses();
                }else if(pil == 2) output();
                getche();
            }while(true);
        }

        void input(){
            cout<<"\nMasukkan jumlah buku : ";
            cin>>jumlah;
            cout<<endl;
            cout<<endl<<"Masukkan Data Buku : "<<endl;
            for(int i=0; i<jumlah; i++){
                cout<<"Buku ke-"<<i+1<<" : ";
                cin>>array1D[i];
            }
        }

        void proses(){
            int i = 0;
            while(i < jumlah){
                for(int j=0; j<4; j++){
                    for(int k=0; k<6; k++){
                        array2D[j][k] = array1D[i];
                        i++;
                    }
                }
            }

            //Pengurutan Bubble Sort
            bubble_sort();
        }

        void bubble_sort(){
            int temp;
            for(int j=0; j<4; j++){ 
                for(int k=0; k<6; k++){    
                    for(int i= k+1; i<6; i++){
                        if(array2D[j][i] < array2D[j][k]){
                            temp = array2D[j][k];
                            array2D[j][k] = array2D[j][i];
                            array2D[j][i] = temp;
                        }
                    }
                }
            }
        }

        void output(){
            cout<<"\n\nOutput : \n\n";
            for(int i=0; i<4; i++){
                cout<<"Rak ke-"<<i+1<<endl;
                for(int j=0; j<6; j++){
                    cout<<"Buku ke-"<<j+1<<" : "<<array2D[i][j]<<endl;
                }cout<<endl;
            }
        }
    private:
        int jumlah, baris, kolom = 0;
        int array1D[50];
        int array2D[50][50];

};

main(){
    Data data1;
    data1.menu_awal();
}
