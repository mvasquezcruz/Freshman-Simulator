#include <iostream>
#include <limits>
#include <vector> 

///fidngin love note, stolen pencil, hall pass, bullying scenario, summer reading, assembly, math class, lunch, ..

// alternate endings 

using namespace std; 

int main() {
//stats
int health = 60;
int popularity = 80;
int grades = 75;
int strength = 70;
int money = 20;
int romance = 0;

// Scenario choices
int scenario1;
int scenario2;
int scenario3;
int scenario4; 
int scenario5;
int scenario6;
int scenario7;
int scenario8; 
int scenario9;
int scenario10;
int scenario11;
int scenario12;
int scenario13;
int scenario14;


vector <string> inventory = {}; 
//Welcome Page
cout << "Hello! Welcome to Freshman Simulator!\n"; 

    cout << "\n";

  cout << "You've managed to get through middle school, but now the real adventure begins...you're now a freshman! High school is an exiting time for everyone. You get to meet new people, do new things, find new reasons to be depressed and anxious.... Just the usual. You may face some tough times ahead but the end goal is to get that sweet sweet high school diploma right? Get ready for your first year in high school. I wish you luck! \n";

    cout << "\n";

  cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

// Day 1
cout << "DAY 1 \n"; 
// Scenario 1
  cout << "\n8:30am | It's your first day of highschool! As always you were meant to read your independent reading book over the summer... you remembered didn't you?...you didn't.\nWell, what the hell you going to do? There's a quiz about the book next block!\n";
  //choices for scenario 1
  cout << "\n[1]sparknotes the book\n[2]ask your friend for a summary\n[3]try to read the book in the next 30 seconds\n";
    cin >> scenario1;

if (scenario1==1){ 
  cout << "\nSparknotes was very helpful but the quiz included a a quote you didn't see before. You got a 84%.\n";
   
  grades += 5; 

   cout << "\nGrades +5\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

}
else if (scenario1==2){
  cout << "\nYour friend also didn't read the  book. You're both fucked. At least you guessed and got a 20% on the quiz.\n";

  grades -= 20; 

   cout << "\nGrades -20\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}
else {
  cout << "\nNice try, but why the hell would you do this? Your teacher noticed though that you tried. He gave to 10 extra points on the quiz, you got 51%\n";

  grades -= 10; 

  cout << "\nGrades -10\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
} 
  // end of scenario 1
    cout << "\n";

  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    //scenario 2 
cout << "\n11:20am | Finally, it's lunch time. You decide that this year you'll make new friends. Everyone is sitting in their own cliques.\nWhich table will you sit at?\n";
  //choices for scenario 2
  cout << "\n[1]Jocks\n[2]Popular Girls\n[3]Nerds\n[4]Goths\n";
    cin >> scenario2;

if (scenario2==1){ 
  cout << "\nYou go and sit down with the jocks, they find you weird but decided to keep you as the friend they can bully. It's not ideal but maybe this way you'll be popular. One of them hands you a condom and winks at you. You're not sure if he was flirting with you but you take it anyways.\nYou have gained: 'A condom'\n";
   
    popularity += 5; 
    string a2 = "A condom"; 
    inventory.push_back(a2); 

    cout << "\nPopularity +5\n";

    for(int i=0; i < inventory.size(); i++)
    cout << "\nInventory: " << inventory[i] << ' ';

    cout << "\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

}
else if (scenario2==2){
  cout << "\nYou sit at the popular girl table. They talk about Pretty Little Liars and you knowing a little about it mention something. Surprised by your knowledge you have offically gained the nickame of 'bestie'. You're now popular. Weird way to get there.\nYou have gained: 'Bestie priveledges'\n";

    popularity += 15; 
    string b2 = "Bestie priveldges"; 
    inventory.push_back(b2); 

    cout << "\nPopularity +15\n";

    for(int i=0; i < inventory.size(); i++)
    cout << "\nInventory: " << inventory[i] << ' ';

    cout << "\n"; 

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
}

else if (scenario2==3){
  cout << "\nYou sit down at the Nerd table. They're too busy playing D&D to pay attention to you. You try to make conversation with them and ask them what they're playing. Shocked by your ignorance, they go on a 20 minute rant on why D&D was the game of the century. They give you a 20 sided die in hopes you become more cultured. Maybe coming to this table was a mistake.\nYou have gained: '20 sided die'\n";

    popularity -= 5; 
    string c2 = "20 sided die"; 
    inventory.push_back(c2); 

    cout << "\nPopularity -5\n";

    for(int i=0; i < inventory.size(); i++)
    cout << "\nInventory: " << inventory[i] << ' ';

    cout << "\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

}
else {
  cout << "\nYou sit down at the Goth table. They're actually very nice and you get along with them pretty well. They ask you to join their discord server and there you discover they're actually furries. Sadly your reputation will never be the same after sitting at the furry table.\nYou have gained: 'emotional trauma'\n";

    popularity -= 30; 
    
    string d2 = "Emotional Trauma"; 
    inventory.push_back(d2); 

    cout << "\nPopularity -30\n";

    for(int i=0; i < inventory.size(); i++)
    cout << "\nInventory: " << inventory[i] << ' ';

    cout << "\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}

  //end of scenario 2
    cout << "\n";

  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

//Scenario 3
cout << "\n1:45pm | Last class of the day. You're in math class and the girl next to you passes you a note.\nWill you open it?\n";
  //choices for scenario 3
  cout << "\n[1]Open it\n[2]Read it later\n[3]Throw it away\n";
    cin >> scenario3;

if (scenario3==1 && scenario2==1){ 
  cout << "\nYou open the note. Inside she asks: 'What are you doing later?;)'. Becoming friends with the jocks does have it's perks.\n";
   
    popularity += 10; 
    romance += 15; 
     cout << "\nPopularity +10\nRomance +15\n";

 cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

}
else if (scenario3==1){
  cout << "\nYou open the note. Inside it says: 'Will you go out with me Jake?'. Your name is not Jake though, he's the guy next to you. The girl, embarrased, slaps you in front of the whole class and runs away. What the hell is her deal?\n";

    popularity -= 10; 
    romance -=10;

     cout << "\nPopularity -10\nRomance -10\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}

else if (scenario3==2){
  cout << "\nYou decide you will open the note later and pay attention to class. Good choice, go get that education I guess. The girl will never speak to you again though.\n";

    grades += 5; 
    popularity -= 5; 

    cout << "\nGrades +5\nPopularity -10\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
}

else {
  cout << "\nYou throw away the note assuming it was trash. What a jackass move.\n";

    popularity -= 10; 

    cout << "\nPopularity -10\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}

  // end of scenario 3  
    cout << "\n";

  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

// alternate ending check 
if(popularity<=20){ 
cout << "High school is tough. Specially when you're not popular. You got bullied out of freshman year. Good luck with the social anxiety for the rest of your life.\nYou've failed\n"; 
return 0; 
} 
else if(grades<=30){
cout << "Omg how the fuck are your grades that bad. You've now failed freshman year. Imagine having to repeat this hell of a year. AGAIN. Smh\nYou've failed\n";
return 0; 
} 
else { 
  cout << "You've made it through your first day. Make sure to wake up early for the next day...\n";
}

cout << "\n"; 
//end of day 1
cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout << "DAY 2 \n";
// Day 2 
// Scenario 4
 cout << "\n9:20am | I told you to wake up early! Now look, you're super late to school.\nWhat are you going to do?\n";
  //choices for scenario 4
  cout << "\n[1]Run to school\n[2]Bike to school\n[3]Wake up your mom to give you a ride to school \n[4]Skip school\n";

    cin >> scenario4;

if (scenario4==1){ 
  cout << "\nYou run to school a piece of toast in your mouth as you run. You fail to look both ways before crossing the street. A truck comes out of no where and you're isekaied into a new world. Sike, you just got hit by a truck. It hurts but at least the driver will pay for your medical bills.\n";
   
    health -= 50; 
    money += 50; 
     cout << "\nHealth -50\nMoney +50\n";

 cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

 cout << "\nPress Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

cout << "Your doctor tells you you have 8 broken ribs, your toes and your right pinky finger. Seems like you wont be going back to school in a bit. What a great first week of highschool. I hope you get better soon. :/\nYou've failed.\n";

return 0;

}
else if (scenario4==2){
  cout << "\nYou grab your bike and head to school.On the way a police officer stops you and questions why you're not wearing a helmet. You tell him you don't have one and concerned for your safety the police officer gives you a ride to school. He escorts you to class, and now you look like a badass in front of everyone. Dubular.\n";

    popularity += 20; 

     cout << "\nPopularity +20\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
}

else if (scenario4==3){
  cout << "\nYou wake up your mom to give you a ride to school. Infuriated she tells you: 'What am I to you? A taxi service? Fuck you, walk to school.'...Well that definetly didn't go well. She decided to take your weeks allowance. Broke ass.\n";

    money -= 20; 
    health -= 10;  

    cout << "\nMoney -20\nMental Health -10\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
}

else if(scenario4==4) {
  cout << "\nSkipping school I see? Hope you don't miss out on much.\n";

    popularity -= 10; 
    grades -= 15; 

    cout << "\nPopularities -10\nGrades -15\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

    cout << "\n";
 /// end of scenario 4
  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

   
    cout << "\n10:20am | While at home someone knocks the door. You ask who is it because stranger danger. It's a plumber. An oddly hot one, and with very reaveling clothes. Now why is a plumber at your house? You're mom rushes to the door and shoos you away. She say's they have business to do. You know this is your cue to go to your room and go in your room and put on your headphones on full blast. She gives you 60 dollars for you not to tell dad.\n";

    money += 60; 

    cout << "\nMoney +60\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

    cout << "\n";
  /// skipping school
  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

     cout << "\n11:00am | The house is getting too noisy for your liking. You decide that going to school was probably the better choice. You pack your shit and leave the house.\n"; 
  
    cout << "\n";
  /// skipping school
    cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }

  //scenario 5 
     cout << "\n11:20am | You walk into chemistry class. While doing a lab, you see the hot cheeto girl next to you trying to comb her edges. Her hair spray and the fire next to her seem like an explosive combination.\nWhat will you do?\n";

  //choices for scenario 5
    cout << "\n[1]Tell her to stop\n[2]Continue to watch her do her hair\n[3]Tell your teacher\n";
    cin >> scenario5; 

    if(scenario5==1){
      cout << "You tell the hot cheeto girl to stop spraying her hair. You tell her it's dangerous. She looks at you up and down in digust. 'I only won't insult you because you're kinda cute. I can't do this lab with my hair looking nappy'...\nAt least you warned her. And I guess she likes you?...\n";

      popularity += 5;
      romance += 15;

      cout << "\nPopularity +5\nRomance +15\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
    }

    else if (scenario5==2){
     cout << "You continue to watch the hot cheeto girl do her edges. She sprays the hair spray in the direction of the flames and the fire spreads on your lab table. Your apron catches on fire and you immediately head to the emergency shower. Now you're soaked and banned from ever doing labs again. At least her edges are tidied up. Periodt.\n";

      health -= 20;
      grades -= 10;

      cout << "\nHealth -20\nGrades -10\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
    }

    else {
      cout << "You immeadiately alert your teacher of a hazard in the lab. The teacher heads over and takes the hair spray away from the hot cheeto girl. Seems like somone read the lab safety guideline.... What a teachers pet. This is why no one likes you. \n";

      popularity -= 10;
      grades += 20;

      cout << "\nPopularity -10\nGrades +20\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
    }

    cout << "\n";
 /// end of scenario 5
  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

  //Scenario 6 
  cout << "\n2:30pm | Everyone seems to have something to do afterschool. Maybe you should try something too instead of just going home and eating you fatass.\nWhat looks fun?\n";
  //choices for scenario 6

  cout << "\n[1]Go to the school gym\n[2]Join the gaming club\n[3]Join book club\n[4]Go get some afterschool help\n";

  cin >> scenario6; 

  if(scenario6==1){ 
    cout << "You decide to go to the school gym. As you enter, you feel everyone staring at you. Insecure, you go in the corner to go work out. You bicep curl a max of 10 lbs. I can already see the incoming gainz.\n";

      popularity += 5;
      strength += 5;

      cout << "\nPopularity +5\nStrength +5\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

  }

  else if(scenario6==1 && scenario2==1){ 
    cout << "You decide to go to the school gym. As you enter, your fellow jock friends cheer you for entering their 'pumping zone'. Weird as that sounds you join their workout session in where oddly all of them are way too close to each other as they 'assist' them. The guy that gave you the condom before decides to help you with your barbell squat. You manage to get a max of 105 lbs. Pretty good for a beginner. He slaps you in the ass to congratulate you...Is he gay? And did you like that?\n";

      strength += 20;
      romance += 15; 

      cout << "\nStrength +20\nRomance +15\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

  }
  else if(scenario6==2){
    cout << "You decided to try joining the gaming club. They're playing Wii sports and you ask to join. Boxing on the Wii is much more tiring that it looks, after an hour you're soaking wet with sweat. Seems like joining the gaming club was a good choice.   \n";

      health += 10; 

      cout << "\nHealth +10\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

  }

  else if(scenario6==2 && scenario2==3){
    cout << "You decided to try joining the gaming club. The club is comprised of the same nerds which slandered you for your ingnorance on D&D. Annoyed by their loser mentality you stand up for yourself and decide to present them with a true game: Monopoly. You all play a 2hr game in which you win. Seems like you're now truly an alpha male.\n";

      popularity += 5;

      cout << "\nPopularity +5\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
  }

  else if(scenario6==3){ 
    cout << "You decide to join the book club. They invite you to come read their next group book together. Their next book is on Wattpad named 'bakugou x y/n' . Oddly, you find yourself hooked to this book. You've learned much about things that well...aren't PG13.\nDid you know that reading for 30 mins a day can help you be smarter?\n";

      grades += 10;

      cout << "\nGrades +10\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

  }
  else { 
    cout << "You go get some afterschool help. You've recently been stuggling in history class and head to Mrs.Texas's room. She's happy to see that you're showing some effort. You stay with her for an hour. You study, talk, and get along. You notice that Mrs.Texas is actually pretty hot. Could this become more than just a teacher student relationship?\n";

      popularity += 5;
      grades += 10;
      romance += 15;

      cout << "\nPopularity +5\nGrades +10\nRomance +15\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
  }
cout << "\n";
 /// end of scenario 6
  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

    // alternate ending check 
if(popularity<=20){ 
cout << "High school is tough. Specially when you're not popular. You got bullied out of freshman year. Good luck with the social anxiety for the rest of your life.\nYou've failed\n"; 
return 0; 
} 
else if(grades<=30){
cout << "Omg how the fuck are your grades that bad. You've now failed freshman year. Imagine having to repeat this hell of a year. AGAIN. Smh\nYou've failed\n";
return 0; 
} 
else { 
  cout << "You've made it through your second day. Most poeple barely make it this far, I'm impressed. Let's see how the third day will go for you...\n";
}

cout << "\n"; 
//end of day 1
cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

//Day 3
cout << "DAY 3 \n"; 
  //scenario7 
  cout << "\n11:30am | You walk into lunch and see some of your fellow freshman friends walking out to get lunch with some seniors. They ask you to come.\nBe careful if you get caught you might get suspended.\n";
  //choices for scenario 7
  cout << "\n[1]Fuck it join them\n[2]Stay and be a good kid\n";
  cin >> scenario7;

///////////////////////////FIGHT  SCENCE//////////////////////////////////

  if(scenario7==1) { 
  cout << "Badass. They're headed to 7/11 to get some slurpees. You get a brainfreeze as you slurped the slurpee too slurply.\n"; 
  
  health -= -10;
  popularity += 20;
      
    cout << "\nHealth -10\nGrades +10\nPopularity +20\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
  
    cout << "\n";
  /// end of scenario 7
  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
     
    //scenario8 
  cout << "\n11:40pm | As you exit the 7/11 with your fellow freshman and senior pals, the crackhead around the corner wishpers: 'psst~ want some drugs?'\n He's very creepy. What should you do?\n";
  //choices for scenario 8
  cout << "\n[1]Deny his offer\n[2]Accept his offer\n[3]Teach him about the harmful effects of drugs.\n";
  cin >> scenario8; 

  if(scenario8==1){
  cout << "choice one\n";
  }
  else if(scenario8==2){
  cout << "choice two\n";
  } 
  else {
  cout << "choice three\n";
  }

  cout << "\nThe crackhead did not like that. He comes out of his corner and prepares to fight you.\nHighschooler vs Crackhead...FIGHT!\n";

  int playerhealth = health; 
  int crackhealth = 50; 
  int attackchoice; 

  while(true){ 

  cout << "\nYour turn: \n";
  cout << "\n";
  //choices for scenario 8.5
  cout << "Player Health: " << playerhealth << "\n"; 
  cout << "Crackhead Health: " << crackhealth << "\n";
   
  cout << "\n";

  cout << "\n[1]Punch\n[2]Insult\n[3]Defend\n[4]Use inventory item\n";

  cin >> attackchoice; 

  if(attackchoice==1 && playerhealth > 0 && crackhealth > 0){ 
    cout << "You punched the crackhead. You did 10 damage. He punched you back, he did 15 damage.";

    playerhealth -= 15;
    crackhealth -= 10;  

    cout << "\n"; 
  }
  
  else if(attackchoice==2 && playerhealth > 0 && crackhealth > 0){ 
    cout << "\nYou insulted the crackheads hairline. He was very offended. You did 20 damage. He slaped you back. He did 10 damage."; 

    playerhealth -= 10;
    crackhealth -= 20; 
    cout << "\n";
  }

  else if(attackchoice==3 && playerhealth > 0 && crackhealth > 0){
    cout << "\nYou defend. The crackhead calls you a pussy. You gain 5 health. He lost 5 health."; 

    playerhealth += 5;
    crackhealth -=5; 
    cout << "\n";
  }

  else if(attackchoice==4 && playerhealth > 0 && crackhealth > 0){ 
  
  for(int i=0; i < inventory.size(); i++)
  cout << "\nYou dig into your pockets and pull out... " << inventory[i] << "?... I'm not sure how this was helpful. Crackehead is now confused. You did 10 damage. He did 5 damage.";

    playerhealth -= 5;
    crackhealth -= 10; 
    cout << "\n";
  }

   else if((attackchoice == 1 || attackchoice == 2 ||attackchoice == 3 ||attackchoice == 4) && playerhealth<=0){ 

    cout << "\nCrackhead wins! He slaps you and walks away with his crack. I don't think he was going to give you any anyways...\n"; 
    
    health -= 50; 
    popularity -= 20; 
    cout << "\nHealth -50\nPopularity -20\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

    cout << "\n";
   /// end of winning battle
  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');
    
    cout << "The fight against the crackhead made you come back late to school. You were caught skipping school, seems like you're suspended for 2 weeks. Sucks to be you\nYou've failed\n";

    return 0;  

  }

  else if((attackchoice == 1 || attackchoice == 2 ||attackchoice == 3 ||attackchoice == 4) && crackhealth<=0){ 
    cout << "\nYou win! You're really living it up this highschool year. You get back to school and tell everyone about your fight. You're truly a cool kid now!\n";

    popularity += 30; 
    cout << "\nPopularity +30\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 

     break;
  }

  }

  } 

///why did you not leave? lame
  else if(scenario7==2) {
     cout << "This is why you get no bitches. Why are you so lame?\n"; 
     popularity -= 200;

      cout << "\nPopularity -200\n";

    cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n"; 
  }

  cout << "\n";
 /// end of scenario 7/8
  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

    // alternate ending check 
if(popularity<=20){ 
cout << "High school is tough. Specially when you're not popular. You got bullied out of freshman year. Good luck with the social anxiety for the rest of your life.\nYou've failed\n"; 
return 0; 
} 
else if(grades<=30){
cout << "Omg how the fuck are your grades that bad. You've now failed freshman year. Imagine having to repeat this hell of a year. AGAIN. Smh\nYou've failed\n";
return 0; 
} 
else { 
  cout << "You finished the third day?!...I should make this game harder.\n";
}

cout << "\n"; 
//end of day 3
cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

/////////////////////////////////////////don't fuck with this code pls

//Day 4
cout << "DAY 4 \n"; 
 //scenario 9 
 cout << "\n10:15am | As you walk to your next class you see a kid being bullied in the hallway?\nWhat will you do?\n";
  //choices for scenario 9
  cout << "\n[1]Get to class\n[2]Intervene\n[3]Join bullying the kid\n";

    cin >> scenario9; 

if(scenario9==1){

    cout << "\n";
    money -= 20; 
    health -= 10;  

    cout << "\nMoney -20\nMental Health -10\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
}
else if(scenario9==2){

}
else if(scenario9==2 && popularity <= 60){

}
else if(scenario9==2 && popularity >=80){

}
else if(scenario9==3){

}
else if(scenario9==3 && popularity >= 80){

}
    cout << "\n";

  cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

///scenario 10 
cout << "\n12:50pm | the fitness gram pacer tasts.....";
  //choices for scenario 10
  cout << "\n[1]Get to class\n[2]Intervene\n[3]Join bullying the kid\n";

    cin >> scenario10; 


  if (scenario10==1){
    cout << "\n";
    money -= 20; 
    health -= 10;  

    cout << "\nMoney -20\nMental Health -10\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
  }

cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');

///scenario 11
cout << "\n2:00pm | You're in English class and they ask you to get in groups of two to do a project?\nWho will you partner up with?\n";
  //choices for scenario 11
  cout << "\n[1]Get to class\n[2]Intervene\n[3]Join bullying the kid\n";

    cin >> scenario11; 


  if (scenario11==1){
    cout << "\n";
    money -= 20; 
    health -= 10;  

    cout << "\nMoney -20\nMental Health -10\n";

  cout << "\nStats:\n \n Health: " << health << "\n Popularity: " << popularity << "\n Grades: " << grades << "\n Strength: " << strength << "\n Money: " << money << "\n Romance: " << romance << "\n";  
  }

cout << "Press Enter to Continue\n";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     cin.ignore(numeric_limits<streamsize>::max(),'\n');



//Day 5
cout << "DAY 5 \n"; 


//// confession under the sakura tree depending on who you bond with on scenario 11

    cout << "\n";

  cout << "Press Enter to Continue\n";

    cin.ignore(numeric_limits<streamsize>::max(),'\n');


// End of the week, End of game
cout << "Congratulations! You made it through your first week of high school! It will only get harder from here. But try to think positive! Think of all the good things you experienced this week... \nOk, yeah there was nothing good but beyond the point. I think if you survived this first week you're definetly not ready to survive the next 35 weeks. Welcome to hell on earth. \n"; 

    cout << "\n";

cout << "End of Week One \n";

cout << "To Be Continued\n";

}
