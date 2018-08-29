# Filler
In this project, we had to create a player to fight against the other student's players on the world famous (or infamous) Filler board.

The goal was to code an AI for the Filler game, for which we have a virtual machine to play against the other students.

### Step 1
 First you save/read input from the virtual machine
 
### Step 2
 Analyse the input and find the best possible position to place a piece and

### Step 3
 Send the coordinates of our move to the virtual machine.
 
## The rules are simple:
 Two players gain points by placing pieces on the board, one after the other.
 The game piece is obtained from the game master (in the form of an executable Ruby program).
 The game ends when a game piece can no longer be placed on the board.
 
 
The main goal of the project is to introduce us to basic algorithms and to have us manipulate inputs and outputs.

## Running and compiling
The resources folder contains the VM, maps and players provided.

Run `make` and the 'filler' executable will be created. Then `cd` into the `resources` directory.

Run it with:
`./filler_vm -p1 ../filler -p2 players/[player] -f maps/[map]`
