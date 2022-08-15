#include "dog.h"

/*!
 * @brief The dog class constructor.
 * @param inName - dog's name.
 */
Dog::Dog(const std::string &inName): name(inName) {
    // skill list initialization
    listTalent.push_back(new Swimming());
    listTalent.push_back(new Dancing());
    listTalent.push_back(new Counting());
}

/*!
 * @brief The destructor of the Dog class.
 */
Dog::~Dog() {
    for(auto& element:listTalent)
        delete element;
    listTalent.clear();
}

/*!
 * @brief The function of displaying a message about skills.
 */
void Dog::show_talent() const {
    std::cout << "This is " << name << " and it has some talents:\n";
    for (const auto& elem: listTalent) {
        std::cout << "\t";
        elem->show_talent();
    }
}
