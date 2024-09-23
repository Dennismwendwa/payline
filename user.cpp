#include <openssl/evp.h>
#include <sstream>
#include <iomanip>

#include "main.h"

std::string User::hashPassWord(const std::string& plain_password) const {
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int length = 0;

    EVP_MD_CTX* context = EVP_MD_CTX_new();

    EVP_DigestInit_ex(context, EVP_sha256(), NULL);

    EVP_DigestUpdate(context, plain_password.c_str(), plain_password.size());
    EVP_DigestFinal_ex(context, hash, &length);
    
    EVP_MD_CTX_free(context);
    std::stringstream ss;
    for (unsigned int i = 0; i < length; i++){
        ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);
    }
    return ss.str();

}

User::User(const std::string &user,
           const std::string &pass,
           const std::string &email,
           const std::string first_name,
           const std::string &last_name
           ): 
            first_name(first_name),
            last_name(last_name),
            username(user),
            email(email) {
                password = hashPassWord(pass);
            }

void User::displayRole() const {
    std::cout << "User: " << username << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Password: " << password << std::endl;
}
User::~User() = default;
