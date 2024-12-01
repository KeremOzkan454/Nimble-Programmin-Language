#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

// Temel veri tiplerini tanımlıyoruz.
typedef int NimbleInt;
typedef double NimbleFloat;
typedef string NimbleString;

// Nimble dilindeki fonksiyon tiplerini tanımlıyoruz.
typedef void (*NimbleFunction)(void);

// Basit bir yazdırma fonksiyonu
void printNimbleString(const NimbleString& str) {
    cout << str << endl;
}

// Nimble dilinde değişkenler için bir sınıf
class NimbleVariable {
public:
    NimbleString name;
    NimbleInt intValue;
    NimbleFloat floatValue;
    NimbleString stringValue;

    // Yapıcı fonksiyon
    NimbleVariable(NimbleString n, NimbleInt intVal, NimbleFloat floatVal, NimbleString strVal) 
        : name(n), intValue(intVal), floatValue(floatVal), stringValue(strVal) {}

    // Değişkenin değerini yazdıran bir fonksiyon
    void print() {
        cout << "Variable Name: " << name << endl;
        cout << "Integer Value: " << intValue << endl;
        cout << "Float Value: " << floatValue << endl;
        cout << "String Value: " << stringValue << endl;
    }
};

// Nimble dilinde temel komutların bir listesi
class NimbleCommand {
public:
    string commandType;
    NimbleFunction func;

    NimbleCommand(string cmd, NimbleFunction f) : commandType(cmd), func(f) {}

    void execute() {
        cout << "Executing command: " << commandType << endl;
        func();
    }
};

// Ana fonksiyon: Dilin temel özelliklerinin test edildiği yer
int main() {
    // Nimble dilinde bir değişken tanımlıyoruz
    NimbleVariable var("age", 25, 0.0, "Nimble User");

    // Değişkeni yazdıralım
    var.print();

    // Bir fonksiyon oluşturalım ve çalıştıralım
    NimbleCommand cmd("PrintMessage", []() {
        printNimbleString("Hello from Nimble!");
    });

    // Komutu çalıştırıyoruz
    cmd.execute();

    return 0;
}
