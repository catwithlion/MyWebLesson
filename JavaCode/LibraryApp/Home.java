import process.createShelf;

class Home {
    // it should imidiately open to the opening season firdst I mean
    // there is some
    void main(String args[]) {
        createShelf newShelf = new createShelf();
        System.out.println("the book  shelf available for now ");
        System.out.println(newShelf.creating().Title);
        System.out.println(newShelf.creating().bookshelfId);
        System.out.println(newShelf.creating().description);
    }
};
/*
 * what is this class for ?
 * it is the early class the app going to open with .
 * okay now I remember the use case that include splash screen does it means
 * inheritance ?
 * what isw the purpose of this pogram it is
 * 1,to hard code java
 * 2, also to learn the skeleltal of the library app
 * 
 * so fist of all I have to define what the Home class intended to contain ?
 * the Home page is where all part of the screen going to esonate and stem from
 * so the home page have books shelf so I have to tie up this to class
 * //the first succesfull code has been completed
 */
