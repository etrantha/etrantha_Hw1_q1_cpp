//Programmed by Eric Trantham
#include <iostream>
#include <string>

using namespace std;

struct Check{
    int checkNum, checkAmount;
    string checkMemo;
};

const int n = 5;


class CheckBook{
        public:
            int numOfChecks, checklimit, lastDeposit;
            CheckBook():balance(0), numOfChecks(0){};
            CheckBook(int balance1):numOfChecks(0){};
            void setCheckLimit();
            void setlastDeposit();
            int getLastDesposit(){return lastDeposit;};
            Check check1;
            Check arr[n];
            void deposit(int checkAmmount1);
            void displayChecks();
            int displayBalane(){cout << "balance = " << balance << endl;};
            bool writeCheck(float amount, string memo1);


        private:
            float balance;

};




int main() {
    std::cout << "Hello, World!" << std::endl;
    CheckBook check1, check2(1000);
    check1.setCheckLimit();
    check1.deposit(1000);
    //check2.deposit()
    check1.writeCheck(150, "PC");
    check1.writeCheck(250, "house");
    check1.writeCheck(500, "car");
    check1.writeCheck(250, "discgolf");
    check1.deposit(1000);
    check1.writeCheck(750, "cat");
    check1.writeCheck(250, "monkey");
    check1.writeCheck(55, "parrot");
    check1.displayBalane();
    check1.displayChecks();


    return 0;
}

void CheckBook::deposit(int checkAmmount1) {
   // Check check1(int checknum1, int checkAmmount1, string memo1);

    balance += checkAmmount1;
    cout << balance << endl;
}


void CheckBook::displayChecks()
{
    size_t n = sizeof(arr)/sizeof(arr[0]);
    for (int i = n-1; i > -1; i--) {
        cout << "check number:" << arr[i].checkNum << "  amount: " << arr[i].checkAmount << "  memo:" << arr[i].checkMemo << endl;
    }
}

void CheckBook::setlastDeposit() {
    lastDeposit = check1.checkAmount;
}

void CheckBook::setCheckLimit() {
    checklimit = n;
}

bool CheckBook::writeCheck(float amount, string memo1) {
    int i;
    if (amount <= balance && arr[4].checkAmount == 0) //amount must be less than balance and less than 5 checks written
    {
        if (arr[0].checkAmount == 0)
        {
            arr[0].checkNum = i;
            arr[0].checkAmount = amount;
            arr[0].checkMemo = memo1;
            balance -= arr[0].checkAmount;
            numOfChecks++;
            cout << endl << "This Check number: " << i << endl << "Check Amount: " << amount << endl;
            cout << "Your Current Balance is:" << balance << endl << endl;
        }
        else if(arr[1].checkAmount == 0)
        {
            arr[1].checkNum = i + 1;
            arr[1].checkAmount = amount;
            arr[1].checkMemo = memo1;
            balance -= arr[1].checkAmount;
            numOfChecks++;
            cout << endl << "This Check number: " << i+1 << endl << "Check Amount: " << amount << endl;
            cout << "Your Current Balance is:" << balance << endl << endl;
        }
        else if(arr[2].checkAmount == 0)
        {
            arr[2].checkNum = i + 2;
            arr[2].checkAmount = amount;
            arr[2].checkMemo = memo1;
            balance -= arr[2].checkAmount;
            numOfChecks++;
            cout << endl << "This Check number: " << i+2 << endl << "Check Amount: " << amount << endl;
            cout << "Your Current Balance is:" << balance << endl << endl;
        }
        else if(arr[3].checkAmount == 0)
        {
            arr[3].checkNum = i + 3;
            arr[3].checkAmount = amount;
            arr[3].checkMemo = memo1;
            balance -= arr[3].checkAmount;
            numOfChecks++;
            cout << endl << "This Check number: " << i+3 << endl << "Check Amount: " << amount << endl;
            cout << "Your Current Balance is:" << balance << endl << endl;
        }
        else if(arr[4].checkAmount == 0)
        {
            arr[4].checkNum = i + 4;
            arr[4].checkAmount = amount;
            arr[4].checkMemo = memo1;
            balance -= arr[4].checkAmount;
            numOfChecks++;
            cout << endl << "This Check number: " << i+4 << endl << "Check Amount: " << amount << endl;
            cout << "Your Current Balance is:" << balance << endl << endl;
        }

    }
        else
            cout << "Error: You can't write a check for more than your balance or write more than 5 checks" << endl;
            cout << "Check limit is: " << checklimit << endl;
            return false;
        };









