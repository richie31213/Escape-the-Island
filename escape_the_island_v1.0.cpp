#include <iostream>
#include <string>

using namespace std;

//GLOBAL VARIABLES
char decision = ' '; //USER INPUT
int inventory[] = {/*AXE*/ 0, /*ROPE*/ 0, /*KEY*/ 0, /*POWER*/ 0, /*HAMMER*/ 0, /*NAILS*/ 0, /*SAIL*/ 0, /*WOOD*/ 0};
string curLoc = " "; //CURRENT LOCATION
string curLocA[7]; //ARRAY FOR CURRENT LOCATION
int i = 0; //COUNTER
string functionToCall = " "; //IS USED TO DETERMINE WHERE TO GO
bool gameOver = false; //END CONDITION
bool bridgeFixed = false;
//FUNCTION DECLARATIONS
void beach();
void shed();
void boat();
void bush();
void cave();
void bridge();
void tent();
void windmill();
void fence();
void boulder();
void forest();
void inValid();
void showInventory();
void press();
void interact();
void chooseAgain();
void done();
void nothing();

//MAIN FUNCTION
int main() {
  //bool gameOver = false;
  string beachA[7] = {"shed", "inValid", "boat", "bush", "inventory", "interact", "quit"}; //CREATES BEACH ARRAY

  for(i = 0; i < 7; i++) {
    curLocA[i] = beachA[i]; //SETS CURRENT LOCATION ARRAY EQUAL TO BEACH ARRAY
  }

  curLoc = "beach"; //SETS CURRENT LOCATION TO BEACH

  cout << "Welcome to Escape the Island!\n";
  cout << "You wake up on an island in the middle of the night, and your boat has been destroyed.\nYou're unable to remember what happened.\nYou know you need to fix your boat, so you decide to explore the island.\n";
  cout << "You see a shed off in the distance, your boat behind you, and a bush to your right.\n\n";
  cout << "To go to the shed, press W\nTo go to the boat, press S\nTo go to the bush, press D\nTo check your inventory, press I\nTo quit the game press Q.\n";

//RUNS THE GAME UNTIL GAMEOVER IS SET EQUAL TO 1
  do {
    press();
    //callFunc(functionToCall);
    if(functionToCall == "shed") {
      shed();
    }
    else if(functionToCall == "boat") {
      boat();
    }
    else if(functionToCall == "bush") {
      bush();
    }
    else if(functionToCall == "beach") {
      beach();
    }
    else if(functionToCall == "cave") {
      cave();
    }
    else if(functionToCall == "bridge") {
      bridge();
    }
    else if(functionToCall == "tent") {
      tent();
    }
    else if(functionToCall == "windmill") {
      windmill();
    }
    else if(functionToCall == "fence") {
      fence();
    }
    else if(functionToCall == "boulder") {
      boulder();
    }
    else if(functionToCall == "forest") {
      forest();
    }
    else if(functionToCall == "inValid") {
      inValid();
    }
    else if(functionToCall == "inventory") {
      showInventory();
    }
    else if(functionToCall == "interact") {
      interact();
    }
    else if(functionToCall == "quit") {
      cout << "Thanks For Playing!\n";
      gameOver = true;
    }
    else {
      inValid();
    }
  } while(gameOver == false);
  return 0;
}

//FUNCTION TO TAKE IN USER INPUT TO DECIDE WHERE TO GO BASED OFF OF THE CURRENT LOCATION ARRAY
void press() {
  cin >> decision;

  if(decision == 'W' || decision == 'w') {
    functionToCall = curLocA[0];
  }
  else if(decision == 'A' || decision == 'a') {
    functionToCall = curLocA[1];
  }
  else if(decision == 'S' || decision == 's') {
    functionToCall = curLocA[2];
  }
  else if(decision == 'D' || decision == 'd') {
    functionToCall = curLocA[3];
  }
  else if(decision == 'I' || decision == 'i') {
    functionToCall = curLocA[4];
  }
  else if(decision == 'E' || decision == 'e') {
    functionToCall = curLocA[5];
  }
  else if(decision == 'Q' || decision == 'q') {
    functionToCall = curLocA[6];
  }
  else {
    inValid();
  }
}

void beach() {
  string beachA[7] = {"shed", "inValid", "boat", "bush", "inventory", "interact", "quit"}; //CREATES BEACH ARRAY

  for(i = 0; i < 7; i++) {
    curLocA[i] = beachA[i]; //SETS CURRENT LOCATION ARRAY EQUAL TO BEACH ARRAY
  }

  curLoc = "beach"; //SETS CURRENT LOCATION TO BEACH

  cout << "\nYou see a shed off in the distance, your boat behind you, and a bush to your right.\n\n";
  cout << "To go to the shed, press W\nTo go to the boat, press S\nTo go to the bush, press D\nTo check your inventory, press I\nTo quit the game press Q.\n";
} //BEACH FUNCTION

//SHED FUNCTION
void shed() {
  string shedA[7] = {"bridge", "cave", "beach", "inValid", "inventory", "interact", "quit"}; //CREATES SHED ARRAY

  for(i = 0; i < 7; i++) {
    curLocA[i] = shedA[i]; //SETS CURRENT LOCATION ARRAY EQUAL TO SHED ARRAY
  }
  curLoc = "shed"; //SETS THE CURRENT LOCATION TO SHED

  if(inventory[4] == 0) {
    cout << "\nYou decide to go to the shed.\nYou walk up to it.\nOff to the left you see an interesting cave.\nYou look past the shed and see a bridge.\nThe door to the shed is also unlocked.\n\n";
    cout << "To go to the bridge, press W.\nTo go to the cave, press A.\nTo go back to the beach, press S.\nTo check your inventory, press I\nTo enter the  shed, press E.\nTo quit the game press Q.\n";
  }
  else if(inventory[4] == 1) {
    cout << "\nYou decide to go to the shed.\nYou walk up to it.\nOff to the left you see an interesting cave.\nYou look past the shed and see a bridge.\n\n";
    cout << "To go to the bridge, press W.\nTo go to the cave, press A.\nTo go back to the beach, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.\n";
  }
}

//BOAT FUNCTION
void boat() {
  string boatA[7] = {"beach", "inValid", "inValid", "inValid", "inventory", "interact", "quit"}; //CREATES BOAT ARRAY

  for(i = 0; i < 7; i++) { //SETS CURRENT LOCATION ARRAY EQUAL TO BOAT ARRAY
    curLocA[i] = boatA[i];
  }
  curLoc = "boat"; //SETS CURRENT LOCATION TO BOAT

  cout << "\nYou walk to your wrecked boat.\nIt looks like it can be fixed.\n\n";
  cout << "To go back to the beach, press W.\nTo check your inventory, press I.\nTo try and fix your boat, press E.\nTo quit the game, press Q.\n";
}

//CAVE FUNCTION
void cave() {
  string caveA[7] = {"inValid", "inValid", "shed", "inValid", "inventory", "interact", "quit"}; //CREATES CAVE ARRAY

  for(i = 0; i < 7; i++) { //SETS CURRENT LOCATION ARRAY EQUAL TO CAVE ARRAY
    curLocA[i] = caveA[i];
  }
  curLoc = "cave"; //SETS CURRENT LOCATION TO CAVE

  if(inventory[2] == 0) {
    cout << "\nYou walk up to the cave and see something shimmering.\nYou begin contemplating on if you want to see what it is.\nThere could be anything in the cave waiting for you.\n\n";
    cout << "To go back to the shed, press S.\nTo check your inventory, press I.\nTo go inside and get the shimmering object, press E.\nTo quit the game, press Q.\n";
  }
  else if(inventory[2] == 1) {
    cout << "\nYou walk to the cave\nThere isn't anything interesting here.\n\n";
    cout << "To go back to the shed, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.\n";
  }
}

//BRIDGE FUNCTION
void bridge() {
  string bridgeA[7] = {"tent", "inValid", "shed", "inValid", "inventory", "interact", "quit"}; //CREATES BRIDGE ARRAY

  for(i = 0; i < 7; i++) { //SETS CURRENT LOCATION ARRAY EQUAL TO BRIDGE ARRAY
    curLocA[i] = bridgeA[i];
  }
  curLoc = "bridge"; //SETS CURRENT LOCATION TO BRIDGE

  if(bridgeFixed == false && inventory[1] == 0) {
    cout << "\nYou walk to the bridge.\nThe bridge is broken and you need wood to fix it.\nYou also see some rope and think that you might need it.\n\n";
    cout << "To try to cross the bridge, press W.\nTo go back to the shed, press S.\nTo check your inventory, press I.\nTo pick up the rope and try to fix the bridge, press E\nTo quit the game, press Q\n";
  }
  else if(bridgeFixed == false && inventory[1] == 1) {
    cout << "\nYou walk to the bridge.\nThe bridge is broken and you need wood to fix it.\n\n";
    cout << "To try to cross the bridge, press W.\nTo go back to the shed, press S.\nTo check your inventory, press I.\nTo quit the game, press Q\n";
  }
  else if(bridgeFixed == true && inventory[1] == 0) {
    cout << "\nYou walk to the bridge.\nYou have fixed the bridge, but haven't picked up the rope.\n\n";
    cout << "To cross the bridge, press W.\nTo go back to the shed, press S.\nTo check your inventory, press I.\nTo pick up the rope, press E.\nTo quit the game, press Q.\n";
  }
  else if(bridgeFixed == true && inventory[1] == 1) {
    cout << "\nYou walk to the bridge.\nYou have fixed the bridge.\n\n";
    cout << "To cross the bridge, press W.\nTo go back to the shed, press S.\nTo check your inventory, press I.\nTo quit the game, press Q\n";
  }
}

//TENT FUNCTION
void tent() {
  string tentA[7] = {"inValid", "inValid", "bridge", "inValid", "inventory", "interact", "quit"}; //CREATES TENT ARRAY

  for(i = 0; i < 7; i++) { //SETS CURRENT LOCATION ARRAY EQUAL TO TENT ARRAY
    curLocA[i] = tentA[i];
  }
  curLoc = "tent"; //SETS CURRENT LOCATION TO TENT

  if(bridgeFixed == false) {
    cout << "\nYou can't cross the bridge, it's still broken.\n\n";
    chooseAgain();
  }

  if(inventory[6] == 0 && bridgeFixed == true) {
    cout << "\nAfter crossing the bridge you see a tent and walk over to it.\nThe tent might make a good sail.\n\n";
    cout << "To go back to the bridge, press S.\nTo check your inventory, press I.\nTo pick up the tent, press E.\nTo quit the game, press Q.\n";
  }
  else if(inventory[6] == 1 && bridgeFixed == true) {
    cout << "\nAfter crossing the bridge you see a tent and walk over to it.\nThere's nothing else over here.\n\n";
    cout << "To go back to the bridge, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.";
  }
}

//WINDMILL FUNCTION
void windmill() {
  string windmillA[7] = {"inValid", "inValid", "boulder", "inValid", "inventory", "interact", "quit"}; //CREATES THE WINDMILL ARRAY

  for(i = 0; i < 7; i++) {
    curLocA[i] = windmillA[i]; //SETS CURRENT LOCATION ARRAY EQUAL TO WINDMILL ARRAY
  }
  curLoc = "windmill"; //SETS THE CURRENT LOCATION TO WINDMILL

  //if((inventory[2] == 0 && inventory[3] == 0) /*|| (inventory[2] == 1 && inventory[2] == 0)*/) {
    cout << "\nYou go up to the windmill.\nComing out of windmill is a wire.\n\n";
    cout << "To go back to the boulder, press S.\nTo check your inventory, press I.\nTo try to open the door, press E.\nTo quit the game, press Q.\n";
  // }
  // else if(inventory[2] == 1 && inventory[2] == 0) {
  //   cout << "\nYou go up to the windmill.\nComing out of windmill is a wire.\n\n";
  //   cout << "To go back to the boulder, press S.\nTo check your inventory, press I.\nTo try to open the door, press E.\nTo quit the game, press Q.\n";
  // }
  // else if(inventory[2] == 1 && inventory[3] == 1) {
  //   cout << "\nYou go up to the windmill.\nThe power is already on.\nThere's nothing else to do here.\n\n";
  //   cout << "To go back to the boulder, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.";
  // }
}

//FENCE FUNCTION
void fence() {
  string fenceA[7] = {"inValid", "inValid", "boulder", "inValid", "inventory", "interact", "quit"}; //CREATES THE FENCE ARRAY

  for(i = 0; i < 7; i++) {
    curLocA[i] = fenceA[i]; //SETS THE CURRENT LOCATION ARRAY EQUAL TO THE FENCE ARRAY
  }
  curLoc = "fence"; //SETS THE CURRENT LOCATION TO FENCE

  if(inventory[0] == 0) {
    cout << "\nYou walk to the fence and look around.\nYou see an axe laying on the ground.\nMaybe you could get some wood with that.\n\n";
    cout << "To go back to the boulder, press S.\nTo check your inventory, press I.\nTo pick up the axe, press E.\nTo quit the game, press Q.\n";
  }
  else if(inventory[0] == 1) {
    cout << "\nYou walk up to the fence.\nThere is nothing else to do here.\n\n";
    cout << "To go back to the boulder, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.\n";
  }
}

//BOULDER FUNCTION
void boulder() {
  string boulderA[7] = {"windmill", "fence", "bush", "inValid", "inventory", "interact", "quit"}; //CREATES THE BOULDER ARRAY

  for(i = 0; i < 7; i++) { //SETS THE CURRENT LOCATION ARRAY EQUAL TO THE BOULDER ARRAY
    curLocA[i] = boulderA[i];
  }
  curLoc = "boulder"; //SETS THE CURRENT LOCATION TO BOULDER

  cout << "\nYou walk to the boulder.\nThere is an arrow pointing to a windmill in the distance.\nYou also notice that there is some kind of fence to the left.\n\n";
  cout << "To go to the windmill, press W.\nTo go to the fence, press A.\nTo go back to the bush, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.\n";
}

//FOREST FUNCTION
void forest() {
  string forestA[7] = {"inValid", "inValid", "bush", "inValid", "inventory", "interact", "quit"}; //CREATES THE FOREST ARRAY

  for(i = 0; i < 7; i++) { //SETS THE CURRENT LOCATION ARRAY EQUAL TO THE FOREST ARRAY
    curLocA[i] = forestA[i];
  }
  curLoc = "forest"; //SETS THE CURRENT LOCATION TO FOREST

  if(inventory[0] == 0) {
    cout << "\nYou walk into the forest.\nYou think to yourself, 'I can get wood from here.'\nMaybe there is a tool I could use on the island.\n\n";
    cout << "To go back to the bush, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.\n";
  }
  else if(inventory[0] == 1 && inventory[7] == 0) {
    cout << "\nYou walk into the forest.\nYou think to yourself, 'I can get wood from here.'\n\n";
    cout << "To go back to the bush, press S.\nTo check your inventory, press I.\nTo get some wood, press E.\nTo quit the game, press Q.\n";
  }
  else if(inventory[0] == 1 && inventory[7] == 1) {
    cout << "\nYou walk into the forest.\nYou already have wood, there is nothing else to do here.\n";
    cout << "To go back to the bush, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.\n";
  }
}

//BUSH FUNCTION
void bush () {
  string bushA[7] ={"boulder", "forest", "beach", "inValid", "inventory", "interact", "quit"}; //CREATES THE BUSH ARRAY

  for(i = 0; i < 7; i++) { //SETS THE CURRENT LOCATION ARRAY EQUAL TO THE BUSH ARRAY
    curLocA[i] = bushA[i];
  }
  curLoc = "bush"; //SETS THE CURRENT LOCATION TO BUSH

  cout << "\nYou walk to the bush.\nYou see an interesting boulder off in the distance.\nYou also see a forest to the left.\n\n";
  cout << "To go to the boulder, press W.\nTo go to the forest, press A.\nTo go back to the beach, press S.\nTo check your inventory, press I.\nTo quit the game, press Q.\n";
}

//DISPLAYS THE USERS INVENTORY
void showInventory() {
  cout << "AXE     ROPE     KEY     POWER     HAMMER     NAILS     SAIL     WOOD\n";
  for(i = 0; i < 8; i++) {
    cout << inventory[i];
    cout << "        ";
  }
  cout << "\n";
  chooseAgain();
}

//FUNCTION THAT ALLOWS THE USER TO INTERACT WITH THE LOCATION
void interact() {
  if(curLoc == "shed") {
      if (inventory[3] == 0) {
        cout << "\nYou open the door and it is pitch black.\nYou need to find the power before going inside.\n\n";
        chooseAgain();
      }
      else if(inventory[3] == 1 && inventory[4] == 0 && inventory[5] == 0){
        cout << "\nYou enter the shed and find a hammer and some nails.\nYou put them in your backpack and head out.\n\n";
        inventory[4] = 1;
        inventory[5] = 1;
        chooseAgain();
      }
      else if(inventory[3] == 1 && inventory[4] == 1 && inventory[5] == 1) {
        done();
      }
  } //END OF SHED INTERACT
  else if(curLoc == "boat") { //START BOAT INTERACT
    if(inventory[1] == 0 && inventory[4] == 0 && inventory[5] == 0 && inventory[6] == 0 && inventory[7] == 0) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: rope, hammer and nails, the sail, and wood.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[4] == 0 && inventory[5] == 0 && inventory[6] == 0 && inventory[7] == 0) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: hammer and nails, the sail, and wood.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 0 && inventory[4] == 1 && inventory[5] == 1 && inventory[6] == 0 && inventory[7] == 0) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: rope, the sail, and wood.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 0 && inventory[4] == 0 && inventory[5] == 0 && inventory[6] == 1 && inventory[7] == 0) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: rope, hammer and nails, and wood.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 0 && inventory[4] == 0 && inventory[5] == 0 && inventory[6] == 0 && inventory[7] == 1) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: rope, hammer and nails, and the sail.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[4] == 1 && inventory[5] == 1 && inventory[6] == 0 && inventory[7] == 0) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: the sail, and wood.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[4] == 0 && inventory[5] == 0 && inventory[6] == 1 && inventory[7] == 0) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: hammer and nails, and wood.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[4] == 0 && inventory[5] == 0 && inventory[6] == 0 && inventory[7] == 1) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: hammer and nails, and the sail.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 0 && inventory[4] == 1 && inventory[5] == 1 && inventory[6] == 1 && inventory[7] == 0) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: rope, and wood.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 0 && inventory[4] == 1 && inventory[5] == 1 && inventory[6] == 0 && inventory[7] == 1) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: rope, and the sail.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[4] == 1 && inventory[5] == 1 && inventory[6] == 1 && inventory[7] == 0) {
      cout << "\nYou are missing a resource.\nThe resource you are missing is: wood.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[4] == 1 && inventory[5] == 1 && inventory[6] == 0 && inventory[7] == 1) {
      cout << "\nYou are missing a resource.\nThe resource you are missing is: the sail.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 0 && inventory[4] == 1 && inventory[5] == 1 && inventory[6] == 1 && inventory[7] == 1) {
      cout << "\nYou are missing a resource.\nThe resource you are missing is: rope.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 0 && inventory[4] == 0 && inventory[5] == 0 && inventory[6] == 1 && inventory[7] == 1) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are: rope, and hammer and nails.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[4] == 0 && inventory[5] == 0 && inventory[6] == 0 && inventory[7] == 1) {
      cout << "\nYou are missing some resources.\nThe resources you are missing are:  hammer and nails, and the sail.\n\n";
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[4] == 1 && inventory[5] == 1 && inventory[6] == 1 && inventory[7] == 1) {
      cout << "\nYou have fixed your boat and beat the game!\n\n";
      gameOver = true;
    }
  } //END OF BOAT INTERACT
  else if(curLoc == "cave") { //START CAVE INTERACT
    if(inventory[2] == 0) {
      cout << "\nYou decide to go get the shimmering object.\nWhen you get to it, you notice it's a key.\nYou pick up the key and put it in your backpack.\n\n";
      inventory[2] = 1;
      chooseAgain();
    }
    else if(inventory[2] == 1)
      done();
  } //END CAVE INTERACT
  else if(curLoc == "windmill") { //START WINDMILL INTERACT
    if(inventory[2] == 0) {
      cout << "\nThe door seems to be locked, you need to find the key.\n\n";
      chooseAgain();
    }
    else if(inventory[2] == 1 && inventory[3] == 0) {
      cout << "\nYou enter the windmill and see a power switch.\nYou go over to the power switch and turn it on.\n\n";
      inventory[3] = 1;
      chooseAgain();
    }
    else if(inventory[2] == 1 && inventory[3] == 1) {
      done();
    }
  } //END WINDMILL INTERACT
  else if(curLoc == "fence") { //START FENCE INTERACT
    if(inventory[0] == 0) {
      cout << "\nYou pick up the axe and put it in your backpack.\n\n";
      inventory[0] = 1;
      chooseAgain();
    }
    else if(inventory[0] == 1) {
      done();
    }
  } //END FENCE INTERACT
  else if(curLoc == "forest") { //START FOREST INTERACT
    if(inventory[0] == 0) {
      cout << "\nYou need something else to get the wood.\n\n";
      chooseAgain();
    }
    else if(inventory[0] == 1 && inventory[7] == 0) {
      cout << "\nYou start chopping some wood and putting it in your backpack.\n\n";
      inventory[7] = 1;
      chooseAgain();
    }
    else if(inventory[7] == 1) {
      done();
    }
  } //END FOREST INTERACT
  else if(curLoc == "bridge") { //START BRIDGE INTERACT
    if(inventory[1] == 0 && inventory[7] == 0) {
      cout << "\nYou pick up the rope, but still need wood to fix the bridge.\n\n";
      inventory[1] == 1;
      chooseAgain();
    }
    else if(inventory[1] == 0 && inventory[7] == 1) {
      cout << "\nYou pick up the rope and fix the bridge.\n\n";
      inventory[1] = 1;
      bridgeFixed = true;
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[7] == 1 && bridgeFixed == false) {
      cout << "\nYou fix the bridge.\n\n";
      bridgeFixed = true;
      chooseAgain();
    }
    else if(inventory[1] == 1 && inventory[7] == 1 && bridgeFixed == true) {
      done();
    }
  } //END BRIDGE INTERACT
  else if(curLoc == "tent") { //BEGIN TENT INTERACT
    if(inventory[6] == 0) {
      cout << "\nYou pick up the tent and store it in your backpack.\n\n";
      inventory[6] = 1;
      chooseAgain();
    }
    else if(inventory[6] == 1) {
      done();
    }
  } //END TENT INTERACT
  else {
    nothing();
  }
}

void inValid() {
  cout << "\nYou entered an invalid option.\n";
} //FOR INVALID INPUTS

void chooseAgain() {
  cout << "Please choose another option\n";
}

void done() {
  cout << "\nThere is nothing left to do here\n\n";
  chooseAgain();
}

void nothing() {
  cout << "\nYou can't do nything here.\n\n";
  chooseAgain();
}
