package Entities;

//now the question going to be "what is the blue print of every entity "
/*
1,name 
2, id 
3, */

public class shelf {
    public int bookshelfId;
    public String Title;
    public String description;

    public shelf(String Title) {
        this.Title = Title;
        // --- FIX: Initialize other attributes with default values ---
        this.description = ""; // Default to an empty string, NOT null.
        this.bookshelfId = 1;
    }

}
