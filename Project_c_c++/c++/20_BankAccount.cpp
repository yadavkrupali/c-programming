/*Assume that a bank maintains two kinds of accounts for customer, one called as
saving account and other as current accounts provides Simple interest and
withdraw facilities but no cheque book facility. The current account provides
cheque book facility but no interest. Current account holders should maintain a
minimum balance and if the balance falls below this level a service charges is
imposed
 Create a class account that stores customer name, account number and
type of account. From this derive classes curr_acc and sav_acct to make them
more specific to their requirements Include necessary member functions in order
to achieve the following tasks
a. Accepts deposit from a customer and update balance.
b. Display the balance.
c. Compute and deposit interest.
d. Permit withdraws and updates the balance.
e. Check for the minimum balance, impose penalty, necessary and
update the balance.*/

#include <iostream>
using namespace std;
class Account
{
protected:
    string CustomerName;
    int AccNumber, balance, DepositAmount, withdrawAmount;

public:
    string Acctype;
    void GetData()
    {
        cout << "Enter the customer name: ";
        cin >> CustomerName;

        cout << "Enter the account number: ";
        cin >> AccNumber;

        cout << "Enter the balance: ";
        cin >> balance;
    }

    void SetData()
    {
        cout << endl;
        cout << endl;
        cout << "------Customer details------" << endl;
        cout << "Customer Name: " << CustomerName << endl;
        cout << "Account number: " << AccNumber << endl;
        cout << "Balance in Account: " << balance << endl;
    }

    void dipositAmount()
    {
        cout << endl;
        cout << "Enter amount for deposit: ";
        cin >> DepositAmount;
        balance = balance + DepositAmount;
        cout << "balance after deposit: " << balance;
    }

    void withdraw()
    {
        cout << endl;
        cout << "Enter withdraw amount: ";
        cin >> withdrawAmount;

        balance = balance - withdrawAmount;

        cout << "Balance after withdraw: " << balance << endl;
    }
};
class CrrAccount : public Account
{

public:
    void CheckBalancePenalty()
    {
        if (balance <= 15000)
        {
            balance = balance - 500;
            cout << endl;
            cout << "Dear customer your balance is < then 15000 so bank will take penalty according T&C " << endl;
            cout << "Balance after penalty: " << balance << endl;
        }
    }
};
class SavingAccount : public Account
{
private:
    float sIntrest;

public:
    void SimpleIntrest()
    {
        cout << endl;
        sIntrest = balance * 4.5 * 1 / 100;
        balance = balance + sIntrest;
        cout << endl;
        cout << "intrest amont: " << sIntrest << endl;
        cout << "Balance after credit instrest into account: " << balance << endl;
    }
};
int main()
{
    string accountType;

    cout << "Enter the account type: ";
    cin >> accountType;

    if (accountType == "saving")
    {
        SavingAccount sa;
        sa.GetData();
        sa.SetData();
        sa.withdraw();
        sa.dipositAmount();
        sa.SimpleIntrest();
    }
    else
    {
        CrrAccount ca;
        ca.GetData();
        ca.SetData();
        ca.dipositAmount();
        ca.withdraw();
        ca.CheckBalancePenalty();
    }
}
