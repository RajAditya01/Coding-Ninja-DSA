//using while loop

// #include<iostream>
// using namespace std;

// int main(){

//     int i,count =0, j;
//     cout<<"enter the number:";
//     cin>>i;
//     j=1;

//     while(j<=i){
//         if(i%j==0){
//             count ++;
//         }
//         j++;
//     }

//     if(count==2){
//         cout<<"prime Number"<<endl;
//             }
//     else{
//         cout<<"Composite number"<<endl;
//     }
//     return 0;
// }


//using for loop
#include<iostream>
using namespace std;

int main(){
    int i,j=1,count=0;
    cout<<"emter the number: ";
    cin>>i;



    for(j; j<=i; j++){
        if(i%j==0){
            count ++;
        }
        j++;
    }

    if(count==2){
        cout<<"prime Number"<<endl;
            }
    else{
        cout<<"Composite number"<<endl;
    }
    return 0;
}