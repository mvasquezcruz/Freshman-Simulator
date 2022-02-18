#include <iostream>
#include <limits>
#include <vector> 

///fidngin love note, stolen pencil, hall pass, bullying scenario, summer reading, assembly, math class, lunch, ..

// alternate endings 

using namespace std; 

int main() {

int health = 60;
int popularity = 80;
int grades = 75;
int strength = 70;
int money = 20;
int romance = 0;

int scenario1;
int scenario2;
int scenario3;
int scenario4; 
int scenario5;
int scenario6;
int scenario7;

vector <string> inventory = {}; 

cout << "Hello! Welcome to Freshman Simulator!\n"; 

    cout << "\n";

  cout << "You've managed to get through middle school, but now the real adventure begins...you're now a freshman! High school is an exiting time for everyone. You get to meet new people, do new things, find new reasons to be depressed and anxious.... Just the usual. You may face some tough times ahead but the end goal is to get that sweet sweet high school diploma right? Get ready for your first year in high school. I wish you luck! \n";

    cout << "\n";

  cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

// Day One Starts Here
cout << "DAY 1 \n"; 
// Scenario 1
  cout << "\n8:30am | It's your first day of highschool! As always you were meant to read your independent reading book over the summer... you remembered didn't you?...you didn't.\nWell, what the hell you going to do? There's a quiz about the book next block!\n";
  //choices for scenario 1
  cout << "\n[1]sparknotes the book\n[2]ask your friend for a summary\n[3]try to read the book in the next 30 seconds\n";
    cin >> scenario1;

if (scenario1==1){ 
  cout << "\nSparknotes was very helpful but the quiz included a a quote you didn't see before. You got a 84%.\n";
   
  grades += 5; 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

}
else if (scenario1==2){
  cout << "\nYour friend also didn't read the  book. You're both fucked. At least you guessed and got a 20% on the quiz.\n";

  grades += 20; 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}
else {
  cout << "\nNice try, but why the hell would you do this? Your teacher noticed though that you tried. He gave to 10 extra points on the quiz, you got 51%\n";

  grades -= 10; 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
} 
    cout << "\n";

    //scenario 2 
cout << "\n11:20am | Finally, it's lunch time. You decide that this year you'll make new friends. Everyone is sitting in their own cliques.\nWhich table will you sit at?\n";
  //choices for scenario 2
  cout << "\n[1]Jocks\n[2]Popular Girls\n[3]Nerds\n[4]Goths\n";
    cin >> scenario2;

if (scenario2==1){ 
  cout << "\nYou go and sit down with the jocks, they find you weird but decided to keep you as the friend they can bully. It's not ideal but maybe this way you'll be popular. One of them hands you a condom and winks at you. You're not sure if he was flirting with you but you take it anyways.\nYou have gained: 'A condom'\n";
   
    popularity -= 5; 
    string a2 = "A condom"; 
    inventory.push_back(a2); 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

}
else if (scenario2==2){
  cout << "\nYou sit at the popular girl table. They talk about Pretty Little Liars and you knowing a little about it mention something. Surprised by your knowledge you have offically gained the nickame of 'bestie'. You're now popular. Weird way to get there.\nYou have gained: 'Bestie priveledges'\n";

    popularity += 15; 
    string b2 = "Bestie priveldges"; 
    inventory.push_back(b2); 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
}

else if (scenario2==3){
  cout << "\nYou sit down at the Nerd table. They're too busy playing D&D to pay attention to you. You try to make conversation with them and ask them what they're playing. Shocked by your ignorance, they go on a 20 minute rant on why D&D was the game of the century. They give you a 20 sided die in hopes you become more cultured. Maybe coming to this table was a mistake.\nYou have gained: '20 sided die'\n";

    popularity -= 5; 
    string c2 = "20 sided die"; 
    inventory.push_back(c2); 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

}
else {
  cout << "\nYou sit down at the Goth table. They're actually very nice and you get along with them pretty well. They ask you to join their discord server and there you discover they're actually furries. Sadly your reputation will never be the same after sitting at the furry table.\nYou have gained: 'emotional trauma'\n";

    popularity -= 30; 
    
    string d2 = "Emotional Trauma"; 
    inventory.push_back(d2); 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}
    cout << "\n";

//Scenario 3
cout << "\n1:45pm | Last class of the day. You're in math class and the girl next to you passes you a note.\nWill you open it?\n";
  //choices for scenario 3
  cout << "\n[1]Open it\n[2]Read it later\n[3]Throw it away\n";
    cin >> scenario3;

if (scenario3==1 && scenario2==1){ 
  cout << "\nYou open the note. Inside she asks: 'What are you doing later?;)'. Becoming friends with the jocks does have it's perks.\n";
   
    popularity += 10; 
    romance += 15; 

 cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

}
else if (scenario3==1){
  cout << "\nYou open the note. Inside it says: 'Will you go out with me Jake?'. Your name is not Jake though, he's the guy next to you. The girl, embarrased, slaps you in front of the whole class and runs away. What the hell is her deal?\n";

    popularity -= 10; 
    romance -=10;

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}

else if (scenario3==2){
  cout << "\nYou decide you will open the note later and pay attention to class. Good choice, go get that education I guess. The girl will never speak to you again though.\n";

    grades += 5; 
    popularity -= 5; 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
}

else {
  cout << "\nYou throw away the note assuming it was trash. What a jackass move.\n";

    popularity -= 10; 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}
    cout << "\n";
  
if(popularity<=20){ 
cout << "High school is tough. Specially when you're not popular. You got bullied out of freshman year. Good luck with the social anxiety for the rest of your life.\n"; 
return 0; 
} 
else if(grades<=30){
cout << "Omg how the fuck are your grades that bad. You've now failed freshman year. Imagine having to repeat this hell of a year. AGAIN. Smh\n";
return 0; 
} 
else { 
  cout << "You've made it through your first day. Make sure to wake up early for the next day...\n";
}

cout << "\n"; 

cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout << "DAY 2 \n";

    cout << "\n";

  cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout << "DAY 3 \n"; 

    cout << "\n";

  cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout << "DAY 4 \n"; 

    cout << "\n";

  cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout << "DAY 5 \n"; 

    cout << "\n";

  cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout << "DAY 6 \n"; 

    cout << "\n";

  cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n'); 

cout << "DAY 7 \n"; 

    cout << "\n";

 cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n');
  

cout << "Congratulations! You made it through your first week of high school! It will only get harder from here. But try to think positive! Think of all the good things you experienced this week... \nOk, yeah there was nothing good but beyond the point. I think if you survived this first week you're definetly not ready to survive the next 35 weeks. Welcome to hell on earth. \n"; 

    cout << "\n";

cout << "The End \n";


}