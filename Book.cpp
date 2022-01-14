#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //Book ID
    int BookID[50];
    // Book Name
    string BookName[50];
    // Author of the book
    string Author[50];
    // Book Type
    string BookType[50];

    // year of publication
    int yearOfpublication[50];




    // registered Books
    // Book ID
   BookID[0] = 001;
   BookID[1] = 002;
   BookID[2] = 003;
   BookID[3] = 004;
   BookID[4] = 005;

    // Book Name
   BookName[0] = "Fiker eske mekabr";
   BookName[1] = "Oromay";
   BookName[2] = "Dertogada";
   BookName[3] = "Medemer";
   BookName[4] = "Mathematics";

    // Author
    Author[0] = "Addis Alemayehu";
    Author[1] = "Bealu Girma";
    Author[2] = "Yesmaeke Worku";
    Author[3] = "Dr Abiy Ahmed";
    Author[4] = "Galileo Galili";

    // Book Type
    BookType[0] = "Fiction";
    BookType[1] = "History";
    BookType[2] = "Scientific";
    BookType[3] = "Politics";
    BookType[4] = "Acedemic";


    //year Of publication
    yearOfpublication[0] = 1977;
    yearOfpublication[1] = 1983;
    yearOfpublication[2] = 1997;
    yearOfpublication[3] = 2019;
    yearOfpublication[4] = 1655;

    // Number of books
    int numberOfbooks = 5;
    int previousNumberOfbooks;
    // flag
    bool exit = 0;
    // option
    int option;
    // display all
    bool displayExit = 0;
    int displayOption;
    // registering books
    int idOfbook;
    string typeOfbook;
    int yearOfpublicationOfbook;
    string nameOfbook;
    string authorOfbook;

    // search Id
    int index = 0;
    int searchId;


    do
    {
        cout<< "\nWelcome to HUC Library books record\n"<<endl;
        cout<< "1. display book info:"<<endl;
        cout<< "2. insert new book info"<<endl;
        cout<< "3. search for book info:"<<endl;
        cout<< "4. exit\n\n"<<endl;
        cin >> option;
        switch (option)
        {
        case 1:
            do
            {
                cout << "\ndisplay books info: \n" << endl;
                cout << "\n1. display all books records:"<<endl;
                cout << "2. display individual book: " << endl;
                cout<< "3. back to main page\n"<<endl;
                cin >> displayOption;
                switch(displayOption)
                {
                case 1:
                    cout << setfill('_') << setw(120) << "\n" << endl;
                    cout << "BookID\t" << "BookName\t\t" <<  "Author\t\t" << "BookType\t\t " << "yearOfpublication\t" << endl;
                    cout << "\n" << setfill('_') << setw(120) << "\n" << endl;
                    for(int i = 0; i < numberOfbooks; i++)
                    {
                        string paddedYearOfpublication = to_string(yearOfpublication[i]);
                        string paddedAuthor = Author[i];
                        cout << BookID[i] << "\t" << BookName[i] << "\t" <<  paddedAuthor.append(25 - paddedAuthor.length(), ' ') << "\t" << BookType[i]  << "\t" <<  paddedYearOfpublication.append(16 - paddedYearOfpublication.length(), ' ')  << endl;
                        cout << setfill('_') << setw(120) << "\n" << endl;
                    }
                    break;
                case 2:
                    cout << "Id of the book: " << endl;
                    cin >> searchId;
                    cout << "\nThe book you are searching for: \n" << endl;
                    cout << setfill('_') << setw(120) << "\n" << endl;
                    cout << "BookID\t" << "BookName\t\t" <<  "Author\t\t" << "BookType\t" << "yearOfpublication\t"  << endl;
                    cout << "\n" << setfill('_') << setw(120) << "\n" << endl;
                    for(int i = 0; i < numberOfbooks; i++)
                    {
                        if(searchId == BookID[i])
                        {
                            index = i;
                            string paddedYearOfpublication = to_string(yearOfpublication[index]);
                            string paddedAuthor = Author[index];
                            cout << BookID[index] << "\t" << BookName[index] << "\t" <<  paddedAuthor.append(17 - paddedAuthor.length(), ' ') << "\t" << BookType[index] << "\t" <<  paddedYearOfpublication.append(16 - paddedYearOfpublication.length(), ' ') << endl;
                            cout << setfill('_') << setw(120) << "\n" << endl;

                            break;
                        }
                    }



                    break;
                case 3:
                    displayExit = 1;
                    break;
                default:
                    cout << "\nWrong input please type the correct input\n"<<endl;
                    break;

                }
                index = 0;
                searchId = 0;

            }
            while(!displayExit);
            break;
        case 2:
            cout << "\ninserting new book record\n"<< endl;
            int size;
            cout << "how many books do you want to add:\t";
            cin >> size;
            do
            {
                string test;
                if(size == 0){
                    break;
                }
                cout << "BookId: xxx\t";
                cin >> idOfbook;
                BookID[numberOfbooks] = idOfbook;
                getline(cin, test);
                cout << "\nBookName:\t";
                getline(cin, nameOfbook);
                BookName[numberOfbooks] = nameOfbook;
                cout << "\nAuthor: \t";
                getline(cin, authorOfbook);
                Author[numberOfbooks] = authorOfbook;
                cout << "\nBookType:\t";
                cin >> typeOfbook;
                BookType[numberOfbooks] = typeOfbook;
                getline(cin, test);
                cout << "\nYear of publication:\t";
                cin >> yearOfpublicationOfbook;
                yearOfpublication[numberOfbooks] = yearOfpublicationOfbook;
                previousNumberOfbooks = numberOfbooks;
                numberOfbooks++;
                size--;
            }
            while(size > 0);
            cout << setfill('_') << setw(120) << "\n" << endl;
            cout << "BookID\t" << "BookName\t\t" <<  "Author\t\t" << "BookType\t" << "yearOfpublication\t" << endl;
            cout << "\n" << setfill('_') << setw(120) << "\n" << endl;
            for(int i = previousNumberOfbooks; i < numberOfbooks; i++)
            {
                string paddedYearOfpublication = to_string(yearOfpublication[i]);
                string paddedAuthor = Author[i];
                cout << BookID[i] << "\t" << BookName[i] << "\t" <<  paddedAuthor.append(17 - paddedAuthor.length(), ' ') << "\t" << BookType[i] << "\t" <<  paddedYearOfpublication.append(16 - paddedYearOfpublication.length(), ' ') << endl;
                cout << setfill('_') << setw(120) << "\n" << endl;
            }

            break;
        case 3:
            cout << "\n3. search for book info by book id:\n"<<endl;
            cout << " Enter Id of the book you want to search: \n" << endl;
            cin >> searchId;


            for(int i = 0; i < numberOfbooks; i++)
            {
                if(searchId == BookID[i])
                {
                    index = i;
                    cout << setfill('_') << setw(120) << "\n" << endl;
                    cout << "BookID\t" << "Bookname\t\t" <<  "Author\t\t" << "BookType\t" << "yearOfpublication\t"  << endl;
                    cout << "\n" << setfill('_') << setw(120) << "\n" << endl;
                    string paddedYearOfpublication = to_string(yearOfpublication[index]);
                    string paddedAuthor = Author[index];
                    cout << BookID[index] << "\t" << BookName[index] << "\t" <<  paddedAuthor.append(17 - paddedAuthor.length(), ' ') << "\t" << BookType[index] << "\t" <<  paddedYearOfpublication.append(16 - paddedYearOfpublication.length(), ' ') << endl;
                    cout << setfill('_') << setw(120) << "\n" << endl;

                    break;
                }
            }
            break;
        case 4:
            exit = 1;
            break;

        default:
            cout << "\nWrong input please type the correct input\n"<<endl;
            break;
        }

    }
    while(!exit);


    return 0;
}
