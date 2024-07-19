#include <stdio.h>
#include <string.h>

typedef struct {
    int acc_no;
    char title[50];
    char author[50];
    char publisher[50];
    float cost;
} Book;
static int next_acc_no = 1; // initialize the next accession number to be assigned

void accept_book_details(Book *book) {
    printf("\nEnter details for Book %d:\n", next_acc_no);

    printf("Title: ");
    scanf(" %[^\n]s", book->title);

    printf("Author: ");
    scanf(" %[^\n]s", book->author);

    printf("Publisher: ");
    scanf(" %[^\n]s", book->publisher);

    printf("Cost: ");
    scanf("%f", &book->cost);

    book->acc_no = next_acc_no++; // assign the next accession number and increment it
}

void display_books_by_author(Book books[], int n, const char *author) {
    printf("Books by %s:\n", author);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Accession Number: %d, Title: %s, Publisher: %s, Cost: Rs. %.2f\n", books[i].acc_no, books[i].title, books[i].publisher, books[i].cost);
        }
    }
}

void display_books_by_publisher(Book books[], int n, const char *publisher) {
    printf("Books by %s:\n", publisher);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].publisher, publisher) == 0) {
            printf("Accession Number: %d, Title: %s, Publisher: %s, Cost: Rs. %.2f\n", books[i].acc_no, books[i].title, books[i].publisher, books[i].cost);
        }
    }
}

void display_expensive_books(Book books[], int n) {
    printf("Books costing Rs. 500 and above:\n");
    for (int i = 0; i < n; i++) {
        if (books[i].cost >= 500) {
            printf("Accession Number: %d, Title: %s, Publisher: %s, Cost: Rs. %.2f\n", books[i].acc_no, books[i].title, books[i].publisher, books[i].cost);
        }
    }
}

void display_all_books(Book books[], int n) {
    printf("All books:\n");
    for (int i = 0; i < n; i++) {
        printf("Accession Number: %d, Title: %s, Publisher: %s, Cost: Rs. %.2f\n", books[i].acc_no, books[i].title, books[i].publisher, books[i].cost);
    }
}

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    Book books[n];
    for (int i = 0; i < n; i++) {
        accept_book_details(&books[i]);
    }

    int choice;
    char search_author[100];
    char search_publisher[100];

    do {
        printf("\nMenu:\n");
        printf("1. Books of a specific author\n");
        printf("2. Books by a specific publisher\n");
        printf("3. All Books costing Rs. 500 and above\n");
        printf("4. All Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter author name: ");
                scanf(" %[^\n]s", search_author);
                display_books_by_author(books, n, search_author);;
                break;
            case 2:
                printf("Enter publisher name: ");
                scanf(" %[^\n]s", search_publisher);
                display_books_by_publisher(books, n, search_publisher);
                break;
            case 3:
                display_expensive_books(books, n);
                break;
            case 4:
                display_all_books(books, n);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    

    return 0;
}