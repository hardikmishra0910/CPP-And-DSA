#include<iostream>
using namespace std;

int main(){
    // int scroe;
    // cout<<"enetr the score: ";
    // cin>> scroe;
    // if(scroe<330){
    //       cout<<"india win"<<endl;
    // }
    // else{
    //      cout<<"pak win";
    // }
   
//    int marks;
//    cout<<"Enter the Marks: ";
//    cin>>marks;
//    if(marks>=90){
//     cout<<"Grade A"<<endl;
//    }
//    else if(marks>=80)
//    {
//     cout<<"Garde B"<<endl;
//    }
//    else if (marks>=60)
//    {
//      cout<<"Grade C"<<endl;
//    }
//    else if (marks>=50)
//    {
//    cout<<"Grade D"<<endl;
//    }
//    else{
//     cout<<"grade E"<<endl;
//    }
   
//    int bronum;
//    cout<<"enetr the bro number:";
//    cin>>bronum;
//    if(bronum==0){
//     cout<<"baat banjayegi";
//    }
//    else{
//     cout<<"baat nahi banjeyegi";
//    }
   
//    for(int i=0; i<5 ; i++){
//     cout<<"hardik mishra"<<endl;
//    }
//   for (int i = 0; i < 5; i=i+1)
//   {
//    cout << i <<endl;
//   }
//   for(int i=5 ; i>0 ; i= i-1){
//     cout<<i<<endl;
//   }
// tabel of 2
//   for (int i=1 ; i<=10 ; i++){
//     cout << 2*i<<endl;
//   }
// for(int i=0; i<=5 ;i=i+2){
//     cout<< i<<endl;
// }
// int n;// it will run
// 
// }if(cin>>n){
//     cout<<"happy"<<endl;
// }
// if(cout<<"hardik"){//it will run hardikMishra
//     cout<<"Mishra"<<endl;
// for(int row=0; row<3; row++){// outer loop row obesvation
//     for(int col=0; col<5 ; col++){// inner loop column observation
//         cout <<" * ";
//     }
//     cout<<endl;
// }
// cout<<endl;

// int n;
// cin >> n;
// for( int row = 0; row<n ; row++){
//     for( int col = 0 ; col < n ; col++){
//         cout<<" * ";
//     }
//     cout<<endl;
// }
int rownum,colnum;
cin>>rownum>>colnum;
for(int row = 0 ; row< 3 ; row ++) {
   if(row == 0 || row==2){
     for(int col=0; col<5 ; col++){
       cout<<"* ";
     }
     
   }
   else{
     cout<<"* ";
     for(int col=0; col<3 ; col++){
        cout<<"  ";

     }
     cout<<"* ";
   }
   cout<<endl;
}
//generic way to [print hollow rectangle]
for(int row=0; row<rownum; row++){
    if ( row ==0  || row == rownum-1){
        for(int col=0; col<colnum; col++){
            cout<<"* ";
        }
    }
    else{
        cout<<"* ";
        for(int col=0; col<colnum-2; col++){
            cout<<"  ";
        }
        cout<<"* ";
    }
    cout<<endl;
}
int n;//half pyramid
cin>>n;
for( int row = 0; row < n; row++){
   for(int col=0; col< row +1; col++){
    cout<<"* ";
   }
   cout<<endl;
}
int m;
cin>>m;
 for(int row=0; row<m; row++){// inverted half pyramid
    for( int col=0 ; col<m-row ; col=col+1){
        cout<<"* ";
    }
    cout<<endl;


}
//nummeric half pyramid
for(int row=0 ; row<5; row++){
    for(int col=0; col<row+1; col++){
        cout<<col+1;
    }
    cout<<endl;
}
for(int row=0; row<5; row++){// numeric inverted half pyramid
    for( int col=0 ; col<5-row ; col=col+1){
        cout<<col+1;
    }
    cout<<endl;

}
}