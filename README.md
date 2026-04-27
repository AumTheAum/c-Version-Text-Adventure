# c-Version-Text-Adventure

## UML

classDiagram
    Main <|-- Menu
    Main <|-- Room
    Main : -int main()
    Main : -int choice

    class Menu{
      -void show_menu()
      -static int first_time
      -static int rest_time
    }
    class Room{
      -void initRoom()
      -void enter_room()
      -room_visited
    }


## About

I want to put my about section here since I realized it isnt going to work to have it in the game itself

I wanted to start off my mentioning that I had to cut off so much in order to make this reachable for me: someone who has been nonstop struggling this whole semester. On top of technically cutting off the about section, I also had to cut the save feature too because I followed a tutorial on it and realized it wasn't truly my own work nor could I explain it as if it were. The game is now as simple as it can be.

As of writing this, I am having a bunch of trouble figuring out how to get the menu to display once and then a new menu to display for the commands for the room switching. I shouldn't have restarted the project three times and just went with the first thing, and I should've reached out for help instead of trying to prove something. I acknowledge these faults and how they may refelct on the project.
edit: it works!! I'm so happy!

I ended up deciding to switch from java to c in the end. I like java, but it was just way to much setup just to type out a simple description. C, also, reminds me a little bit about python which is a language I am very comfortable in. I figured I would have more fun figuring c out than java, so despite the review I had to do I decided it would be better to swap.

I also just realized that the underscore naming conventions I used last year work for this code. For some reason, I thought this whole semester that I had to follow the "exampleTest" naming convention rather than "example_test", which fueled my confusion. I switched back for this, now knowing it doesn't really influence anything.

I'm still learning as I go, and there will definitely be a part where the code becomes unusable... but maybe the story in the code I'm trying to make is at least a little interesting?

new edit: My problem now is trying to get the code to switch rooms. Maybe I just have to have all the rooms in one segment. I'll try it...

I think I'm going to turn in what I have. I want to do more and figure more stuff out, but I just have so much left to do in other classes. I want to revisit this over the summer if I can though. I know I can get this working if I can let it be the only thing I'm focused on..