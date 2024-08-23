#include <iostream>
#include <string>

// Clase que representa una cuenta bancaria
class BankAccount {
private:
    std::string accountNumber; // Atributo privado: número de cuenta
    double balance;            // Atributo privado: saldo de la cuenta

public:
    // Constructor para inicializar la cuenta
    BankAccount(const std::string& accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    // Método público para depositar dinero en la cuenta
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    // Método público para retirar dinero de la cuenta
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds." << std::endl;
        } else {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }

    // Método público para obtener el saldo actual
    double getBalance() const {
        return balance;
    }

    // Método público para obtener el número de cuenta
    std::string getAccountNumber() const {
        return accountNumber;
    }

    // Método público para establecer un nuevo número de cuenta
    void setAccountNumber(const std::string& newNumber) {
        accountNumber = newNumber;
    }

    // Método público para imprimir los detalles de la cuenta
    void printAccountDetails() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    // Crear una cuenta bancaria
    BankAccount account("123456789", 1000.0);

    // Imprimir detalles iniciales de la cuenta
    std::cout << "Initial account details:" << std::endl;
    account.printAccountDetails();

    // Realizar operaciones en la cuenta
    account.deposit(500.0);   // Depositar dinero
    account.withdraw(200.0);  // Retirar dinero
    account.withdraw(1500.0); // Intentar retirar más de lo disponible

    // Cambiar el número de cuenta
    account.setAccountNumber("987654321");

    // Imprimir los detalles actualizados de la cuenta
    std::cout << "Updated account details:" << std::endl;
    account.printAccountDetails();

    return 0;
}
