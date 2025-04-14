#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
using namespace std;
struct item{
    string name,id,address;
    int contact,salary;
};
item e[100];
int total=0;
void empdata(){
    int choice;
    cout<<"How many employee do you want to enter??: ";
    cin>>choice;
    for(int i=total;i<total+choice;i++){
        cout<<"Enter data of employee"<<i+1<<endl;
        cout<<"Employee Name: ";
        cin>>e[i].name;
        cout<<"Employee ID: ";
        cin>>e[i].id;
        cout<<"Employee Address: ";
        cin>>e[i].address;
        cout<<"Employee Contact: ";
        cin>>e[i].contact;
        cout<<"Employee Salary: ";
        cin>>e[i].salary;
    }
    total=total+choice;
}
void show(){
    if(total!=0){
        for(int i=0;i<total;i++){
            cout<<"Data of Employee "<<i+1<<endl;
            cout<<"Employee Name: "<<e[i].name<<endl;
            cout<<"ID: "<<e[i].id<<endl;
            cout<<"Address: "<<e[i].address<<endl;
            cout<<"Salary: "<<e[i].salary<<endl;
            cout<<"Conatct: "<<e[i].contact<<endl;
        }
    }
    else{
        cout<<"Your record is empty"<<endl;
    }
}
void search(){
    if(total!=0){
        string id;
        cout<<"Enter id of data which you want to search: "<<endl;
        cin>>id;
        for(int i=0;i<total;i++){
            if(id==e[i].id){
                cout<<"Data of Employee "<<i+1<<endl;
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"ID: "<<e[i].id<<endl;
                cout<<"Address: "<<e[i].address<<endl;
                cout<<"Salary: "<<e[i].salary<<endl;
                cout<<"Conatct: "<<e[i].contact<<endl;
                break;
            }
            if(i==total-1){
                cout<<"No such record found"<<endl;
            }
        }
        
    }
    else{
        cout<<"Your record is empty"<<endl;
    }
}
void update(){
    if(total!=0){
        string id;
        cout<<"Enter id of data which you want to update: "<<endl;
        cin>>id;
        for(int i=0;i<total;i++){
            if(id==e[i].id){
                cout<<"Previous Data"<<endl;
                cout<<"Data of Emplyee "<<i+1<<endl;
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"ID: "<<e[i].id<<endl;
                cout<<"Address: "<<e[i].address<<endl;
                cout<<"Salary: "<<e[i].salary<<endl;
                cout<<"Conatct: "<<e[i].contact<<endl;
                cout<<"\n Enter new data"<<endl;
                cout<<"Employee Name: ";
                cin>>e[i].name;
                cout<<"ID: ";
                cin>>e[i].id;
                cout<<"Address: ";
                cin>>e[i].address;
                cout<<"Contact: ";
                cin>>e[i].contact;
                cout<<"Salary: ";
                cin>>e[i].salary;
                break;
            }
            if(i==total-1){
                cout<<"No such record found"<<endl;
            }
        }

    }
    else{
        cout<<"Your record is empty"<<endl;
    }
}
void del(){
    if(total!=0){
        char user;
        cout<<"Press 1 to delete full record"<<endl;
        cout<<"Press 2 to delete specific record"<<endl;
        user=getch();
        if(user=='1'){
            total=0;
            cout<<"All record is deleted...!!!"<<endl;
        }
        else if(user=='2'){
            string id;
            cout<<"Enter id of data which you want to delete: "<<endl;
            cin>>id;
            for(int i=0;i<total;i++){
                if(id==e[i].id){
                    for(int j=i;j<total;j++){
                        e[j].name=e[j+1].name;
                        e[j].id=e[j+1].id;
                        e[j].address=e[j+1].address;
                        e[j].contact=e[j+1].contact;
                        e[j].salary=e[j+1].salary;
                        total--;
                        break;
                    }
                    
                }
                if(i==total-1){
                    cout<<"No such record found"<<endl;
                }
            }
        }
    }
    else{
        cout<<"Your record is empty"<<endl;
    }
}
int main(){
    cout<<"\n\n\t\tEmployee Management System - Devashish Bisht"<<endl;
    cout<<"\n\n\t\tSign Up"<<endl;
    string username,password;
    cout<<"\n\t\tEnter username: ";
    cin>>username;
    cout<<"\n\t\tEnter password: ";
    cin>>password;
    cout<<"\n\t\tYour id is creating please wait....";
    for(int i=0;i<4;i++){
        cout<<".";
        Sleep(1000);
    }
    cout<<"\n\t\tYour id is created successfully"<<endl;
    system("CLS");
    start:

    cout<<"\n\n\t\tEmployee Management System - Devashish Bisht"<<endl;
    cout<<"\n\n\t\tLogin"<<endl;
    string username1,password1;
    cout<<"\n\t\tUsername: ";
    cin>>username1;
    cout<<"\n\t\tPassword: ";
    cin>>password1;
    cout<<"\n\t\tYour id is logging please wait....";
    for(int i=0;i<4;i++){
        cout<<".";
        Sleep(1000);
    }
    if(username1==username&&password1==password){
        system("CLS");
        char user;
        while(1){
            cout<<"\nPress 1 to enter data"<<endl;
            cout<<"Press 2 to show data"<<endl;
            cout<<"Press 3 to search data"<<endl;
            cout<<"Press 4 to update data"<<endl;
            cout<<"Press 5 to delete data"<<endl;
            cout<<"Press 6 to logout"<<endl;
            user=getch();
            switch(user){
                case '1':
                    empdata();
                    break;
                case '2':
                    show();
                    break;
                case '3':
                    search();
                    break;
                case '4':
                    update();
                    break;
                case '5':
                    del();
                    break;
                case '6':
                    goto start;
                    break;
                default:
                    cout<<"\aInavlid input"<<endl;
                    break;                        
            }
        }
    }
    else if(username!=username){
        cout<<"Your username is incorrect"<<endl;
        Sleep(3000);
        goto start;
    }
    else if(password1!=password){
        cout<<"Your passowrd is incorrect"<<endl;
        Sleep(3000);
        goto start;
    }

    return 0;

}
//Devashish Bisht