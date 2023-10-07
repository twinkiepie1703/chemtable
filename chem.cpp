#include <bits/stdc++.h>

using namespace std;
int main()
{
    string name[] = {"Hydrogen", "Helium", "Lithium", "Beryllium", "Boron"};
    string element[] = {"H", "He", "Li", "Be", "B"};
    int metal[] = {0, 0, 1, 1, 0};
    int mass[] = {1, 4, 7, 9, 11};
    int numb[] = {1, 2, 3, 4, 5};
    int proton[] = {1, 2, 3, 4, 5};
    int electron[] = {1, 2, 3, 4, 5};

    cout<<"Do you want to input chemical element or compound? (1/2)"<<endl;
    bool ans = 1;
    while(ans){
        string ans1;
        cin>>ans1;
        if(ans1 == "1" || ans1 == "element" || ans1 == "Element"){
            ans = 0;
            cout<<"Input name of element: ";
            string s;
            cin>>s;
            bool ch = 1;
            for(int i=0; i<5; i++){
                if(s==name[i]){
                    cout<<"Chemical name: "<<name[i]<<endl;
                    cout<<"Chemical symbol: "<<element[i]<<endl;
                    cout<<"Mass of "<<s<<": "<<mass[i]<<endl;
                    cout<<"Atomic number: "<<numb[i]<<endl;
                    cout<<"Number of protons: +"<<proton[i]<<endl;
                    cout<<"Number of electrons: -"<<electron[i]<<endl;
                    cout<<"Number of neutrons: "<<mass[i] - numb[i]<<endl;
                    ch = 0;
                    break;
                }
            }
            if(ch) cout<<"Sorry! Element wasn't founded!"<<endl;
        }
        else if(ans1 == "2" || ans1 == "compound" || ans1 == "Compound"){
            ans = 0;
            cout<<"Input name of compound: ";
            string s;
            cin>>s;
        }
        else{
            cout<<"Wrong input! Try once more!"<<endl;
        }
    }

    cout<<"Do you want search by range? (Y/N)"<<endl;
    char an;
    bool check;
    cin>>an;
    while(check){
        if(an == 'Y' || an == 'y'){
            int a, b;
            cout<<"Input initial range: ";
            cin>>a;
            cout<<"Input final range: ";
            cin>>b;
            cout<<"Elements in range ["<<a<<";"<<b<<"]"<<endl;
            if(a > b || a > 5 || b > 5) {
                cout<<"Wrong input!";
            }
            else{
                for(int i = a-1; i<b; i++){
                    cout<<name[i]<<";"<<endl;
                }
            }
            break;
        }
        else if(an == 'N' || an == 'n'){
            cout<<"Next step..."<<endl;
            break;
        }
        else{
        cout<<"Wrong input! Try once more!"<<endl;
        }
    }
    cout<<"Checking element - metal or nonmetal, type name of element: ";
    bool cq = 0;
    string met;
    cin>>met;
    for(int i=0; i<5; i++){
        if(met == name[i]){
            if(metal[i] == 1){
                cout<<"Metal";
            }
            else cout<<"Non-metal";

            break;
        }
        else cq = 1;
    }
    if(cq) cout<<"Sorry! Element wasn't founded!"<<endl;



    return 0;
}
