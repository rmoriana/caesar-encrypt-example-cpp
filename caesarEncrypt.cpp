#include <cstdio>
#include <iostream>

void encryptSymmetric(std::string &msg, int key) {
	for (size_t i = 0; i < msg.length(); i++)
	{
		msg[i] += key;
	}

}

void decryptSymmetric(std::string &msg, int key) {
	for (size_t i = 0; i < msg.length(); i++)
	{
		msg[i] -= key;
	}
}

int main() {

	std::string msg = "This is an encrypted message.";
	encryptSymmetric(msg, 5);
	std::cout << msg.data() << std::endl;
	decryptSymmetric(msg, 5);
	std::cout << msg.data() << std::endl;

	system("pause");
	return 0;
}