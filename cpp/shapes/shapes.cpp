// #include <iostream>
// #include <string>
// using namespace std;

// // For right bottom angle triangle
// // int main()
// // {
// //     for (int i = 0; i <= 5; i++)
// //     {
// //         for (int y = i; y <= 5; y++)
// //         {
// //             cout << " ";
// //         }
// //         for (int z = 1; z <= i; z++)

// //         {
// //             cout << "*";
// //         }
// //         cout << "\n";
// //     }
// // }

// // For right top angle triangle

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int x = 1; x <=i; x++)
//         {
//             cout<<" ";
//         }
//         for (int x = 5; x >=i; x--)
//         {
//             cout<<"*";
//         }

//       cout<<endl;
//     }
// }
#include <iostream>
#include <string>
using namespace std;

/////// For right bottom angle triangle ///////
// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int y = i; y <= 5; y++)
//         {
//             cout << " ";
//         }
//         for (int z = 1; z <= i; z++)

//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }

/////////  full diamond //////
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int x = i; x <=5; x++)
//         {
//             cout<<" ";
//         }
//         for (int x = 1; x <i; x++)
//         {
//             cout<<"*";
//         }
//          for (int x = 1; x <=i; x++)
//         {
//             cout<<"*";
//         }

//       cout<<endl;
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int x = 1; x <=i; x++)
//         {
//             cout<<" ";
//         }
//         for (int x = i; x <5; x++)
//         {
//             cout<<"*";
//         }
//          for (int x = i; x <=5; x++)
//         {
//             cout<<"*";
//         }

//       cout<<endl;
//     }
// }

// int main()
// {
//     int row = 1;
//     int column = 1;
//     for (int row = 1; row <= 4; row++)
//     {
//         for (int a = 1; a <=2; a++)
//         {
//             if (  row==2 && a==2)
//             // if (row==1 || row==2)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
            
            
            
//         }
        
//         for (int column = 1; column <= 7; column++)
//         {
//             if ( row == 4 || column == 1 || column == 3 ||
//              column == 5 ||column==7)
//             {
//                 cout<<"*";
//                 // cout << (char)219;
//             }
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
// }
// ///////// for a rectangle  ///////
// int main()
// {
//     int row = 1;
//     int column = 1;
//     for (int row = 1; row <= 8; row++)
//     {
//         for (int column = 1; column <= 8; column++)
//         {
//             if (row == 1||row==2|| row == 7 || row == 8 
//             || column == 1|| column == 2|| column == 7 || column == 8)
//             {
//                 cout << "* ";
//                 // cout<<(char) 219;
//             }
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
 