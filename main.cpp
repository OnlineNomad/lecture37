#include <iostream>

using namespace std;


class BankSys {
    private:
        double Balance = 0;
        double Loan = 0;
    public:
        static int ObjCount;
    
        BankSys(double Balance){
            this-> Balance = Balance;
            ObjCount++;
        }
        
        static int getCount() {
            return ObjCount;
        }
        void getBalance(){
            cout << "Your Balance is: " << Balance << endl;
            cout << "Yout Loan amount is: " << Loan << endl;
        }
        
        void setBalance(float xAmount) {
            Balance += xAmount;
            cout << "You filed yout balance in the amount of: " << xAmount << endl;
        }
        void takeLoan(float nAmount) {
            Loan -= nAmount;
            Balance += nAmount;
            cout << "You took loan in the amount of: " << nAmount << endl;
        }
    
    
};
int BankSys::ObjCount;

int main()
{
    BankSys BOG(1000);
    BOG.getBalance();
    BOG.takeLoan(234.5);
    BOG.getBalance();
    
    cout << "Object count is: " << BankSys::getCount() << endl;
    
    return 0;
}