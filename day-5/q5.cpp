#include<iostream>
using namespace std;
class book{
    string b_name;
    string auth;
    float price;
    public:
    book();
    friend void display(book*,int);
};
book::book(){
    cout<<"b_name:";
    cin>>b_name;
    cout<<"auth:";
    cin>>auth;
    cout<<"price:";
    cin>>price;
    //std::__cxx11::string book::b_name
}
void display(book* book,int n){
    for(int i=0;i<n;i++){
    cout<<"b_name:"<<book->b_name<<endl;
    cout<<"auth:"<<book->auth<<endl;
    cout<<"price:"<<book->price<<endl;
    book++;
    }
}
int main(){
    cout<<"Enter a number of books:";
    int n;
    cin>>n;
    book* ob=new book[n];
    display(ob,n);

}