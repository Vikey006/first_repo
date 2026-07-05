# include <iostream>
# include <vector>
using namespace std;

void val_input (int row,int col,int row1,int col1, vector<vector<int>> & Matrix1, vector<vector<int>> & Matrix2){
    cout<<"Enter the values in Matrix 1 - "<<endl;
    
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"ELement ["<< i+1 <<"]["<< j+1 <<"] :: ";
            cin>>Matrix1[i][j];
        }
        cout<<endl;
    }
    cout<<"Enter the values in Matrix 2 - "<<endl;
    
    for(int i=0 ; i<row1; i++){
        for(int j=0; j<col1; j++){
            cout<<"ELement ["<< i+1 <<"]["<< j+1 <<"] :: ";
            cin>>Matrix2[i][j];
        }
        cout<<endl;
    }
}
void display (int row, int col, int row1, int col1, const vector<vector<int>> & Matrix1, const vector<vector<int>> &  Matrix2){
    cout<<"MATRIX 1"<<endl;
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<Matrix1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"MATRIX 2"<<endl;
    for(int i=0 ; i<row1; i++){
        for(int j=0; j<col1; j++){
            cout<<Matrix2[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void Addition (int row, int col, int row1, int col1, vector<vector<int>> & Matrix1, vector<vector<int>> &  Matrix2){
    
    vector<vector<int>> Add (row, vector<int>(col));
    if(row!=row1 || col!=col1){
        cout<<"Matrices with different order cannot be added "<<endl;
    }
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col; j++){
            Add[i][j]=Matrix1[i][j]+Matrix2[i][j];
        }
    }
    cout<<endl;
    cout<<"Addition of Matrix 1 and Matrix 2 is - "<<endl;
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<Add[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void Subtraction (int row, int col, int row1, int col1, vector<vector<int>> & Matrix1, vector<vector<int>> &  Matrix2){
    if(row!=row1 || col!=col1){
        cout<<"Matrices with different order cannot be added "<<endl;
    }
    vector<vector<int>> Sub (row, vector<int>(col));
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col; j++){
            Sub[i][j]=Matrix1[i][j]-Matrix2[i][j];
        }
    }
    cout<<endl;
    cout<<"Subtraction of Matrix 1 and Matrix 2 is - "<<endl;
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<Sub[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void Multiplication (int row, int col, int row1, int col1, vector<vector<int>> & Matrix1, vector<vector<int>> &  Matrix2){
    if(col!=row1){
        cout<<"Column of Matrix 1 should equals to the rows of Matrix 2 otherwise multiplocation is not possible "<<endl;
    }
    vector<vector<int>> Mult (row, vector<int>(col1,0));
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col1; j++){
            for(int k=0; k<row1; k++){
                Mult[i][j]+=Matrix1[i][k]*Matrix2[k][j];
            }
        }
    }
    cout<<endl;
    cout<<"Multiplication of Matrix 1 and Matrix 2 is - "<<endl;
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col1; j++){
             cout<<Mult[i][j]<<"\t";
            }
        cout<<endl;
    }
}
int main(){

    int row,col;
    cout<<"Enter the number of rows in matrix 1 you want to enter    :: ";
    cin>>row;
    cout<<"Enter the number of columns in matrix 1 you want to enter :: ";
    cin>>col;
    vector<vector<int>> Matrix1 (row, vector<int>(col));
    cout<<endl;
    
    int row1,col1;
    cout<<"Enter the number of rows in matrix 2 you want to enter    :: ";
    cin>>row1;
    cout<<"Enter the number of columns in matrix 2 you want to enter :: ";
    cin>>col1;
    vector<vector<int>> Matrix2 (row1, vector<int>(col1));
    cout<<endl;
    int x;
    cout<<"Enrer 1 to Add two Matrices"<<endl;
    cout<<"Enrer 2 to Subtract two Matrices"<<endl;
    cout<<"Enrer 1 to Multiply two Matrices"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
        val_input(row,col,row1,col1,Matrix1,Matrix2);
        display(row,col,row1,col1,Matrix1,Matrix2);
        Addition(row,col,row1,col1,Matrix1,Matrix2);
        break;
    case 2:
        val_input(row,col,row1,col1,Matrix1,Matrix2);
        display(row,col,row1,col1,Matrix1,Matrix2);
        Subtraction(row,col,row1,col1,Matrix1,Matrix2);
        break;
    case 3:
        val_input(row,col,row1,col1,Matrix1,Matrix2);
        display(row,col,row1,col1,Matrix1,Matrix2);
        Multiplication(row,col,row1,col1,Matrix1,Matrix2);
        break;
    
    default:
        cout<<"Invalid choice !!";
        break;
    }
    return 0;
}