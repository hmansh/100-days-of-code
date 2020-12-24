#include <bits/stdc++.h>
using namespace std;


class nQueen{
    private:
        int n = 0;
        bool **arr;
    public:
        nQueen(int n){
            this->n = n;
            arr = new bool*[n];
            for(int i = 0; i < n ; i++){
                arr[i] = new bool[n];
            }

            for(int i = 0; i < n ; i++){
                for(int j = 0; j < n; j++){
                    arr[i][j] = false;
                }
            }
        }

        void placeQueen(int row, int col){
            arr[row][col] = true;
        }

        void removeQueen(int row, int col){
            arr[row][col] = false;
        }

        void printBoard(){
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n; j++){
                    if(arr[i][j]==true){
                        cout << " Q ";
                    } else {
                        cout << " _ ";
                    }
                }
                cout << endl;
            }
        }

        bool isSafe(int row, int col){
            for(int i = 0; i < n; i++){
                if(arr[i][col] == true){
                    return false;
                }
            }
            for(int i = 0; i < n; i++){
                if(arr[row][i] == true){
                    return false;
                }
            }
            int sum = row+col;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(i+j == sum && arr[i][j] == true){
                        return false;
                    }
                }
            }
            sum = (n-1) + row - col;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(((n-1) + i - j) == sum && arr[i][j] == true){
                        return false;
                    }
                }
            }
            return true;
        }

        bool findSolution(int row){
            if (row == n){
                printBoard();
                return true;
            }
            for(int col = 0; col < n ; col++){
                if(isSafe(row, col)){
                    placeQueen(row, col);
                    if(findSolution(row+1)){
                        return true;
                    }
                    removeQueen(row, col);
                }
            }
            return false;
        }

};

int main(int argc, char const *argv[])
{
    nQueen solution(32);
    solution.findSolution(0);
    return 0;
}