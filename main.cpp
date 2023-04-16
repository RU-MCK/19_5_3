#include <iostream>
#include <fstream>
int main() {
  std::fstream list;
  std::string path = "C:\\Users\\User\\Desktop\\temp.txt";
  list.open(path);
  if (!list.is_open()) {
    std::cout << "File opening error!" << std::endl;
  } else {
    std::string name;
    std::string surname;
    int salary = 0;
    int sum = 0;
    int maxSalary = -1;
    std::string date;
    std::string nameMaxSalary;

    while (!list.eof()) {
      list >> name >> surname >> salary >> date;
      sum += salary;
      if (salary > maxSalary) {
        maxSalary = salary;
        nameMaxSalary = name += " " + surname;
      }
      std::cout << name << " " << surname << " " << salary << " " << date << std::endl;
    }
    std::cout << std::endl
              << "Total sum: " << "\t" << sum << std::endl
              << "Maximum payout: " << nameMaxSalary
              << " " << maxSalary << std::endl;
    list.close();
  }
  return 0;
}
