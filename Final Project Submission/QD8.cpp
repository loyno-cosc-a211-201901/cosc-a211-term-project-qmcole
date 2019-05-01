//QD8
//To simulate dating Q Cole
//Q Cole
//30 April 2019


#include <iostream>
using namespace std;

// prototypes of main functions used
int zooFunction();
int askOutFunction();
int bowlingFunction();

//this is my mian girl
int main ()
{
  //my necessary variables in main function
  int datePoints;
  int wantsToPlay;
  int whereToDate;

  //instructions
  cout << "Welcome to QD8. This is your chance to date Q Cole. This game will give you a series of choices, simulating a real dating experience. You can hit ENTER to advance text or 1-5 whenever prompted." << endl;
  cout << "Would you like to play?" << endl;
  cout << "1. Yes" << endl << "2. No" << endl;
  cin >> wantsToPlay; //find out if they want to play
  int result =0;

  if (wantsToPlay == 1)
  {
    result = askOutFunction(); //game starts if want to play
  }
  else
  {
    return 0; //game ends if don't want to play
  }

  if (result == 1)
  {
    zooFunction(); //zoo function for the zoo date
  }
  else if (result == 2)
  {
    bowlingFunction(); //bowling function for the bowling date
  }
  else
  {
    return 0; //If the user quits the game ends here
  }

  cout << "time passes" << cin.get()<< endl << "time passes" << endl;

  if (datePoints >= 6) //awh I text them back bc the date was good
{
  cout << "Waiting for a text now is excrutiating... I wonder if I'll hear anything." << endl << endl;
  cout << "Like it was on call, I got the ding on my phone in the middle of that thought. She said she had a great time. I'm gonna see her again. Wow. She's amazing." << endl << endl;
}
else // date was bad, so no text
{
  cout << "Its been two weeks now and she hasn't texted me about the date. That cannot be a good sign. Shit. I never stood a chance anyways. Oh well." << endl << endl << endl << endl << endl << endl <<endl << endl;
}

return 0; // game over
}


int askOutFunction ()
{
  int whereToDate;

  cout << "Hi. I'm a boy. I met a girl named Q Cole the other day. She was really cool. She's a stand up comedian, an accounting tutor, a Loyola student, and a total thiccie! I got her number from a friend and I want to ask her out." << endl;
  cin.get(); //wait for user to hit enter
  cout << "Should I take her to" << endl << "1. The zoo" << endl << "2. The bowling alley" << endl << "3. Nevermind!" << endl;
  cout << "Please enter your choice: ";
  cin >> whereToDate; //enter which date they want
  cout << endl << endl;

  switch (whereToDate)
  {
    //ask out to zoo
    case 1: cout << "Hey Q, do you wanna go to the zoo with me? Like... on a date?" << endl << endl;
    cin.get();
    cout << "Waiting for her response is awful. I wish I just knew everything. Ugh." << endl << endl;
    cin.get();
    cout << "About an hour later she texts back." << endl << endl;
    cin.get();
    cout << "Q: Yeah. I'd love to go to the zoo. Pick me up?" << endl << endl;
    return 1;

    //
    case 2: cout << "Hey Q, do you wanna go to the bowling alley with me? Like... on a date?" << endl << endl;
    cin.get();
    cout << "Waiting for her response is awful. I wish I just knew everything. Ugh." << endl << endl;
    cin.get();
    cout << "About an hour later she texts back." << endl << endl;
    cin.get();
    cout << "Q: Yeah. I'd love to go to the bowling alley. Meet you there?" << endl << endl;
    return 2;

    //NO DATE
    default: cout << "It would never happen anyways." << endl << endl;
  }
  return whereToDate;
}

// These are the prototypes of the subfunctions in the main zoo function
int outfit();
int transport();
int comment1();
int comment2();
int favAnimal();
int snack ();
int goat ();
int kids ();

int zooFunction () //The main zoo function
{
  int datePoints = 0;
  int outfitChoice, transportChoice, comment1Choice, comment2Choice, favAnimalGuess, snackChoice, goatChoice, kidChoice;

  datePoints += outfit(); //adding or not adding point 1

  //status update
  cout << "you now have " << datePoints << " date points." << endl << endl;

	datePoints += transport();

  cout << "you have " << datePoints << " date points." << endl << endl;

	datePoints += comment1();

  cout << "you have " << datePoints << " date points." << endl << endl;

  datePoints += comment2();

  cout << "you have " << datePoints << " date points." << endl << endl;

  datePoints += favAnimal();

  cout << "you have " << datePoints << " date points." << endl << endl;

  datePoints += snack();

  cout << "you have " << datePoints << " date points." << endl << endl;

  datePoints += goat();

  cout << "you have " << datePoints << " date points." << endl << endl;

  datePoints += kids();

  cout << "you have " << datePoints << " date points!" << endl << endl;

  return datePoints; //sending the value back so we know how the game ends
}





int outfit()
{
  int outfitChoice; //variable of the point

  cout << "I'm in my closet, trying to choose what to wear. I have no idea what she likes." << endl;
  cin.get();
	cout << "I look over my best options. Which should I wear?" << endl << endl;
	cout << "1. Tuxedo" << endl << "2. Tshirt" << endl << "3. clown suit" << endl << "4. button up" << endl;
	cout << "please enter your choice: ";
	cin >> outfitChoice;

	if (outfitChoice == 4) // how to get the point
	{
		cout << endl;
    cout << "I look good!" << endl << endl;
		return 1;
	}
	else // what happens if you don't get the point
	{
		cout << endl;
    cout << "Zam.. I hope she likes the fugly look" << endl << endl;
		return 0;
	}
}

int transport()
{
	int transportChoice; //variable for the point

  cout << "okay, I know what I'm wearing now how should we get there?" << endl;
	cout << "1. Streetcar " << endl << "2. bike " << endl << "3. drive" << endl;
	cout << "please enter your choice: ";
	cin >> transportChoice;

	switch (transportChoice)
	{
	case 1:
		cout << endl;
    cout << "Q: WOW! The streetcar is so cute. I can't wait to see the Lions at the zoo" << endl << endl;
    cin.get();
    cout << "Awesome! I made a good choice for this one" << endl;
    cin.get();
    cout << endl;
		return 1; //get point!

	case 2:
		cout << endl;
    cout << "Q: I don't have a bike, so I guess I'll meet you there? My fav animal is Lion btw!" << endl << endl;
    cin.get();
    cout << "Darn... I didn't think this one through" << endl << endl;
		break;

	case 3:
		cout << endl;
    cout << "Q: I get car sick really easily... I'll just think about my fav animal... LIONS!" << endl << endl;
    cin.get();
    cout << "Oof. I guess I should get to know her better" << endl << endl;
		break;

	default:
		cout << endl;
    cout << "I guess we'll just appear there randomly " << endl << endl;
	}

	return 0; //all other cases lead here, no point!
}

int comment1()
{
	int comment1Choice; // variable of the poioint

  cout << "We finally got to the zoo. The sun is shining, and Q just looks so good" << endl;
	cout << "Maybe I should start a conversation..." << endl;
  cin.get();
	cout << "What should I say to her?" << endl << endl;
	cout << "1. What a beautiful day!" << endl;
	cout << "2. I like your outfit." << endl;
	cout << "3. Environmentally, I cannot support this establishment!" << endl;
	cout << "please enter your choice: ";

	cin >> comment1Choice;
	switch (comment1Choice)
	{
	case 1:
    cout << endl;
		cout << "What a beautiful day" << endl;
    cin.get();
    cout << "Q: yeah! The sun is shining, and I want to get tan!" << endl << endl;
		return 1; //got point!!!!!!

	case 2:
    cout << endl;
		cout << "I like your outfit." << endl;
    cin.get();
    cout << "Q: Okay... I guess you only care about my appearance. Stupid boy!" << endl << endl;
		break;

	case 3:
    cout << endl;
		cout << "Environmentally, I cannot support this establishment!" << endl;
    cin.get();
    cout << "Q: uh... k" << endl << endl;
		break;

	default:
  cout << endl;
		cout << "I guess I'll just say nothing" << endl << endl;
	}
	return 0; //all other options lead here, to get no point
}

int comment2()
{
	int comment2Choice; // variable for the point

  cout << "I think I wanna keep talking" << endl << endl;
	cout << "What should I say next? " << endl;
	cout << "1. I'm already having so much fun" << endl;
	cout << "2. My dad died in a zoo..." << endl;
	cout << "3. I don't care about climate change!" << endl << endl;
	cout << "please enter your choice: ";

  cin >> comment2Choice;

	switch (comment2Choice)
	{
	case 1:
  cout << endl;
		cout << "I'm already having so much fun" << endl;
    cin.get();
    cout << "Q: duh, everyone has fun with me" << endl << endl;
            return 1; //yaaas got the point

	case 2:
        cout << endl;
		    cout << "My dad died in a zoo..." << endl;
     cin.get();
     cout << "Q: ...RIP "<< endl << endl;
		break;

	case 3:
    cout << endl;
		cout << "I don't care about climate change!" << endl;
    cin.get();
    cout << "yikes!" << endl << endl;
		break;

	default:
    cout << endl;
		cout << "I guess I'll just say nothing" << endl << endl;
	}

	return 0; //no point land
}

 int favAnimal()
  {
        int favAnimalGuess; // same general form from here on out

        cout << "I wanna take her to see something she loves..." << endl;
        cin.get();
        cout << "I know she told me what her favorite animal was earlier" << endl;
        cout << "But do I remember it? Geez, what was it?" << endl;
        cout << "was it" << endl << "1. Lion" << endl << "2. penguin"  << endl;
        cout << "3. gorilla" << endl << "4. Moose" << endl << "5. Giraffe" << endl;
        cout << "Please enter your choice: ";
        cin >> favAnimalGuess;

        if (favAnimalGuess == 1)
        {
            cout << endl;
            cout << "Q: OMG you rememebered my favorite animal! I'm a Leo, you know" << endl << endl;
            return 1;
        }
        else
        {
            cout << endl;
            cout << "Q: I hate that animal... ugh you're so clueless!" << endl << endl;
        }
        return 0;
    }
int snack ()
    {
        int snackChoice;

        cout << "We have been looking at animals all day, she seems to be enjoying herself" << endl;
          cin.get();
        cout << "I think I might really seal the deal if I buy her her favorite snack" << endl;
          cin.get();
        cout << "We've never talked about food, so I'll just have to go off of what I know from stalking her facebook" << endl;
        cout << "What should I get her from the zoo concession stand?" << endl;
        cout << "1. Peanuts" << endl << "2. soft pretzel" << endl << "3. popcorn" << endl;
        cout << "please enter your choice: ";
        cin >> snackChoice;

        if (snackChoice == 1)
        {
            cout << endl;
            cout << "Q: are you kidding me right now? Do you want me to die?" << endl << endl;
              cin.get();
            cout << "Wait, what?? I knew Q had a soy allergy, but I didn't think peanuts, too" << endl;
            cout << "I really blew this. She probably thinks I'm trying to kill her. Shoot." << endl << endl;
        }
        else
        {
            cout << endl;
            cout << "Q: oh nice, yum. thanks." << endl << endl;
            return 1;
        }
        return 0;
    }

int goat ()
    {
        int goatChoice;

        cout << "Since I am a boy and a big baby, I want to take Q to the petting zoo" << endl;
        cin.get();
        cout << "The petting zoo is hands down the best part of the world. I love goats. Some would say I am the GOAT! lol!" << endl;
          cin.get();
        cout << "Q doesn't seem too enthused by these goats though. How can I impress her here?" << endl;
        cout << "1. feed the goat" << endl << "2. ignore it" << endl << "3. brush it" << endl << "4. admire it from afar" << endl << endl;
        cout << "Please enter your choice: ";
        cin >> goatChoice;

        if (goatChoice == 3)
        {
            cout << endl;
            cout << "Q: you're good with animals... you should meet my cats" << endl << endl;
            return 1;
        }
        else if (goatChoice == 1)
        {
            cout << endl;
            cout << " Oh shit it bit me! I didn't realize goats were so mean. She won't stop laughing at me." << endl << endl;
        }
        else
        {
            cout << endl;
            cout << "I guess the petting zoo isn't the place to impress a woman" << endl << endl;
        }
        return 0;
    }
int kids ()
    {
        int kidChoice;

        cout << "Now some kids are going by! I should mention my opinion of kids so she knows im in it for the long haul" << endl;
          cin.get();
        cout << "Should I say: " << endl;
        cout << "1. I want them" << endl << " 2. I don't want them" << endl << "3. nevermind this is a terrible idea!" << endl;
        cout << "please enter your choice: ";
        cin >> kidChoice;

        if(kidChoice == 3)
        {
            return 1;
        }

        else
        {
            cout << endl;
            cout << "Q: shut up I don't wanna talk about that!";
        }
        return 0;
    }

    //prototypes of subfunctions for main bowling function
    int gameNumber ();
    int shoeSize ();
    int whoPay ();
    int goesFirst();
    int bowlingSnack();
    int trashTalk();
    int discoBowl();
    int bowlingGoodBye();

    // main bowling function
    int bowlingFunction()
    {
      int datePoints = 0;

      //updating datepoints
      datePoints += gameNumber();

      //status update after each choice/ event
      cout << "you now have " << datePoints << " date points." << endl << endl;

      datePoints += shoeSize();

      cout << "you have " << datePoints << " date points." << endl << endl;

      datePoints += whoPay();

      cout << "you have " << datePoints << " date points." << endl << endl;

      datePoints += goesFirst();

      cout << "you have " << datePoints << " date points." << endl << endl;

      datePoints += bowlingSnack();

      cout << "you have " << datePoints << " date points." << endl << endl;

      datePoints += trashTalk();

      cout << "you have " << datePoints << " date points." << endl << endl;

      datePoints += discoBowl();

      cout << "you have " << datePoints << " date points." << endl << endl;

      datePoints += bowlingGoodBye();

      cout << "you have " << datePoints << " date points." << endl << endl;

      return datePoints;
    }

    //bowling points
    int gameNumber ()
    {
      int gameNumberChoice; //variable for the point

      cout << "Q and I decided to meet here at the bowling alley. I decided to assert my manliness by showing up 30 minutes late." << endl << endl;
      cin.get();
      cout << "I don't understand why she looks so mad. Its just me, a guy being a dude." << endl << endl;
      cin.get();
      cout << "We give each other a frim handshake and a pleasant greeting and head up to the counter." << endl << endl;
      cin.get();
      cout << "How many games should we play?" << endl;
      cout << "1. 1" << endl << "2. 2" << endl << "3. 3" << endl;
      cout << "Please enter your choice: ";
      cin >> gameNumberChoice;
      cout << endl << endl;

      if (gameNumberChoice == 2)
      {
        cout << "Q: 2 games is the perfect amount. Not too many, not too few. Good choice, boy" << endl << endl;
        return 1;
      }
      else
      {
        cout << "Q: Really? That many games?" << endl << endl;
      }
      return 0;
    }

    int shoeSize()
    {
      int shoeSizeGuess;

      cout << "Q went down to our lane and I went to the next stop on the counter. Shoes." << endl << endl;
      cin.get();
      cout << "After ordering the shoes for myself, I stop. It looks like I'm going to have to guess her shoe size. She's pretty tall, and definitely a thiccie, so I'll have to consider those in my choice." << endl << endl;
      cin.get();
      cout << "Here goes nothing. What is her shoe size?" << endl;
      cout << "1. 7" << endl << "2. 8" << endl << "3. 10" << endl << "4.12" << endl;
      cout << "Please enter your choice: ";
      cin >> shoeSizeGuess;
      cout << endl << endl;

      if (shoeSizeGuess == 3)
      {
        cout << "I cross my fingers and text Q the shoe size I got her" << endl;
        cin.get();
        cout << "She texts back immediately" << endl << "Q: Hey nice! Those are just my size, thanks" << endl;
        cin.get();
        cout << "Yes! I am such an intelligent man!" << endl << endl;
        return 1;
      }
      else
      {
        cout << "I cross my fingers and text Q the shoe size I got her" << endl;
        cin.get();
        cout << "She texts me back immediately" << endl << "Q: Wrong size... why didn't you just ask like a normal person?" << endl;
        cin.get();
        cout << "She makes a great point. I should have just asked." << endl << endl;
      }
      return 0;
    }

    int whoPay ()
    {
      int whoPayChoice;

      cout << "Its now time for the counter guy to pop the biggest question of the night" << endl << endl;
      cin.get();
      cout << "Who is going to pay?" << endl << endl;
      cin.get();
      cout << "Q is still over by the lane... but its 2019 and we all have venmo..." << endl << endl;
      cin.get();
      cout << "I have to make this call. Who should pay?" << endl;
      cout << "1. Me" << endl << "2. Her" << endl << "3. We split" << endl << "4. I use my trusty counterfeit cash" << endl;
      cout << "Please enter your choice: ";
      cin >> whoPayChoice;
      cout << endl << endl;

      switch (whoPayChoice)
      {
        case 1: cout << "I did it. I just paid. I couldn't take all of this pressure. Being a man is so hard! I am oppressed!" << endl << endl;
                return 1;

        case 2: cout << "I paid at the counter, and before heading back texted her my venmo. Said the total was 40 bucks" << endl;
        cin.get();
        cout << "Q: Was it that much per person?" << endl << endl;
        cin.get();
        cout << "I don't think she expected me to make her pay, so I just told her yeah." << endl << endl;
        break;

        case 3: cout << "I paid at the counter, and as I walked to the lane, texted her my venmo. Told her the total was 40 bucks and that we should split it" << endl;
        cin.get();
        cout << "Q: yeah thats chill. I'll hit you with it right now." << endl << endl;
        return 1;

        case 4: cout << "I nervously pull the monopoly money out of my pocket, praying that the counter guy is color blind. For a split second I fear the worst, but all is well. He gives me 6 dollars in change. Q will hear nothing about this" << endl << endl;
        return 1;

        default: cout << "Its my friend skylar at the counter, so he's letting us play free." << endl << endl;
      }
      return 0;
    }
    int goesFirst()
    {
      int goesFirstChoice;

      cout << "It's game time now! I hope Q is ready for 100% man power in this bowling alley tonight!" << endl;
      cout << "Who should go first?" << endl << "1. Me" << endl << "2. Her" << endl;
      cout << "Please enter your choice: ";
      cin >> goesFirstChoice;
      cout << endl << endl;

      if (goesFirstChoice ==1 ){
        cout << "Q: sexist pig." << endl << endl;
      }
      else{
        cout << "Q: cool" << endl << endl;
      }
      return 1;
    }

    int bowlingSnack()
    {
      int bowlingSnackChoice;

      cout << "A couple rounds in and we've been having a good time. Q is really cool. No matter who ended up paying for the game, I promised myself I would buy her a snack. I head up to the concession stand and study the menu. So many great options! But I have to guess what she wants right now..." << endl;
      cin.get();
      cout << "Should I order her" << endl;
      cout << "1. Root beer" << endl << "2. A pound of tater tots" << endl << "3. peanuts" << endl << "4. Hot dog" << endl;
      cout << "Please enter your choice: ";
      cin >> bowlingSnackChoice;
      cout << endl << endl;

      if (bowlingSnackChoice == 2)
      {
        cout << "Hey Q! I ordered you some tater tots!" << endl;
        cin.get();
        cout << "Q: lol thanks. I love potatoes!" << endl;
        return 1;
      }
      else if (bowlingSnackChoice == 3)
      {
        cout << "I start walking towards the table with my tray of peanuts when Q gets up and runs. Why is she doing that? After a second of wondering, I get a ding on my phone, a text from her." << endl;
        cin.get();
        cout << "Q: Do you want me to die? I'm allergic to those! Throw those away and wash your hands immediately." << endl;
        cin.get();
        cout << "oops. I really dropped the ball on that one. So much for snacks." << endl << endl;
      }
      else
      {
        cout << "Q: Oh nice. Yum, thanks." << endl;
      }
      return 0;
    }

    int trashTalk()
    {
      int trashTalkChoice;

      cout << "Wow... Q is really bad at bowling. Like, indescribably horrible at bowling. I just beat her by 100 points and I only scored 105 points." << endl << endl;
      cin.get();
      cout<< "How should I trash talk that loser xD?" << endl;
      cout << "1. You suck!" << endl << "2. It's okay, you'll do better next time" << endl << "3. Take that dum dum!" << endl;
      cout << "Please enter your choice: ";
      cin >> trashTalkChoice;
      cout << endl << endl;

      if (trashTalkChoice == 3)
      {
        cout << "Q: haha! I'll get you next time, boy!" << endl;
        cin.get();
        cout << "Q and I had a good laugh with each other. Friendly competition is good sometimes." << endl << endl;
        return 1;
      }
      else
      {
        cout << "Q: Shut up. You're so stupid. I don't even like bowling." << endl << endl;
      }
      return 0;
    }

    int discoBowl()
    {
      int discoBowlChoice;

      cout << "Suddenly, the lights get dim. The familiar tune of Mr. Roboto by the Styx begins to fade up. We sense a movement from the ceiling." << endl << endl;
      cin.get();
      cout << "We know what is about to happen" << endl << endl;
      cin.get();
      cout << "Disco Bowl. The staple of the alley. The reason for the sport." << endl << endl;
      cin.get();
      cout << "What should we do?" << endl << "1. Dance!" << endl << "2. Arcade time!" << endl << "3. Get ready to go." << endl;
      cout << "Please enter your choice: ";
      cin >> discoBowlChoice;
      cout << endl << endl;

      if (discoBowlChoice == 3)
      {
        cout << "Q: You're right. Its been quite a long trip. I'm ready to roll out too." << endl << endl;
        return 1;
      }
      else
      {
        cout << "Q: Hey I can't stay for disco bowl because I'm epileptic. If you want to dance by yourself, though, I can just wait outside, I guess" << endl;
        cin.get();
        cout << "No, Q, you don't have to do that. We can just roll out of here." << endl << endl;
      }
      return 0;
    }

    int bowlingGoodBye ()
    {
      int goodByeChoice;

      cout << "This is it. Time to say goodbye. How can I show her I had a good time?" << endl;
      cout << "1. A cool high five!" << endl << "2. A sweaty hug" << endl << "3. Play it cool and don't say anything" << endl;
      cout << "Please enter your choice: ";
      cin >> goodByeChoice;
      cout << endl << endl;

      if (goodByeChoice == 1)
      {
        cout << "Q: That was smooth. Goodbye, boy :)" << endl;
        return 1;
      }
      else
      {
        cout << "Q: ...literally what the hell??" << endl;
      }
      return 0;
    }
