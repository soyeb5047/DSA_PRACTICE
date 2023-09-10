#include<iostream>
#include<string>
using namespace std;

// void say(int n)
// {
//     if(n == 0) return ;
    
//     int rem = n % 10;
//     say(n / 10);
    
//     switch(rem)
//     {
//         case 0: 
//             cout << "Zero ";
//             break;
            
//         case 1 :
//             cout << "One ";
//             break;
            
//         case 2:
//             cout << "Two ";
//             break;
            
//         case 3:
//             cout << "Three ";
//             break;
            
//         case 4:
//             cout << "Four ";
//             break;
        
//         case 5:
//             cout << "Five ";
//             break;
            
//         case 6:
//             cout << "Six ";
//             break;
            
//         case 7:
//             cout << "Seven ";
//             break;
            
//         case 8:
//             cout << "Eigth ";
//             break;
            
//         case 9:
//             cout << "Nine ";
//             break;
//     }
    
// }

// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

    
//     say(n);
// }


// 2nd way
void sayDigit(int n, string a[])
{
    if(n == 0) return ;

    int rem = n % 10;
    sayDigit(n / 10, a);
    cout << a[rem] << " ";
    
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    string a[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eigth", "Nine"};

    sayDigit(n, a);
}