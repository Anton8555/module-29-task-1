#include "dog.h"

/*!
 * @brief The dog class constructor.
 * @param inName - dog's name.
 */
Dog::Dog(std::string inName) {
    // naming a dog
    name = inName;

    // skill list initialization
    listTalent.push_back(new Swimming());
    listTalent.push_back(new Dancing());
    listTalent.push_back(new Counting());
}

/*!
 * @brief The function of displaying a message about skills.
 */
void Dog::show_talent() {
    std::cout << "This is " << name << " and it has some talents:\n";
    for (const auto& elem: listTalent) {
        std::cout << "\t";
        elem->show_talent();
    }
}
