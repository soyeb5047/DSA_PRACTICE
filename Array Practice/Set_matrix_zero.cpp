/*
Examples 1:

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.
 
Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0

*/
#include<bits/stdc++.h>
using namespace std;

void setZero(vector<vector<int>> &a)
{
    int row = a.size(), col = a[0].size();

    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         if(a[i][j] == 0)
    //         {
    //             int index = i + 1;
    //             while(index < row)
    //             {
    //                 if(a[index][j] != 0)
    //                 {
    //                     a[index][j] = -1;
    //                 }
    //                 index++;
    //             }

    //             index = i - 1;
    //             while(index >= 0)
    //             {
    //                 if(a[index][j] != 0)
    //                 {
    //                     a[index][j] = -1;
    //                 }
    //                 index--;
    //             }

    //             index = j + 1;
    //             while(index < col)
    //             {
    //                 if(a[i][index] != 0)
    //                 {
    //                     a[i][index] = -1;
    //                 }
    //                 index++;
    //             }

    //             index = j - 1;
    //             while(index >= 0)
    //             {
    //                 if(a[i][index] != 0)
    //                 {
    //                     a[i][index] = -1;
    //                 }
    //                 index--;
    //             }
    //         }
    //     }
    // }

    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         if(a[i][j] <= 0)
    //         {
    //             a[i][j] = 0;
    //         }
    //     }
    // }
    vector<int> rowWise(row, -1), colWise(col, -1);

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(a[i][j] == 0)
            {
                rowWise[i] = 0;
                colWise[j] = 0;
            }
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(rowWise[i] == 0 || colWise[j] == 0)
            {
                a[i][j] = 0;
            }
        }
    }

}

int main()
{
    vector<vector<int>> a;
    a = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

    setZero(a);

    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a[0].size(); j++)
        {
            
            cout << a[i][j] << " ";
            
        }
        cout << endl;
    }
}