#include <iostream>
using namespace std;

int main()
{
  int stream, subject, Optional;
  while (true)
  {

    cout << "\n=============================================\n";
    cout << "       STUDENT STREAM SELECTION SYSTEM       \n";
    cout << "=============================================\n";

    cout << "1. Science\n";
    cout << "2. Arts / Humanities\n";
    cout << "3. Commerce\n";
    cout << "4. Exit\n ";
    cout << "Enter your Stream : ";
    cin >> stream;

    switch (stream)
    {
    case 1:
      cout << "\n================Science====================\n";
      cout << "\n1. PCM \n";
      cout << "2. PCB\n";
      cout << "3.Exit\n";
      cout << "Enter item: ";
      cin >> subject;
      switch (subject)
      {
      case 1:
        cout << "\n=============Science==PCM=============\n";
        cout << "English \n";
        cout << "Physics \n";
        cout << "Chemistry \n";
        cout << "Mathematics \n";
        cout << "\n Optional subject:\n";
        cout << "1. Hindi\n";
        cout << "2. Computer Science\n";
        cout << "3. Physical Education\n";
        cout << "4. Fine Arts\n";
        cout << "Enter your Optional Subject : ";
        cin >> Optional;
        switch (Optional)

        {
        case 1:
          cout << "\nOptional: Hindi\n";
          break;
        case 2:
          cout << "\nOptional: Computer Science\n";
          break;

        case 3:
          cout << "\nOptional: Physical Education\n";
          break;

        case 4:
          cout << "\nOptional: Fine Arts \n";
          break;

        default:
          cout << "\nInvalid Optional Subject Choice!\n";
          cout << "Please choose between 1 and 4.\n";
        }

        break;
      case 2:
        cout << "\n=============Science==PCB=============\n";
        cout << "English \n";
        cout << "Physics \n";
        cout << "Chemistry \n";
        cout << "Biology \n";
        cout << "\n Optional subject:\n";
        cout << "1. Hindi\n";
        cout << "2. Computer Science\n";
        cout << "3. Physical Education\n";
        cout << "4. Fine Arts\n";
        cout << "Enter your Optional Subject : ";
        cin >> Optional;
        switch (Optional)

        {
        case 1:
          cout << "\nOptional: Hindi\n";
          break;
        case 2:
          cout << "\nOptional: Computer Science\n";
          break;

        case 3:
          cout << "\nOptional: Physical Education\n";
          break;
        case 4:
          cout << "\nOptional: Fine Arts \n";
          break;

        default:
          cout << "\nInvalid Optional Subject Choice!\n";
          cout << "Please choose between 1 and 3.\n";
        }
        break;
      case 3:
        cout << "\nBack...\n";
        break;

      default:
        cout << "\nInvalid  Subject Choice!\n";
        cout << "Please choose between 1 and 3.\n";
      }
      break;

    case 2:
      cout << "\n============= Arts / Humanities===============\n";
      cout << "English \n";
      cout << "History \n";
      cout << "Political Science \n";
      cout << "Geography\n";
      cout << "\n Optional subject:\n";
      cout << "1. Hindi\n";
      cout << "2. Computer Science\n";
      cout << "3. Physical Education\n";
      cout << "4. Economics\n";
      cout << "5. Sociology\n";
      cout << "6. Psychology\n";
      cout << "7. Fine Arts\n";
      cout << "Enter your Optional Subject : ";
      cin >> Optional;
      switch (Optional)

      {
      case 1:
        cout << "\nOptional: Hindi\n";
        break;
      case 2:
        cout << "\nOptional: Computer Science\n";
        break;

      case 3:
        cout << "\nOptional: Physical Education\n";
        break;
      case 4:
        cout << "\nOptional: Economics\n";
        break;

      case 5:
        cout << "\nOptional: Sociology\n";
        break;
      case 6:
        cout << "\nOptional: Psychology\n";
        break;

      case 7:
        cout << "\nOptional: Fine Arts \n";
        break;
      default:
        cout << "\nInvalid Optional Subject Choice!\n";
        cout << "Please choose between 1 and 7.\n";
      }

      break;

      // ==============Commerce========
    case 3:
      cout << "\n=============Commerce================\n";
      cout << "English \n";
      cout << "Accountancy \n";
      cout << "Business Studies \n";
      cout << "Economics\n";
      cout << "\n Optional subject:\n";
      cout << "1. Hindi\n";
      cout << "2. Computer Science\n";
      cout << "3. Physical Education\n";
      cout << "4.  Mathematics\n";

      cout << "Enter your Optional Subject : ";
      cin >> Optional;
      switch (Optional)

      {
      case 1:
        cout << "\nOptional: Hindi\n";
        break;
      case 2:
        cout << "\nOptional: Computer Science\n";
        break;

      case 3:
        cout << "\nOptional: Physical Education\n";
        break;
      case 4:
        cout << "\nOptional: Mathematics\n";
        break;

      default:
        cout << "\nInvalid Optional Subject Choice!\n";
        cout << "Please choose between 1 and 4.\n";
      }

      break;

    case 4:
      cout << "\nThank you for using the system!\n";
      return 0;

    default:
      cout << "\nInvalid Stream Choice!\n";
      cout << "Please choose between 1 and 4.\n";
      break;
    }
  }
}