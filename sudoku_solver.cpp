#include <iostream>
using namespace std;

void solve(int array[9][9]){
    bool isgood=true;
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if (array[i][j] == 0){
                for (int s=1; s<10; s++){
                    isgood=true;
                    for (int t=0; t<9; t++){
                        if(array[i][t]==s || array[t][j]==s){ isgood = false; break;}
                    }
                    if(isgood == true){ 
                        int nsquare;
                        if(i<3 && j<3){ nsquare=1; if(array[0][0]==s || array[0][1]==s || array[0][2]==s || array[1][0]==s || array[1][1]==s || array[1][2]==s ||array[2][0]==s || array[2][1]==s || array[2][2]==s){ isgood=false; }}
                        if(i<3 && j<6 && j>2){ nsquare=2; if(array[0][3]==s || array[0][4]==s || array[0][5]==s || array[1][3]==s || array[1][4]==s || array[1][5]==s ||array[2][3]==s || array[2][4]==s || array[2][5]==s){ isgood=false; }} 
                        if(i<3 && j>5){ nsquare=3; if(array[0][6]==s || array[0][7]==s || array[0][8]==s || array[1][6]==s || array[1][7]==s || array[1][8]==s ||array[2][6]==s || array[2][7]==s || array[2][8]==s){ isgood=false; }}
                        if(i>2 && i<6 && j<3){ nsquare=4; if(array[3][0]==s || array[3][1]==s || array[3][2]==s || array[4][0]==s || array[4][1]==s || array[4][2]==s ||array[5][0]==s || array[5][1]==s || array[5][2]==s){ isgood=false; }}
                        if(i>2 && i<6 && j>2 && j<6){ nsquare=5; if(array[3][3]==s || array[3][4]==s || array[3][5]==s || array[4][3]==s || array[4][4]==s || array[4][5]==s ||array[5][3]==s || array[5][4]==s || array[5][5]==s){ isgood=false; }}
                        if(i>2 && i<6 && j>5){ nsquare=6; if(array[3][6]==s || array[3][7]==s || array[3][8]==s || array[4][6]==s || array[4][7]==s || array[4][8]==s ||array[5][6]==s || array[5][7]==s || array[5][8]==s){ isgood=false; }}
                        if(i>5 && j<3){ nsquare=7;  if(array[6][0]==s || array[6][1]==s || array[6][2]==s || array[7][0]==s || array[7][1]==s || array[7][2]==s ||array[8][0]==s || array[8][1]==s || array[8][2]==s){ isgood=false; }}
                        if(i>5 && j<2 && j>6){ nsquare=8; if(array[6][3]==s || array[6][4]==s || array[6][5]==s || array[7][3]==s || array[7][4]==s || array[7][5]==s ||array[8][3]==s || array[8][4]==s || array[8][5]==s){ isgood=false; }}
                        if(i>5 && j>5){ nsquare=9;  if(array[6][6]==s || array[6][7]==s || array[6][8]==s || array[7][6]==s || array[7][7]==s || array[7][8]==s ||array[8][6]==s || array[8][7]==s || array[8][8]==s){ isgood=false; }}
                    
                        if(isgood==true){  array[i][j]=s; break;   }
                       }
                }
            }
        }
    }
}

int main(){
    int array[9][9]={0, 0, 9, 6, 2, 4, 8, 1, 3,
                     4, 0, 0, 0, 8, 7, 0, 9, 0,
                     2, 0, 6, 0, 0, 0, 4, 0, 5,
                     0, 0, 0, 3, 0, 2, 0, 0, 4,
                     0, 0, 4, 8, 7, 0, 0, 0, 6,
                     0, 0, 5, 0, 0, 0, 0, 0, 7,
                     0, 0, 2, 0, 0, 8, 0, 0, 0,
                     0, 9, 1, 0, 6, 3, 0, 4, 0,
                     6, 0, 0, 7, 0, 0, 3, 2, 9,}, array2[9][9];
    cout <<"\n\t\tb4 the solve\n";
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if(j==3 || j==6){   cout << "|"; }
            cout << array[i][j] << " ";
        }
        cout << "\n";
        if(i==2 || i==5){   cout << "-------------------\n";}
    }
    solve(array);
    int zero=0;

    cout <<"\n\tafter the solve\n";
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if(j==3 || j==6){   cout << "|"; }
            cout << array[i][j] << " ";
            if(array[i][j]==0){ zero++; }
        }
        cout << "\n";
        if(i==2 || i==5){   cout << "-------------------\n";}
    }
    cout << "\nthere is: " << zero << " zero\n";

    return 0;
}