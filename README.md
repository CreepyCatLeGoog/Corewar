# Corewar

# Introduction

Corewar is a game. A very special game.
It consists of pitting little programs against one another in a virtualmachine.
The goal of the game is to prevent the other programs from functioning correctly by using all available means.

The game will, therefore, create a virtual machine in which the programs (written by the players) will faceoff.
Each program’s objective is to “survive”, that is to say executing a special instruction ("live") that means I’m still alive.
These programs simultaneously execute in the virtual machine and in the same memory zone,which enables them to write on one another.
The winner of the game is the last one to have executed the"live"instruction.

# The different parts

The project is divided into three seperate parts:
  •The Virtual Machine
  It houses the fighting binary programs (called champions), and provides them with a standard ex-ecution environment.
  It offers all kind of features that are useful to the champions’ fights.
  It must obviously be able to execute several programs at once.
  
  •The Assembler
  It enables you to write programs designed to fight (the champions).
  It therefore understands the as-sembly language and generates binary programs that the virtual machine can execute.
  
  •Champions
  This is your personal handiwork. They must be able to fight and to victoriously leave the virtual ma-chine arena.
  They are written in the assembly language specific to our virtual machine
