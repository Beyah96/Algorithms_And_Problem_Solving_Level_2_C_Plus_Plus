#include <iostream>
#include <string>

using namespace std;

enum enEncryptDecrypt{ Orginal, Encrypt, Decrypt};

string ReadText() {
	string Text;

	cout << "Please enter a text : ";
	cin >> Text;

	return Text;
}

enEncryptDecrypt ReadEncryptOrDecrypt() {
	short Choice;
	cout << "Do you want to print Orginal (0) , Encrypted (1) or Decrypted (2) text ? (0, 1 or 2) : ";
	cin >> Choice;
	return (enEncryptDecrypt) Choice;
}

string EncryptDecrypt(string Message, bool ED, int EncryptionKey) {
	int index = 0;
	int AsciiCode;
	while (index < Message.length()) {
		AsciiCode = static_cast<int>(Message[index]);
		if (ED)
			Message[index] = char(AsciiCode + EncryptionKey);
		else
			Message[index] = char(AsciiCode - EncryptionKey);
		
		index++;
	}
	return Message;
}


void PrintText(string Text) {
	enEncryptDecrypt Choice = ReadEncryptOrDecrypt();
	int EncryptionKey;
	if (Choice == enEncryptDecrypt::Orginal)
		cout << "Text Before Encrypt : " << Text << endl;
	else{
		cout << "Please enter you encryption/decryption key : ";
		cin >> EncryptionKey;
		if (Choice == enEncryptDecrypt::Encrypt)
			cout << "Text After Encrypt : " << EncryptDecrypt(Text, true, EncryptionKey) << endl;
		else
			cout << "Text After Encrypt and Decrypt : " << EncryptDecrypt(Text, false, EncryptionKey) << endl;
	}

}





int main() {
	PrintText(ReadText());
	return 0;
}