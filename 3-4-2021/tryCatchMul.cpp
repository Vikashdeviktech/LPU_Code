#include<iostream>
using namespace std;

int main(){

    try{
        throw 10.9f;
    }catch(float x){
        cout<<x<<"is float";
    }catch(char x){
        cout<<x<<"is char";
    }catch(int x){
        cout<<x<<" is integer";
    } catch(...){
        cout<<"error wrong message";  // default catch block if no block is executed
    } 
}