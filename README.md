# Voting Machine with Basic Blockchain

This is a simple implementation of a voting machine using C language with basic blockchain concepts. It allows users to cast votes for candidates, records the votes in a blockchain structure, and displays the voting statistics.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Blockchain Concept](#blockchain-concept)
- [Contributing](#contributing)
- [License](#license)

## Features

- Cast votes for candidates.
- Record votes in a basic blockchain structure.
- View voting statistics and the blockchain.

## Getting Started

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/Voting-Machine.git

2. Compile the program:

   gcc main.c -o voting_machine

3. Run

    ./voting_machine

----------------------------------------------------------------------
Usage
Choose the option to cast a vote.
Select a candidate or choose "None of These."
View voting statistics and the blockchain.
----------------------------------------------------------------------
Blockchain Concept
This implementation uses a simple linked list to represent the blockchain. Each block contains an index, vote counts for candidates, and a reference to the next block. When a vote is cast, a new block is created and added to the blockchain.
-----------------------------------------------------------------------
Contributing
Feel free to contribute by submitting issues or pull requests. Suggestions and improvements are welcome!!
